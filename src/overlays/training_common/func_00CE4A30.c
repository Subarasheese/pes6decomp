/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    s32 value;
    u8 reserved04[8];
} TrainingEntry;
extern TrainingEntry D_00CFDF50[], D_00CFE1A0[];

s32 func_00CE4A30(s32 group, s32 index) {
    s32 value;
    switch (group) {
    case 8:
        value = D_00CFE1A0[index].value;
        break;

    case 6:

    case 5:
        value = D_00CFDF50[index].value;
        break;

    default:
        value = 0;
        break;
    }

    return value;
}
