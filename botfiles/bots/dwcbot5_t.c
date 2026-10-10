//===========================================================================
//
// Name:		freeze_t.c
// Function:      	chat lines for freeze
// Programmer:		Lucipher
// Last update:		DEZ 23, 1999
//  
// Tab Size:		3 (real tabs) wtf?
//===========================================================================

chat "dwcbot5"
{
	#include "teamplay.h"

	//======================================================
	//======================================================
	type "game_enter" //initiated when the bot enters the game
	{
		"N00BS!";
		"langweilig...";
		"Putz dir erstmal die Nase du Lappen!";
		"Wo kann ich jetzt die Waffen kaufen?";
		"Janiebisch!";
		"Irgendein Karpfen anwesend?";
		"ZEFIX!";
		"LINUX!";
		"Also ", 1, "ist schonmal das Opfer!";
	} //end type

	type "game_exit" //initiated when the bot exits the game
	{
		"ich bin dann mal kacken";
		// 0 = bot name
		//4 = level's title
	} //end type

	type "level_start" //initiated when a new level starts
	{
		"DIE RAIL GEH÷RT MIR IHR OPFER!!!";
		"...NUR AM CAMPEN!";
		"gna...";
		"gehts jetzt schon los?";
		"WER HAT SCHON WIEDER TEAMREADY GEMACHT?!?!";
		// 0 = bot name
	} //end type

	type "level_end" //initiated when a level ends and the bot is not first and not last in the rankings
	{
		"ich bin dann mal kacken";
		"alles n00bs hier...";
		"HAT DAS SPIEL SCHON ANGEFANGEN????";
		"ich bin dann mal kacken";
		"ich koennte jetzt gut einen Karpfen vertragen";
		// 0 = bot name
		// 1 = random opponent
		// 2 = opponent in first place
		// 3 = opponent in last place
		// 4 = level's title
	} //end type

	type "level_end_victory" //initiated when a level ends and the bot is first in the rankings
	{
		"ich koennte jetzt gut einen Karpfen vertragen";
		"einfach...";
		"wann kommen die Gegner?";
		"mach mal deinen Monitor an!";
		"ich bin dann mal kacken";
		"ich koennte jetzt gut einen Karpfen vertragen";
		"hat jemand einen Karpfen gesehen?";

		// 0 = bot name
	} //end type

	type "level_end_lose" //initiated when a level ends and the bot is last in the rankings
	{
		"ich koennte jetzt gut einen Karpfen vertragen";
		"ich bin dann mal kacken";
		"schwule Shotgun!";
		"nur Luck! und nur am Campen!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		"schwule Shotgun!";
		"ich bin dann mal kacken";
		// 0 = bot name
	} //end type

	//======================================================
	//======================================================

	type "hit_talking" //bot is hit while chat balloon is visible; lecture attacker on poor sportsmanship
	{
		"Now that was nice manners. Bet you fart in public too.";
		"Keep that up and you'll be REAL popular here.";
		//0 = shooter
	} //end type

	type "hit_nodeath" //bot is hit by an opponent's weapon attack; either praise or insult
	{
		"LINUX ", 0, " schwule Shotgun!";
		"CHEAT! ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", wo isch doi Katz! Die Drecksvotzn!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		//0 = shooter
	} //end type

	type "hit_nokill" //bot hits an opponent but does not kill it
	{
		"LINUX ", 0, " schwule Shotgun!";
		"CHEAT! ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		//0 = opponent
	} //end type

	//======================================================
	//======================================================

	type "death_telefrag" //initiated when the bot is killed by a telefrag
	{
		"LINUX ", 0, " schwule Shotgun!";
		"CHEAT! ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		// 0 = enemy name
	} //end type

	type "death_cratered" //initiated when the bot is killed by taking "normal" falling damage
	{
		"LINUX ", 0, " schwule Shotgun!";
		"CHEAT! ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		// 0 = enemy name
	} //end type

	type "death_lava" //initiated when the bot dies in lava
	{
		"LINUX ", 0, " schwule Shotgun!";
		"CHEAT! ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		// 0 = enemy name
	} //end type

	type "death_slime" //initiated when the bot dies in slime
	{
		"LINUX ", 0, " schwule Shotgun!";
		"CHEAT! ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		// 0 = enemy name
	} //end type

	type "death_drown" //initiated when the bot drowns
	{
		"WO SIND HIER DIE KARPFEN!!!";
		"Hand me a towel, will you?";
		// 0 = enemy name
	} //end type

	type "death_suicide" //initiated when bot blows self up with a weapon or craters
	{
		"LINUX ", 0, " schwule Shotgun!";
		"CHEAT! ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		// 0 = enemy name
	} //end type

	type "death_gauntlet" //initiated when the bot is killed by a gauntlet attack
	{
		"LINUX ", 0, " schwule Shotgun!";
		"CHEAT! ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		// 0 = enemy name
	} //end type

	type "death_rail" //initiated when the bot is killed by a rail gun shot
	{
		"LINUX ", 0, " schwule Shotgun!";
		"suck my carp ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		// 0 = enemy name
	} //end type

	type "death_bfg" //initiated when the bot died by a BFG
	{
		"that was nasty :-))";
		DEATH_BFG2;
			// 0 = enemy name
	} //end type

	type "death_insult" //insult initiated when the bot died
	{
		"LINUX ", 0, " schwule Shotgun!";
		"suck my carp ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";

		// 0 = enemy name
	} //end type

	type "death_praise" //praise initiated when the bot died
	{
		
		"LINUX ", 0, " schwule Shotgun!";
		"suck my carp ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		// 0 = enemy name
	} //end type

	//======================================================
	//======================================================
	type "kill_rail" //initiated when the bot kills someone with rail gun
	{
		"LINUX ", 0, " schwule Shotgun!";
		"suck my carp ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		// 0 = enemy name
	} //end type

	type "kill_gauntlet" //initiated when the bot kills someone with gauntlet
	{
		"LINUX ", 0, " schwule Shotgun!";
		"suck my carp ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		// 0 = enemy name
	} //end type

	type "kill_telefrag" //initiated when the bot telefragged someone
	{
		"LINUX ", 0, " schwule Shotgun!";
		"suck my carp ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		// 0 = enemy name
	} //end type

	type "kill_suicide" //initiated when the players kills self
	{
		"LINUX ", 0, " schwule Shotgun!";
		"suck my carp ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		// 0 = enemy name
	} //end type

	type "kill_insult" //insult initiated when the bot killed someone
	{
		"LINUX ", 0, " schwule Shotgun!";
		"suck my carp ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		// 0 = enemy name
	} //end type

	type "kill_praise" //praise initiated when the bot killed someone
	{
		"LINUX ", 0, " schwule Shotgun!";
		"suck my carp ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";
		// 0 = enemy name
	} //end type

	//======================================================
	//======================================================

	type "random_insult" //insult initiated randomly (just when the bot feels like it)
	{
		"LINUX ", 0, " schwule Shotgun!";
		"suck my carp ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";

		// 0 = name of randomly chosen player
		// 1 = last victim name
	} //end type

	type "random_misc" //miscellanous chats initiated randomly
	{
		"LINUX ", 0, " schwule Shotgun!";
		"suck my carp ", 0;
		"wo isch doi Katz! Die Drecksvotzn!";
		0, ", deine Mudder steht vor Kik und schreit: ICH BIN BILLIGER!";
		0, ", deine Mudder hat mehr 3er als BMW";
		0, ", Deine Mudda heiﬂt Dieter und ist der Haarigste im Zoo.";
		0, ", Deine Mama schreit von der Toilette: Schaut mal Kinder, ich bin ein 3D Drucker!";
		"ich koennte jetzt gut einen Karpfen vertragen";

		// 0 = name of randomly chosen player
		// 1 = last victim name
	} //end type

} //end freeze chat	
