class ACE_medicalSupplyCrate_advanced;
class T1ME_medicalSupplyCrate: ACE_medicalSupplyCrate_advanced {
    author = ECSTRING(main,Author);
    displayName = CSTRING(medical);
    maximumLoad = 10000;
    vehicleClass = "T1ME_Object";
    class TransportItems {
        MACRO_ADDITEM(ACE_fieldDressing,25);
        MACRO_ADDITEM(ACE_packingBandage,25);
        MACRO_ADDITEM(ACE_elasticBandage,25);
        MACRO_ADDITEM(ACE_quikClot,25);
        MACRO_ADDITEM(ACE_tourniquet,25);
        MACRO_ADDITEM(ACE_morphine,25);
        MACRO_ADDITEM(ACE_epinephrine,25);
        MACRO_ADDITEM(ACE_bloodIV,25);
        MACRO_ADDITEM(ACE_bloodIV_500,25);
        MACRO_ADDITEM(ACE_bloodIV_250,25);
        MACRO_ADDITEM(ACE_plasmaIV,25);
        MACRO_ADDITEM(ACE_plasmaIV_500,25);
        MACRO_ADDITEM(ACE_plasmaIV_250,25);
        MACRO_ADDITEM(ACE_salineIV,25);
        MACRO_ADDITEM(ACE_salineIV_500,25);
        MACRO_ADDITEM(ACE_salineIV_250,25);
        MACRO_ADDITEM(ACE_personalAidKit,25);
        MACRO_ADDITEM(ACE_surgicalKit,25);
        MACRO_ADDITEM(ACE_bodyBag,25);
    };
};

class T1ME_medicalSupplyCrateMedium: T1ME_medicalSupplyCrate {
    displayName = CSTRING(medicalMedium);
    class TransportItems {
        MACRO_ADDITEM(ACE_fieldDressing,50);
        MACRO_ADDITEM(ACE_packingBandage,50);
        MACRO_ADDITEM(ACE_elasticBandage,50);
        MACRO_ADDITEM(ACE_quikClot,50);
        MACRO_ADDITEM(ACE_tourniquet,50);
        MACRO_ADDITEM(ACE_morphine,50);
        MACRO_ADDITEM(ACE_epinephrine,50);
        MACRO_ADDITEM(ACE_bloodIV,50);
        MACRO_ADDITEM(ACE_bloodIV_500,50);
        MACRO_ADDITEM(ACE_bloodIV_250,50);
        MACRO_ADDITEM(ACE_plasmaIV,50);
        MACRO_ADDITEM(ACE_plasmaIV_500,50);
        MACRO_ADDITEM(ACE_plasmaIV_250,50);
        MACRO_ADDITEM(ACE_salineIV,50);
        MACRO_ADDITEM(ACE_salineIV_500,50);
        MACRO_ADDITEM(ACE_salineIV_250,50);
        MACRO_ADDITEM(ACE_personalAidKit,50);
        MACRO_ADDITEM(ACE_surgicalKit,50);
        MACRO_ADDITEM(ACE_bodyBag,50);
    };
};

class T1ME_medicalSupplyCrateLarge: T1ME_medicalSupplyCrate {
    displayName = CSTRING(medicalLarge);
    class TransportItems {
        MACRO_ADDITEM(ACE_fieldDressing,100);
        MACRO_ADDITEM(ACE_packingBandage,100);
        MACRO_ADDITEM(ACE_elasticBandage,100);
        MACRO_ADDITEM(ACE_quikClot,100);
        MACRO_ADDITEM(ACE_tourniquet,100);
        MACRO_ADDITEM(ACE_morphine,100);
        MACRO_ADDITEM(ACE_epinephrine,100);
        MACRO_ADDITEM(ACE_bloodIV,100);
        MACRO_ADDITEM(ACE_bloodIV_500,100);
        MACRO_ADDITEM(ACE_bloodIV_250,100);
        MACRO_ADDITEM(ACE_plasmaIV,100);
        MACRO_ADDITEM(ACE_plasmaIV_500,100);
        MACRO_ADDITEM(ACE_plasmaIV_250,100);
        MACRO_ADDITEM(ACE_salineIV,100);
        MACRO_ADDITEM(ACE_salineIV_500,100);
        MACRO_ADDITEM(ACE_salineIV_250,100);
        MACRO_ADDITEM(ACE_personalAidKit,100);
        MACRO_ADDITEM(ACE_surgicalKit,100);
        MACRO_ADDITEM(ACE_bodyBag,100);
    };
};
