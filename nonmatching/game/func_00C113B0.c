/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB3318[];

void func_00C113B0(s32 arg0, u32 arg1, u32 arg2, f32 fparg0) {
    s32 temp_a2;
    s32 var_a4;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_a3;

    var_v1 = arg0 != 0;
    if (var_v1 != 0) {
        var_v1 = arg1 < 8U;
    }
    if (var_v1 != 0) {
        var_v1 = arg2 < 6U;
    }
    if (var_v1 != 0) {
        if (!(fparg0 >= 2.1474836e9f)) {
            var_a4 = (s32) fparg0;
        } else {
            var_a4 = (s32) (fparg0 - 2.1474836e9f) | 0x80000000;
        }
        var_v1_2 = (s32) arg2 >> 1;
        if ((s32) arg2 < 0) {
            var_v1_2 = (s32) (arg2 + 1) >> 1;
        }
        temp_a3 = arg0 + (arg1 * 3) + var_v1_2;
        temp_a2 = (arg2 & 1) * 4;
        *temp_a3 = (*temp_a3 & (0xF << temp_a2)) | (((((u32) var_a4 >= (u32) (*(u32 *)D_00CB3318)) ? (*(u32 *)D_00CB3318) : (u32) var_a4) & 0xFF & 0xF) << (4 - temp_a2));
    }
}
