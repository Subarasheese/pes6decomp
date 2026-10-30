/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
extern u8 D_003E9F48;

s32 func_0033AB00(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s1;
    s32 var_s2;
    u8 temp_a0;
    u8 temp_s0;
    void *var_a1;

    var_a1 = arg1;
    var_s2 = 0;
    temp_s0 = D_003E9F48;
    temp_a0 = M2C_FIELD((((arg2 & 0xFF) * 2) + M2C_FIELD(var_a1, s32 *, 0x40)), u8 *, 0x38);
    var_s1 = 0;
    switch (temp_s0) {                              /* irregular */
    case 3:
        var_a1 = (void *)0x76;
        if (temp_a0 == 0x78) {
            var_s1 = 1;
        }
    default:
block_21:
        if (((s32) temp_a0 >= (s32) var_a1) && (temp_a0 != 0xFF)) {
            var_s2 = 1;
        }
        var_a2 = arg3 == 0x10;
        if (var_a2 != 0) {
            var_a2 = var_s2 != 0;
        }
        Pes6BitSet_Write(arg0, 0x12A, var_a2);
        Pes6BitSet_Write(arg0, 0x12C, var_s1);
        Pes6BitSet_Write(arg0, 0x12F, temp_s0 == 3);
        Pes6BitSet_Write(arg0, 0x130, temp_s0 == 2);
        Pes6BitSet_Write(arg0, 0x131, temp_s0 == 1);
        var_a2_2 = arg3 == 0x10;
        if (var_a2_2 != 0) {
            var_a2_2 = var_s2 != 0;
        }
        if (var_a2_2 != 0) {
            var_a2_2 = var_s1 != 0;
        }
        Pes6BitSet_Write(arg0, 0x197, var_a2_2);
        return 1;
    case 2:
        var_a1 = (void *)0x67;
        if (temp_a0 == 0x69) {
            var_s1 = 1;
        }
        goto block_21;
    case 1:
        var_a1 = (void *)0x58;
        if (temp_a0 == 0x5A) {
            var_s1 = 1;
        }
        goto block_21;
    case 0:
        return 0;
    case 4:
        var_a1 = (void *)0x2710;
        goto block_21;
    }
}
