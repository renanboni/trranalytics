# Slack Notifications Setup

This guide explains how to set up Slack notifications for release events.

## What You'll Get

When a release completes (success or failure), a rich Slack message will be sent to your channel with:

- ✅ Release status (success/failure)
- 📦 Version number
- 👤 Who triggered the release
- 🔗 Direct link to the GitHub Release or workflow logs
- 📋 Summary of published artifacts

## Setup Instructions

### 1. Create a Slack Incoming Webhook

1. Go to your Slack workspace
2. Navigate to: https://api.slack.com/apps
3. Click **Create New App** → **From scratch**
4. Name it "TRRAnalytics Release Bot" (or your preference)
5. Select your workspace
6. Click **Create App**

### 2. Enable Incoming Webhooks

1. In your app settings, click **Incoming Webhooks** in the sidebar
2. Toggle **Activate Incoming Webhooks** to **On**
3. Scroll down and click **Add New Webhook to Workspace**
4. Select the channel where you want notifications (e.g., `#releases`, `#analytics`)
5. Click **Allow**

### 3. Copy the Webhook URL

You'll see a webhook URL like:
```
https://hooks.slack.com/services/T00000000/B00000000/XXXXXXXXXXXXXXXXXXXX
```

**⚠️ Keep this URL secret!** It allows anyone to post to your Slack channel.

### 4. Add Webhook to GitHub Secrets

1. Go to your GitHub repository
2. Click **Settings** → **Secrets and variables** → **Actions**
3. Click **New repository secret**
4. Name: `SLACK_WEBHOOK_URL`
5. Value: Paste your webhook URL
6. Click **Add secret**

### 5. Test the Integration

Trigger a release to test:

```bash
make release
```

Or manually trigger from GitHub Actions UI.

You should receive a Slack notification when the release completes!

## Customizing the Message

Edit `.github/workflows/release.yml` to customize:

- **Channel**: Change the webhook URL to post to different channels
- **Message format**: Modify the `payload` section
- **Conditions**: Update `if: always()` to send only on success/failure

### Example: Only notify on success

```yaml
- name: Send Slack notification
  if: success()  # Changed from 'always()'
  uses: slackapi/slack-github-action@v1.26.0
  # ... rest of config
```

### Example: Only notify on failure

```yaml
- name: Send Slack notification
  if: failure()  # Changed from 'always()'
  uses: slackapi/slack-github-action@v1.26.0
  # ... rest of config
```

## Message Preview

### Success Message
```
✅ Release Published

Version: v1.2.3
Status: success
Triggered by: john-doe
Workflow: Tag Push

🎉 Release artifacts published successfully!

Available on:
• GitHub Packages (Android)
• GitHub Releases (iOS XCFramework)
• Swift Package Manager

[📦 View Release]
```

### Failure Message
```
❌ Release Failed

Version: v1.2.3
Status: failure
Triggered by: john-doe
Workflow: Manual

⚠️ Release workflow encountered an error.

Please check the workflow logs for details.

[🔍 View Logs]
```

## Troubleshooting

### No Slack message received

**Check:**
1. Webhook URL is correctly added to GitHub Secrets
2. Secret name is exactly `SLACK_WEBHOOK_URL`
3. Webhook is active in Slack App settings
4. Workflow has internet access (GitHub-hosted runners do by default)

### Message sent to wrong channel

- Create a new webhook for the correct channel
- Update the `SLACK_WEBHOOK_URL` secret in GitHub

### Want to notify multiple channels

Create multiple webhook URLs and add them as separate secrets:
- `SLACK_WEBHOOK_RELEASES`
- `SLACK_WEBHOOK_ENGINEERING`

Then add multiple notification steps in the workflow.

## Advanced: Mention Users

To mention users in Slack messages, use user IDs:

```yaml
"text": "<!subteam^S12345678> New release available!"  # Mention user group
"text": "<@U12345678> Release failed!"                 # Mention specific user
```

Find user IDs:
- Right-click user in Slack → View profile → ⋯ → Copy member ID

## Disabling Notifications

To disable Slack notifications:

1. **Option A**: Delete the `SLACK_WEBHOOK_URL` secret from GitHub
2. **Option B**: Comment out the notification step in `.github/workflows/release.yml`

The workflow will continue to work, just without Slack notifications.

## Security Notes

- Never commit webhook URLs to git
- Rotate webhook URLs if exposed
- Use repository secrets, not environment variables
- Limit webhook permissions to posting in specific channels

## Resources

- [Slack Incoming Webhooks](https://api.slack.com/messaging/webhooks)
- [Slack Block Kit Builder](https://app.slack.com/block-kit-builder) (customize message format)
- [GitHub Secrets Documentation](https://docs.github.com/en/actions/security-guides/encrypted-secrets)
