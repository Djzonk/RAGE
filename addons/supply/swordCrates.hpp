class T1ME_metalAmmoCrate: T1ME_ammoCrateBase {
    scope = 2;
    displayName = CSTRING(weaponAmmo);

    class TransportMagazines {
            // Carbine
        MACRO_ADDMAGAZINE(rhs_mag_30Rnd_556x45_Mk318_Stanag,50);
        MACRO_ADDMAGAZINE(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,25);

        MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,25); // Glock 17
        MACRO_ADDMAGAZINE(rhs_200rnd_556x45_M_SAW, 25); // M249
        MACRO_ADDMAGAZINE(rhsusf_20Rnd_762x51_m118_special_Mag, 25); // Mk11 Mod 0
    };
    class TransportWeapons {

    };
};
