/* compiler: mwcc-3.0.1b210 */
#include "pes6/player_db.h"

extern void **D_003A8898[];

void *func_00220540(void *section, u32 index) {
    void **slot;
    switch (index) {
    case 0:
        slot = &Pes6OptionData_Sections[0];
        break;
    case 1:
        slot = &Pes6OptionData_Sections[1];
        break;
    case 2:
        slot = &Pes6OptionData_Sections[2];
        break;
    case 3:
        slot = &Pes6OptionData_Sections[3];
        break;
    case 4:
        slot = &Pes6OptionData_Sections[4];
        break;
    case 5:
        slot = &Pes6OptionData_Sections[5];
        break;
    case 6:
        slot = &Pes6OptionData_Sections[6];
        break;
    case 7:
        slot = &Pes6OptionData_Sections[7];
        break;
    case 8:
        slot = &Pes6OptionData_Sections[8];
        break;
    case 9:
        slot = &Pes6OptionData_Sections[9];
        break;
    case 10:
        slot = &Pes6OptionData_Sections[10];
        break;
    case 11:
        slot = &Pes6OptionData_Sections[11];
        break;
    case 12:
        slot = &Pes6OptionData_Sections[12];
        break;
    case 13:
        slot = &Pes6OptionData_Sections[13];
        break;
    case 14:
        slot = &Pes6OptionData_Sections[14];
        break;
    case 15:
        slot = &Pes6OptionData_Sections[15];
        break;
    case 16:
        slot = &Pes6OptionData_Sections[16];
        break;
    case 17:
        slot = &Pes6OptionData_Sections[22];
        break;
    case 18:
        slot = &Pes6OptionData_Sections[17];
        break;
    case 19:
        slot = &Pes6OptionData_Sections[18];
        break;
    case 20:
        slot = &Pes6OptionData_Sections[19];
        break;
    case 21:
        slot = &Pes6OptionData_Sections[20];
        break;
    case 22:
        slot = &Pes6OptionData_Sections[23];
        break;
    case 23:
        slot = &Pes6OptionData_Sections[21];
        break;
    default:
        return 0;
    }
    if (section == 0) {
        section = *slot;
    } else {
        *slot = section;
        if (index == 15) {
            *D_003A8898[0] = section;
        } else if (index == 16) {
            *D_003A8898[1] = section;
        }
    }
    return section;
}
