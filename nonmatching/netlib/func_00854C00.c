/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_002DCE40(u16);
M2C_UNK func_001C4730(void *, void *, u32);         /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */

s32 func_00854C00(void *arg0, s32 arg1, void *arg2, u32 arg3) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s4;
    u32 var_a2;
    void *var_s2;

    var_s4 = arg1;
    var_s2 = arg0;
    func_001C48E8(arg2, 0, 0x136);
    if (arg3 < (u32) (var_s4 + 0x14)) {
        return -1;
    }
loop_2:
    if (var_s4 > 0) {
        temp_s1 = func_002DCE40(M2C_FIELD(var_s2, u16 *, 0)) & 0xFFFF;
        temp_s0 = func_002DCE40(M2C_FIELD(var_s2, u16 *, 2)) & 0xFFFF;
        switch (temp_s1) {                          /* irregular */
        case 10:
            func_001C4730(arg2 + 0x10A, var_s2, temp_s0 + 4);
            M2C_FIELD(arg2, s8 *, 1) = 1;
            break;
        case 9:
            var_a2 = temp_s0 + 4;
            if (var_a2 >= 0x109U) {
                var_a2 = 0x108;
            }
            func_001C4730(arg2 + 2, var_s2, var_a2);
            M2C_FIELD(arg2, s8 *, 0) = 1;
            break;
        }
        var_s2 = var_s2 + temp_s0 + 4;
        var_s4 -= temp_s0 + 4;
        goto loop_2;
    }
    return 0;
}
