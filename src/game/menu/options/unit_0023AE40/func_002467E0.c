/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_002F4E10(s32);                         /* extern */
extern s8 D_003E9AE8;
extern s16 D_003E9AEC;
extern s32 D_003E9AF4;

void func_002467E0(void) {
    if (D_003E9AF4 != 0) {
        func_002F4E10(D_003E9AF4);
        D_003E9AF4 = 0;
        D_003E9AE8 = 0;
        D_003E9AEC = 0;
    }
}
