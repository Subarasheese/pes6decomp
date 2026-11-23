/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    s32 parameter[31];
} AudioChannel;
extern AudioChannel D_00583F90[];
void func_002511D0(s32 channel, int field, int value) {
    switch (field) {
    case 0:
        D_00583F90[channel].parameter[1] = value;
        break;
    case 1:
        D_00583F90[channel].parameter[0] = value;
        break;
    case 8:
        D_00583F90[channel].parameter[14] = value;
        break;
    case 9:
        D_00583F90[channel].parameter[15] = value;
        break;
    case 10:
        D_00583F90[channel].parameter[12] = value;
        break;
    case 11:
        D_00583F90[channel].parameter[13] = value;
        break;
    case 12:
        D_00583F90[channel].parameter[10] = value;
        break;
    case 13:
        D_00583F90[channel].parameter[17] = value;
        break;
    case 3:
        D_00583F90[channel].parameter[5] = value;
        break;
    case 14:
        D_00583F90[channel].parameter[16] = value;
        break;
    case 4:
        D_00583F90[channel].parameter[18] = value;
        break;
    case 5:
        D_00583F90[channel].parameter[2] = value;
        break;
    case 6:
        D_00583F90[channel].parameter[8] = value;
        break;
    case 7:
        D_00583F90[channel].parameter[6] = value;
        break;
    case 17:
        D_00583F90[channel].parameter[19] = value;
        break;
    case 18:
        D_00583F90[channel].parameter[20] = value;
        break;
    case 19:
        D_00583F90[channel].parameter[21] = value;
        break;
    case 20:
        D_00583F90[channel].parameter[22] = value;
        break;
    case 21:
        D_00583F90[channel].parameter[23] = value;
        break;
    case 22:
        D_00583F90[channel].parameter[24] = value;
        break;
    case 23:
        D_00583F90[channel].parameter[25] = value;
        break;
    case 24:
        D_00583F90[channel].parameter[26] = value;
        break;
    case 15:
        D_00583F90[channel].parameter[9] = value;
        break;
    case 16:
        D_00583F90[channel].parameter[11] = value;
        break;
    }
}
