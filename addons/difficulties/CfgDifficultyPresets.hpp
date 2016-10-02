class CfgDifficultyPresets {
	class Custom;
    class GVAR(Rangers): Custom {
        displayName = "Rangers";
        description = "Custom difficulty for Rangers gameplay.";
        optionDescription = "Custom difficulty for Rangers gameplay.";
        levelAI = "AILevelHigh";
    	class Options {
    		reducedDamage = 0;    // Reduced damage (0 = disabled, 1 = enabled)
    		groupIndicators = 0;      // Group indicators   (0 = never, 1 = limited distance, 2 = always)
    		friendlyTags = 0;         // Friendly name tags (0 = never, 1 = limited distance, 2 = always)
    		enemyTags = 0;            // Enemy name tags    (0 = never, 1 = limited distance, 2 = always)
    		detectedMines = 0;        // Detected mines     (0 = never, 1 = limited distance, 2 = always)
    		commands = 0;             // Commands           (0 = never, 1 = fade out, 2 = always)
    		waypoints = 1;            // Waypoints          (0 = never, 1 = fade out, 2 = always)
    		weaponInfo = 1;           // Weapon info        (0 = never, 1 = fade out, 2 = always)
    		stanceIndicator = 1;      // Stance indicator   (0 = never, 1 = fade out, 2 = always)
    		staminaBar = 0;       // Stamina bar (0 = disabled, 1 = enabled)
    		weaponCrosshair = 0;  // Weapon crosshair (0 = disabled, 1 = enabled)
    		visionAid = 0;        // Vision aid (0 = disabled, 1 = enabled)
    		thirdPersonView = 0;  // 3rd person view (0 = disabled, 1 = enabled)
    		cameraShake = 1;      // Camera shake (0 = disabled, 1 = enabled)
    		scoreTable = 0;       // Score table (0 = disabled, 1 = enabled)
    		deathMessages = 0;    // Killed by (0 = disabled, 1 = enabled)
    		vonID = 0;            // VON ID (0 = disabled, 1 = enabled)
    		mapContent = 0;       // Extended map content (0 = disabled, 1 = enabled)
    		autoReport = 0;       // Automatic reporting (0 = disabled, 1 = enabled)
    		multipleSaves = 0;    // Multiple saves (0 = disabled, 1 = enabled)
        };
    };
};
