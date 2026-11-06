# dwc-bots

Custom **Quake III Arena** bot pack for the **Doomwarriors** clan
([doomwarriors.de](https://doomwarriors.de)).

14 hand-tuned bots (`dwcbot1`–`dwcbot11`, `awvp`, `dyg`, `freeze`) for the
clan's TDM / CTF / DM servers. The pack is pure botfiles on top of the stock
Q3A bot system — no engine or game-module modifications, so it is drop-in for
any Q3A-compatible engine (Q3e, Unlagged, OSP, …).

dwcbot1-5: highly tuned

dwcbot6-11: noobs

dyg, awvp, freeze: honorary members of our clan. In their remembrance.

## Bots

| Bot | In-game name | Primary weapon | Role |
|---|---|---|---|
| `dwcbot1` | PILLEpalle | Railgun | Aggressive TDM duelist, CTF flag carrier |
| `dwcbot2` | DISCOdisco | Rocket Launcher | — |
| `dwcbot3` | DALLIdalli | Railgun | Mirrors dwcbot1 (full stat match) |
| `dwcbot4` | PALIMpalim | Railgun | Mirrors dwcbot1 (full stat match) |
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

All 14 use the `freeze` model (see `scripts/bots.txt`), but who cares, you likely play with keel/pm or tankjr/pm as enemymodel anyway.

## File layout

```
dwc-bots/
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

## Building

pk3 files are zip files - ensure that you zip with v2 compatibility. More recent versions (such as v3) cannot be read/unpacked by Quake3 engine (possible TODO: enable Quake3e to unzip v3 zip files too ...)

```sh
zip -r -X zzz_dwc_bots.pk3 botfiles/ models/ scripts/
cp zzz_dwc_bots.pk3 ~/q3e/baseq3/
```
## Using

- Put `zzz_dwc_bots.pk3` into your `baseq3/` directory 
- Add bots from the server console, e.g. `addbot dwcbot1 5 red` (name, skill, team). Most bots only have skill 5

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

This repository is the leading source for the pack; a copy of it (git
submodule) lives in the private homelab repo under `dwc-bots/`.
