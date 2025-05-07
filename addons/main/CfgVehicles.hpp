class CfgVehicles {
    class B_Soldier_base_F;
    class B_PB21F_Soldier_base_F: B_Soldier_base_F {
        author = "PzBrig21";
        scope = 0;
        displayName = "Schütze";
        faction = "PB21F_BLU_F";
        editorSubcategory = "EdSubcat_PB21F_Personnel_DE";
        side = 1;
        nakedUniform = "U_BasicBody";
        uniformClass = "U_B_CombatUniform_mcam";
        icon = "iconMan";
        role = "Rifleman";
        identityTypes[] = {"LanguageENG_F","Head_NATO"};
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        magazines[] = {};
        respawnMagazines[] = {};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
        class UniformInfo;
    };

    /* Infanterie */
    class B_PB21F_Soldier_Schtz_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Schütze";
        icon = "iconMan";
        role = "Rifleman";
        class UniformInfo;
    };
    class B_PB21F_Soldier_Nahsi_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Nahsicherer";
        icon = "iconMan";
        role = "Rifleman";
        class UniformInfo;
    };
    class B_PB21F_Soldier_Funker_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Funker";
        icon = "iconMan";
        role = "Rifleman";
        class UniformInfo;
    };
    class B_PB21F_Soldier_Gren_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Grenadier";
        icon = "iconMan";
        role = "Grenadier";
        class UniformInfo;
    };
    class B_PB21F_Soldier_ZF_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Zielfernrohrschütze";
        icon = "iconMan";
        role = "Marksman";
        class UniformInfo;
    };
    class B_PB21F_Soldier_UAV_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Drohnenbediener";
        icon = "iconMan";
        role = "SpecialOperative";
        class UniformInfo;
    };
    class B_PB21F_Soldier_JTAC_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Fliegerleitoffizier (JTAC)";
        icon = "iconMan";
        role = "Rifleman";
        class UniformInfo;
    };
    class B_PB21F_Soldier_FO1_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Artilleriebeobachter";
        icon = "iconMan";
        role = "Rifleman";
        class UniformInfo;
    };
    class B_PB21F_Soldier_FO2_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Vorgeschobener Beobachter";
        icon = "iconMan";
        role = "Rifleman";
        class UniformInfo;
    };
    class B_PB21F_Soldier_EOD_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Kampfmittelbeseitiger";
        icon = "iconMan";
        role = "Sapper";
        class UniformInfo;
        engineer = 1;
        canDeactivateMines = 1;
    };
    class B_PB21F_Soldier_EOR_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Munitionsaufklärer";
        icon = "iconMan";
        role = "Rifleman";
        class UniformInfo;
    };
    class B_PB21F_Soldier_MG1_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Maschinengewehrschütze 1";
        icon = "iconManMG";
        role = "MachineGunner";
        class UniformInfo;
    };
    class B_PB21F_Soldier_MG2_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Maschinengewehrschütze 2";
        icon = "iconMan";
        role = "Assistant";
        class UniformInfo;
    };
    class B_PB21F_Soldier_AT1_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Panzerfaustschütze";
        icon = "iconManAT";
        role = "MissileSpecialist";
        class UniformInfo;
    };
    class B_PB21F_Soldier_AT2_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Panzerfaustschütze";
        icon = "iconManAT";
        role = "MissileSpecialist";
        class UniformInfo;
    };
    class B_PB21F_Soldier_AT2A_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Panzerfausthilfsschütze";
        icon = "iconMan";
        role = "Assistant";
        class UniformInfo;
    };
    class B_PB21F_Soldier_AA1_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Fliegerfaustschütze";
        icon = "iconManAT";
        role = "MissileSpecialist";
        class UniformInfo;
    };
    class B_PB21F_Soldier_AA2_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Fliegerfaustschütze";
        icon = "iconManAT";
        role = "MissileSpecialist";
        class UniformInfo;
    };
    class B_PB21F_Soldier_AA2A_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Fliegerfausthilfsschütze";
        icon = "iconMan";
        role = "Assistant";
        class UniformInfo;
    };
    class B_PB21F_Soldier_SanB_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Sanitäter-B";
        icon = "iconManMedic";
        role = "CombatLifeSaver";
        class UniformInfo;
        attendant = 1;
    };
    class B_PB21F_Soldier_SanC_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Sanitäter-C";
        icon = "iconManMedic";
        role = "CombatLifeSaver";
        class UniformInfo;
        attendant = 1;
    };
    class B_PB21F_Soldier_Sniper_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Scharfschütze";
        icon = "iconMan";
        role = "Marksman";
        class UniformInfo;
        camouflage = 0.6;
    };
    class B_PB21F_Soldier_Spotter_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Spotter";
        icon = "iconMan";
        role = "Rifleman";
        class UniformInfo;
        camouflage = 0.6;
    };
    class B_PB21F_Soldier_Pio_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Pionier";
        icon = "iconMan";
        role = "Sapper";
        class UniformInfo;
        engineer = 1;
        canDeactivateMines = 1;
    };
    class B_PB21F_Soldier_TrpFhr_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Truppführer";
        icon = "iconManLeader";
        role = "Rifleman";
        class UniformInfo;
    };
    class B_PB21F_Soldier_GrpFhr_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Gruppenführer";
        icon = "iconManLeader";
        role = "Rifleman";
        class UniformInfo;
    };
    class B_PB21F_Soldier_SGrpFhr_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Stellv. Gruppenführer";
        icon = "iconManLeader";
        role = "Rifleman";
        class UniformInfo;
    };
    class B_PB21F_Soldier_ZgFhr_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Zugführer";
        icon = "iconManLeader";
        role = "Rifleman";
        class UniformInfo;
    };
    class B_PB21F_Soldier_SZgFhr_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Stellv. Zugführer";
        icon = "iconManLeader";
        role = "Rifleman";
        class UniformInfo;
    };
    class B_PB21F_Soldier_KpFhr_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Kompanieführer";
        icon = "iconManOfficer";
        role = "Rifleman";
        class UniformInfo;
    };
    class B_PB21F_Soldier_SKpFhr_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Stellv. Kompanieführer";
        icon = "iconManOfficer";
        role = "Rifleman";
        class UniformInfo;
    };
    
    /* Fahrzeuge Besatzungen */
    class B_PB21F_Soldier_Kdt_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Kommandant";
        icon = "iconManLeader";
        role = "Crewman";
        class UniformInfo;
        engineer = 1;
        attendant = 1;
    };
    class B_PB21F_Soldier_Fhr_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Fahrer";
        icon = "iconMan";
        role = "Crewman";
        class UniformInfo;
        engineer = 1;
    };
    class B_PB21F_Soldier_RS_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Richtschütze";
        icon = "iconMan";
        role = "Crewman";
        class UniformInfo;
        engineer = 1;
    };
    class B_PB21F_Soldier_LS_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Ladeschütze";
        icon = "iconMan";
        role = "Crewman";
        class UniformInfo;
        engineer = 1;
    };
    class B_PB21F_Soldier_PZFD_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Panzerfachdiener";
        icon = "iconMan";
        role = "Crewman";
        class UniformInfo;
        attendant = 1;
        engineer = 1;
    };

    /* Helikopter Besatzungen */
    class B_PB21F_Soldier_Pilot_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Pilot";
        icon = "iconMan";
        role = "Crewman";
        class UniformInfo;
        engineer = 1;
    };
    class B_PB21F_Soldier_CPilot_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Copilot";
        icon = "iconMan";
        role = "Crewman";
        class UniformInfo;
        engineer = 1;
    };
    class B_PB21F_Soldier_WSO_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Waffensystemoffizier";
        icon = "iconMan";
        role = "Crewman";
        class UniformInfo;
        engineer = 1;
    };
    class B_PB21F_Soldier_BM_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Bordmechaniker";
        icon = "iconMan";
        role = "Crewman";
        class UniformInfo;
        engineer = 1;
    };
    class B_PB21F_Soldier_Crew_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Crewmitglied";
        icon = "iconMan";
        role = "Crewman";
        class UniformInfo;
        engineer = 1;
        attendant = 1;
    };

    /* Leitende und Ausbilder */
    class B_PB21F_Soldier_Leitender_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Leitender";
        icon = "iconManOfficer";
        role = "Rifleman";
        class UniformInfo;
        engineer = 1;
        attendant = 1;
    };
    class B_PB21F_Soldier_Ausbilder_F: B_PB21F_Soldier_base_F {
        author = "PzBrig21";
        scope = 2;
        displayName = "Ausbilder";
        icon = "iconManLeader";
        role = "Rifleman";
        class UniformInfo;
        engineer = 1;
        attendant = 1;
    };

    /* Flags */
    class FlagCarrier;
    class FlagCarrier_Asym;
    class PB21_Flag_GER_F: FlagCarrier_Asym {
        author = "PzBrig21";
        class SimpleObject {
            eden = 0;
            animate[] = {{"flag",0}};
            hide[] = {};
            verticalOffset = 3.977;
            verticalOffsetWorld = 0;
            init = "''";
        };
        editorPreview = "";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fahne Deutschland";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\pb21f\addons\main\data\flags\flag_ger_co.paa'";
        };
    };
    class PB21_Flag_GERBA_F: FlagCarrier_Asym {
        author = "PzBrig21";
        class SimpleObject {
            eden = 0;
            animate[] = {{"flag",0}};
            hide[] = {};
            verticalOffset = 3.977;
            verticalOffsetWorld = 0;
            init = "''";
        };
        editorPreview = "";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fahne Deutschland Bundesadler";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\pb21f\addons\main\data\flags\flag_gerba_co.paa'";
        };
    };
    class PB21_Flag_GERBF_F: FlagCarrier_Asym {
        author = "PzBrig21";
        class SimpleObject {
            eden = 0;
            animate[] = {{"flag",0}};
            hide[] = {};
            verticalOffset = 3.977;
            verticalOffsetWorld = 0;
            init = "''";
        };
        editorPreview = "";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fahne Deutschland Bundesdienst";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\pb21f\addons\main\data\flags\flag_gerbf_co.paa'";
        };
    };
    class PB21_Flag_ITA_F: FlagCarrier_Asym {
        author = "PzBrig21";
        class SimpleObject {
            eden = 0;
            animate[] = {{"flag",0}};
            hide[] = {};
            verticalOffset = 3.977;
            verticalOffsetWorld = 0;
            init = "''";
        };
        editorPreview = "";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fahne Italien";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\pb21f\addons\main\data\flags\flag_ita_co.paa'";
        };
    };
    class PB21_Flag_ITARP_F: FlagCarrier_Asym {
        author = "PzBrig21";
        class SimpleObject {
            eden = 0;
            animate[] = {{"flag",0}};
            hide[] = {};
            verticalOffset = 3.977;
            verticalOffsetWorld = 0;
            init = "''";
        };
        editorPreview = "";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fahne Italien Republik";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\pb21f\addons\main\data\flags\flag_itarp_ca.paa'";
        };
    };
    class PB21_Flag_AUT_F: FlagCarrier_Asym {
        author = "PzBrig21";
        class SimpleObject {
            eden = 0;
            animate[] = {{"flag",0}};
            hide[] = {};
            verticalOffset = 3.977;
            verticalOffsetWorld = 0;
            init = "''";
        };
        editorPreview = "";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fahne Österreich";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\pb21f\addons\main\data\flags\flag_aut_co.paa'";
        };
    };
    class PB21_Flag_AUTBD_F: FlagCarrier_Asym {
        author = "PzBrig21";
        class SimpleObject {
            eden = 0;
            animate[] = {{"flag",0}};
            hide[] = {};
            verticalOffset = 3.977;
            verticalOffsetWorld = 0;
            init = "''";
        };
        editorPreview = "";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fahne Österreich Bundesadler";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'z\pb21f\addons\main\data\flags\flag_autbd_co.paa'";
        };
    };
};