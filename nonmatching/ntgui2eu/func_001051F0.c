/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001054F0(u32, s32, s32, s32);          /* extern */
s32 func_00105F10(u32);                             /* extern */
M2C_UNK func_00105F30(u32, s32, s32, s32);          /* extern */
s32 func_00105F90(u32, s32, s32, s32);              /* extern */
extern s32 D_006025DC;

s32 func_001051F0(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_v1;

    temp_v1 = arg0 >> 0x1D;
    D_006025DC = 0;
    switch (temp_v1) {                              /* irregular */
        do {
        case 1:
        } while (func_00105F10(arg0) != 0);
        D_006025DC = func_00105F90(arg0, arg1, arg2, arg3);
        break;
        do {
        case 0:
        } while (func_00105F10(arg0) != 0);
        func_00105F30(arg0, arg1, arg2, arg3);
        break;
    default:
        func_001054F0(arg0, arg1, arg2, arg3);
        break;
    }
    return D_006025DC;
}
