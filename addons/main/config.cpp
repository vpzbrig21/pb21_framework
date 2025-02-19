#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {"B_PB21F_Soldier_Schtz_F","B_PB21F_Soldier_Nahsi_F","B_PB21F_Soldier_Funker_F","B_PB21F_Soldier_Gren_F","B_PB21F_Soldier_ZF_F","B_PB21F_Soldier_UAV_F","B_PB21F_Soldier_JTAC_F","B_PB21F_Soldier_FO1_F","B_PB21F_Soldier_FO2_F","B_PB21F_Soldier_EOD_F","B_PB21F_Soldier_EOR_F","B_PB21F_Soldier_MG1_F","B_PB21F_Soldier_MG2_F","B_PB21F_Soldier_AT1_F","B_PB21F_Soldier_AT2_F","B_PB21F_Soldier_AT2A_F","B_PB21F_Soldier_AA1_F","B_PB21F_Soldier_AA2_F","B_PB21F_Soldier_AA2A_F","B_PB21F_Soldier_SanB_F","B_PB21F_Soldier_SanC_F","B_PB21F_Soldier_Sniper_F","B_PB21F_Soldier_Spotter_F","B_PB21F_Soldier_Pio_F","B_PB21F_Soldier_TrpFhr_F","B_PB21F_Soldier_GrpFhr_F","B_PB21F_Soldier_SGrpFhr_F","B_PB21F_Soldier_ZgFhr_F","B_PB21F_Soldier_SZgFhr_F","B_PB21F_Soldier_KpFhr_F","B_PB21F_Soldier_SKpFhr_F","B_PB21F_Soldier_Kdt_F","B_PB21F_Soldier_Fhr_F","B_PB21F_Soldier_RS_F","B_PB21F_Soldier_LS_F","B_PB21F_Soldier_PZFD_F","B_PB21F_Soldier_Pilot_F","B_PB21F_Soldier_CPilot_F","B_PB21F_Soldier_WSO_F","B_PB21F_Soldier_BM_F","B_PB21F_Soldier_Crew_F"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Data_F_Loadorder","A3_Data_F_Enoch_Loadorder","cba_main","ace_main"};
        author = "";
        authors[] = {""};
        url = "";
        VERSION_CONFIG;
    };
};


class CfgSettings {
    class CBA {
        class Versioning {
            class ADDON {
                main_addon = QUOTE(ADDON);
                class dependencies {
                    CBA[] = {"cba_main", REQUIRED_CBA_VERSION, "true"};
                };
            };
        };
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgVehicles.hpp"