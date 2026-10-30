/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E758C;
extern char D_00CBAA02[];

s32 func_00BCAB40(void) {
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a5;
    s32 var_a6;
    s32 var_v0;
    u8 temp_v1;
    void *var_a4;

    if (((*(u16 *)D_00CBAA02) - 0xA) < 0x46) {
        return 0x12C;
    }
    var_v0 = 0x12C;
    var_a6 = 0xA;
    var_a5 = 0;
    var_a4 = D_003E758C + 0x2148;
loop_4:
    temp_v1 = M2C_FIELD(var_a4, u8 *, 0x34E);
    if (var_a5 != 0) {
        temp_v1_2 = temp_v1 & 0xFF;
        switch (temp_v1_2) {                        /* irregular */
        case 8:
            /* fallthrough */
        case 1:
        case 2:
        case 3:
            var_v0 = var_a6 & 0xFFFF;
            break;
        }
    } else {
        temp_v1_3 = temp_v1 & 0xFF;
        if ((temp_v1_3 != 1) && (temp_v1_3 != 2) && (temp_v1_3 != 3) && (temp_v1_3 != 8)) {
            var_a5 = 1;
        }
        var_a6 += 1;
        var_a4 += 0x354;
        if (var_a6 < 0x47) {
            goto loop_4;
        }
    }
    return var_v0;
}
