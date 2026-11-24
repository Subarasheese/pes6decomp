/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern u8 D_005926FF[], D_00591F24[];
void func_00B78E00(s32 index) {
    u8 modes[6] = {7, 2, 6, 3, 1, 4};
    D_005926FF[0] = index;
    D_00591F24[0] = modes[index];
}
