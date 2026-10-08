//===========================================================================
//
// Name:		freeze_i.c
// Function:		
// Programmer:		Lucipher
// Last update:		DEZ 23, 1999
//
// Tab Size:		4 (real tabs)
//===========================================================================

#include "inv.h"

//initial health/armor states
#define FS_HEALTH				2
#define FS_ARMOR				3

//initial weapon weights
#define W_SHOTGUN				50
#define W_MACHINEGUN				70
#define W_GRENADELAUNCHER			40
#define W_ROCKETLAUNCHER			120
#define W_RAILGUN				285
#define W_BFG10K				130
#define W_LIGHTNING				80
#define W_PLASMAGUN				80

//the bot has the weapons, so the weights change a little bit
#define GWW_SHOTGUN				35
#define GWW_MACHINEGUN				50
#define GWW_GRENADELAUNCHER			30
#define GWW_ROCKETLAUNCHER			90
#define GWW_RAILGUN				225
#define GWW_BFG10K				101
#define GWW_LIGHTNING				80
#define GWW_PLASMAGUN				80

//initial powerup weights
#define W_TELEPORTER				10
#define W_MEDKIT				10
#define W_QUAD					10
#define W_ENVIRO				400
#define W_HASTE					10
#define W_INVISIBILITY				200
#define W_REGEN					10
#define W_FLIGHT				10

//flag weight
#define FLAG_WEIGHT				50

//
#include "fw_items.c"

