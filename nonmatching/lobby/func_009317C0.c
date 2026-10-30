/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00931870(s32, s32);                        /* extern */
s32 func_00931D30(s32);                             /* extern */
extern s32 D_003EAC7C;
extern s32 D_003EAC80;
extern s8 D_003EAC84;

s32 func_009317C0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;

    switch (D_003EAC7C) {                           /* irregular */
    case 0:
        temp_v0_2 = func_00931D30(arg1);
        D_003EAC80 = temp_v0_2;
        if (temp_v0_2 == 0) {
            return -1;
        }
        D_003EAC84 = 0;
        D_003EAC7C = 1;
    case 1:
        temp_v0 = func_00931870(arg0, D_003EAC80);
        if (temp_v0 != 0) {
            if (temp_v0 >= 0) {
                D_003EAC7C = 2;
                goto block_16;
            }
            D_003EAC7C = 0;
            return temp_v0;
        }
block_16:
        return 0;
    default:
        D_003EAC7C = 0;
        goto block_16;
    case 2:
        D_003EAC7C = 0;
        return 1;
    }
}
