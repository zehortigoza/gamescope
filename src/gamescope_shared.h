#pragma once

namespace gamescope
{
	enum GamescopeKnownDisplays
	{
		GAMESCOPE_KNOWN_DISPLAY_UNKNOWN,
		GAMESCOPE_KNOWN_DISPLAY_STEAM_DECK_LCD,      // Jupiter
		GAMESCOPE_KNOWN_DISPLAY_STEAM_DECK_OLED_SDC, // Galileo SDC
		GAMESCOPE_KNOWN_DISPLAY_STEAM_DECK_OLED_BOE, // Galileo BOE
	};

	enum GamescopeModeGeneration
	{
		GAMESCOPE_MODE_GENERATE_CVT,
		GAMESCOPE_MODE_GENERATE_FIXED,
	};

	enum GamescopeScreenType
	{
		GAMESCOPE_SCREEN_TYPE_INTERNAL,
		GAMESCOPE_SCREEN_TYPE_EXTERNAL,

		GAMESCOPE_SCREEN_TYPE_COUNT
	};
}

