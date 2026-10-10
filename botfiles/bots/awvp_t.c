//===========================================================================
//
// Name:			awvp_t.c
// Function:      	chat lines for awvp
// Programmer:		Lucipher
// Last update:		DEZ 23, 1999
//  
// Tab Size:		3 (real tabs) wtf?
//===========================================================================

chat "dwcbot1"
{
	#include "teamplay.h"

	//======================================================
	//======================================================
	type "game_enter" //initiated when the bot enters the game
	{
		"ist das nicht zu schnell?";

		//"whats up with you, are you starrin`???.";
		//"You have entered Hell, ", 1, ". Prepare to looose.";
		// 0 = bot name
		//1 = random player
		//4 = level's title
	} //end type

	type "game_exit" //initiated when the bot exits the game
	{
		"was passiert, wenn hier auf diesen POWER Knopf druecke???";
		// 0 = bot name
		//4 = level's title
	} //end type

	type "level_start" //initiated when a new level starts
	{
		"jetzt aber...wo ist mein Joystick???";
		
		// 0 = bot name
	} //end type

	type "level_end" //initiated when a level ends and the bot is not first and not last in the rankings
	{
		"spielt hier jemand mit Maus?";

		// 0 = bot name
		// 1 = random opponent
		// 2 = opponent in first place
		// 3 = opponent in last place
		// 4 = level's title
	} //end type

	type "level_end_victory" //initiated when a level ends and the bot is first in the rankings
	{
		"was ist passiert?";

		// 0 = bot name
	} //end type

	type "level_end_lose" //initiated when a level ends and the bot is last in the rankings
	{
		"wo kann man denn nun Waffen kaufen???";
		// 0 = bot name
	} //end type

	//======================================================
	//======================================================

	type "hit_talking" //bot is hit while chat balloon is visible; lecture attacker on poor sportsmanship
	{
		"HUCH! War keine Absicht!";
		//0 = shooter
	} //end type

	type "hit_nodeath" //bot is hit by an opponent's weapon attack; either praise or insult
	{
		"Kacknabbel!";

		//0 = shooter
	} //end type

	type "hit_nokill" //bot hits an opponent but does not kill it
	{
		"jetzt warte doch mal kurz, ich kann nicht so schnell";

		//0 = opponent
	} //end type

	//======================================================
	//======================================================

	type "death_telefrag" //initiated when the bot is killed by a telefrag
	{
		"was?";
		// 0 = enemy name
	} //end type

	type "death_cratered" //initiated when the bot is killed by taking "normal" falling damage
	{
		"wie jetzt...ich war doch in der Hocke!";
		// 0 = enemy name
	} //end type

	type "death_lava" //initiated when the bot dies in lava
	{
		"das sah so schoen bunt aus";
		// 0 = enemy name
	} //end type

	type "death_slime" //initiated when the bot dies in slime
	{
		"ich dachte das waere ein smoothie...";
		// 0 = enemy name
	} //end type

	type "death_drown" //initiated when the bot drowns
	{
		"ich habe das Seepferdchen!";
		// 0 = enemy name
	} //end type

	type "death_suicide" //initiated when bot blows self up with a weapon or craters
	{
		"was war das jetzt?";
		// 0 = enemy name
	} //end type

	type "death_gauntlet" //initiated when the bot is killed by a gauntlet attack
	{
		"das ging mir jetzt zu schnell";
		// 0 = enemy name
	} //end type

	type "death_rail" //initiated when the bot is killed by a rail gun shot
	{
		"...mit einem Laser!!!";
		// 0 = enemy name
	} //end type

	type "death_bfg" //initiated when the bot died by a BFG
	{
		"hm";
		DEATH_BFG2;
			// 0 = enemy name
	} //end type

	type "death_insult" //insult initiated when the bot died
	{
		"bist du schnell";
		"wenn ich meinen Joystick finde...";
		"wenn ich meinen Monitor auf den Kopf drehe - klappts dann besser???";
		// 0 = enemy name
	} //end type

	type "death_praise" //praise initiated when the bot died
	{
		"bist du schnell";
		"wenn ich meinen Joystick finde...";
		"wenn ich meinen Monitor auf den Kopf drehe - klappts dann besser???";
		// 0 = enemy name
	} //end type

	//======================================================
	//======================================================
	type "kill_rail" //initiated when the bot kills someone with rail gun
	{
		"was war das jetzt schon wieder?";
		"Kacknabbel!";
		// 0 = enemy name
	} //end type

	type "kill_gauntlet" //initiated when the bot kills someone with gauntlet
	{
		"was war das jetzt schon wieder?";
		"Kacknabbel!";

		// 0 = enemy name
	} //end type

	type "kill_telefrag" //initiated when the bot telefragged someone
	{
		"was war das jetzt schon wieder?";
		"Kacknabbel!";

		// 0 = enemy name
	} //end type

	type "kill_suicide" //initiated when the players kills self
	{
		"was war das jetzt schon wieder?";
		"Kacknabbel!";

		// 0 = enemy name
	} //end type

	type "kill_insult" //insult initiated when the bot killed someone
	{
		"was war das jetzt schon wieder?";
		"Kacknabbel!";

		// 0 = enemy name
	} //end type

	type "kill_praise" //praise initiated when the bot killed someone
	{
		"was war das jetzt schon wieder?";
		"Kacknabbel!";

		// 0 = enemy name
	} //end type

	//======================================================
	//======================================================

	type "random_insult" //insult initiated randomly (just when the bot feels like it)
	{
			"Kacknabbel!";
			"also in et kann man sich auch hinlegen...";

		// 0 = name of randomly chosen player
		// 1 = last victim name
	} //end type

	type "random_misc" //miscellanous chats initiated randomly
	{
			"Kacknabbel!";
			"also in et kann man sich auch hinlegen...";
		// 0 = name of randomly chosen player
		// 1 = last victim name
	} //end type

} //end awvp chat	
