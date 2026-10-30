/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005B3698[];

void func_0011BB68(s16 **arg0, u32 arg1) {
    s16 *var_a2;
    s32 var_v1;
    u32 temp_a1;
    u32 var_a1;

    var_a1 = arg1;
    var_a2 = *arg0;
    if (var_a1 > 0x10FFFFU) {
        var_v1 = 0;
    } else {
        var_v1 = (u32) (var_a1 + 0xFFFF2800) > 0x7FFU;
    }
    if (var_v1 == 0) {
        var_a1 = (*(u32 *)D_005B3698);
    }
    if (var_a1 <= 0xFFFFU) {
        *var_a2 = (s16) var_a1;
    } else {
        temp_a1 = var_a1 + 0xFFFF0000;
        *var_a2 = (temp_a1 >> 0xA) - 0x2800;
        var_a2 += 2;
        *var_a2 = (temp_a1 & 0x3FF) | 0xDC00;
    }
    *arg0 = var_a2 + 2;
}
