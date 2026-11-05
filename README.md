# dwc-bots

Custom **Quake III Arena** bot pack for the **DoomWarriors** clan
([doomwarriors.de](https://doomwarriors.de)).

14 hand-tuned bots (`dwcbot1`–`dwcbot11`, `awvp`, `dyg`, `freeze`) for the
clan's TDM / CTF / DM servers. The pack is pure botfiles on top of the stock
Q3A bot system — no engine or game-module modifications, so it is drop-in for
any Q3A-compatible engine (Q3e, Unlagged, OSP, …).

## Bots

| Bot | In-game name | Primary weapon | Role |
|---|---|---|---|
| `dwcbot1` | PALLE | Railgun | Aggressive TDM duelist, CTF flag carrier |
| `dwcbot2` | DISCO | Rocket Launcher | — |
| `dwcbot3` | DALLI | Railgun | Mirrors dwcbot1 (full stat match) |
| `dwcbot4` | PALIM | Railgun | Mirrors dwcbot1 (full stat match) |
| `dwcbot5` | NUDELPasta | Lightning | Sustained TDM duelist, CTF defense |
| `dwcbot6` | [BOT]ManAtArms | Machine Gun | Aggressive TDM, shot-and-move |
| `dwcbot7` | [BOT]TrapDou | Plasma Gun | — |
| `dwcbot8` | [BOT]EvilKwan | BFG 10K | Mid-range CTF defender, area control |
| `dwcbot9` | [BOT]RamMan | Shotgun (weapon jumping) | Aggressive TDM, CTF mid-fighter, mobile |
| `dwcbot10` | [BOT]EvilWarlord | Railgun + Lightning | CTF defender, precise, holds positions |
| `dwcbot11` | eS.TRa.GoN | — | freeze-based |
| `awvp` | KACKspaten | — | Tuned to match freeze |
| `dyg` | [DYG]DieDrossel | — | Based on Slash, mid strength (between dwcbot1 and dwcbot2) |
| `freeze` | FREEZE | — | Base bot of the pack |

All 14 use the `freeze` model (see `scripts/bots.txt`).

## File layout

```
q3bots/
├── botfiles/
│   ├── bots/
│   │   ├── <bot>_c.c    characteristics: skill block with attack/aim skill,
│   │   │                per-weapon aim accuracy, reaction time, movement and
│   │   │                personality traits (aggression, self preservation, …)
│   │   ├── <bot>_w.c    fuzzy weights for weapon selection
│   │   ├── <bot>_i.c    fuzzy weights for item / goal selection
│   │   ├── <bot>_t.c    chat lines (see note below)
│   │   ├── dwcbot_t.c   unified chat file for all dwcbot1–11 bots
│   │   ├── awvp_t.c, dyg_t.c, freeze_t.c
│   ├── fw_weap.c, fw_items.c    shared fuzzy-logic fragments (original
│   │                             1.17-gen botfiles by MrElusive / Id Software)
│   └── BOT_AI_NOTES.md          reference table for the CHARACTERISTIC_* fields
├── models/players/<bot>/icon_default.tga    scoreboard icon per bot
├── scripts/bots.txt     bot registry: the 32 stock Q3A bots + the 14 DWC entries
└── create.sh            build script (see below)
```

The built `zzz_dwc_bots.pk3` (botfiles/ + models/ + scripts/ in a zip) is
created by `create.sh` and gitignored.

## Building

`create.sh` builds the pk3 and installs it (run from the working dir
`~/Documents/q3bots`; it copies this repo's contents in first):

```sh
cp -a ../dev/homelab/q3bots/* .
zip -r -X zzz_dwc_bots.pk3 botfiles/ models/ scripts/
cp zzz_dwc_bots.pk3 ~/q3e/baseq3/
```

The pk3 is a build artifact (gitignored, not committed) — build it with
`create.sh`, or simply `zip -r -X zzz_dwc_bots.pk3 botfiles/ models/
scripts/` from this directory.

## Using

- Put `zzz_dwc_bots.pk3` into your `baseq3/` directory (or the mod's game dir
  if the server runs a mod such as OSP).
- Add bots from the server console, e.g. `addbot dwcbot1 5` (name, skill), or
  pick them by their in-game names (PALLE, DISCO, …) from the bot list.
- `scripts/bots.txt` registers the 14 DWC bots alongside the 32 stock Q3A
  bots (Xaero, Orbb, …), so the engine's standard `bots.txt` handling works
  unchanged.

## Notes

- Tuning follows the official Q3A bot design paper (MrElusive, 1999/2001);
  `botfiles/BOT_AI_NOTES.md` holds the field reference. Per-weapon
  `AIM_SKILL` values are kept in the 0.85+ band (exact movement leading +
  splash geometry) and reaction times in the 0.05–0.15 s range.
- Chat: all `dwcbot*` bots share the single chat file `dwcbot_t.c` to keep
  the pack small; the engine selects the per-bot block via
  `CHARACTERISTIC_CHAT_NAME`. `awvp`, `dyg` and `freeze` keep their own chat
  files.
- The botfiles are plain text and are parsed at runtime — editing them
  requires no compiler; rebuild the pk3 (or re-zip) after changes.

## License / provenance

- Bot system and shared fuzzy-logic files: (C) 1999–2001 Id Software, Inc. /
  MrElusive (original Q3A botfiles).
- Character, item/weapon weight and chat files: tuned by dwc.motter
  (DoomWarriors).

This repository is the leading source for the pack; a mirror of the same
content lives in the private homelab repo under `q3bots/`.
