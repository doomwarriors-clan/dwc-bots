# Q3A Bot Characteristic Reference

Reference for the `CHARACTERISTIC_*` fields used in the bot definition
files (`bots/*_c.c`). Transcribed from an official reference screenshot on
2026-10-22. Values are 0–1 unless noted; files (`*_w.c`, `*_i.c`, `*_t.c`)
hold the referenced fuzzy-logic / chatter data.

| Field | Meaning |
|---|---|
| **Name** | Name of the bot. |
| **Gender** | Gender of the bot ( male, female, it – mechanical creature ). |
| **Attack skill** | How skilled the bot is when attacking. |
| **Weapon weights** | File with weapon selection fuzzy logic. |
| **View factor** | Scale factor for difference between current and ideal view angle to view angle change. |
| **View max change** | Maximum view angle change per second. |
| **Reaction time** | Reaction time in seconds. |
| **Aim accuracy** | Accuracy when aiming, a value between 0 and 1 for each weapon. |
| **Aim skill** | Skill when aiming, a value between 0 and 1 for each weapon. |
| **Chats** | File with individual bot chatter. |
| **Characters per minute** | How fast the bot types. |
| **Chat tendencies** | Tendencies to use specific chats when things happen. |
| **Croucher** | Tendency to crouch. |
| **Jumper** | Tendency to jump. |
| **Walker** | Tendency to walk instead of run. |
| **Weapon jumper** | Tendency to rocket jump. |
| **Item weights** | File with item goal selection fuzzy logic. |
| **Aggression** | Aggression of the bot. |
| **Self preservation** | Self preservation of the bot. |
| **Vengefulness** | How likely the bot is to take revenge. |
| **Camper** | Tendency to camp. |
| **Easy fragger** | Tendency to go for cheap kills. |
| **Alertness** | How alert the bot is. |
| **Fire throttle** | Tendency to fire continuously instead of pausing between shots. |

## Notes
- **Aim accuracy** is per-weapon (0–1). If a `*_c.c` block omits a
  per-weapon value, the global `Aim accuracy` is used for that weapon.
- **Weapon jumper** = rocket-jumping tendency (the most mobile/aggressive
  movement flag).
- **Fire throttle** = continuous fire vs. burst pauses between shots.
- **View factor / View max change** together control how quickly the bot can
  re-aim toward a moving target.
