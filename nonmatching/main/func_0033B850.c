/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
extern s32 func_003389D0(s32, s32);
s32 func_0033B850(void *arg0, void *arg1) {
    s32 *temp_s3;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a2_5;
    s32 var_a2_6;
    s32 var_a2_7;
    s32 var_a2_8;
    s32 var_a2_9;
    u8 temp_s1;
    u8 temp_v1;
    void *temp_a0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_s3 = M2C_FIELD(arg1, s32 **, 0x44);
    temp_s0 = func_003389D0((s32) arg1, 0) & 0xFF;
    temp_v0 = func_003389D0((s32) arg1, 2);
    if (*temp_s3 == 6) {
        temp_s2 = temp_s0 & 0xFF;
        temp_v0_2 = temp_s2 + temp_s3;
        temp_s1 = M2C_FIELD(temp_v0_2, u8 *, 0x8EC);
        Pes6BitSet_Write(arg0, 0xD0, temp_v0 >= 0xE);
        Pes6BitSet_Write(arg0, 0xD1, (s32) M2C_FIELD(temp_v0_2, u8 *, 0x8EC));
        temp_a0 = temp_s2 + temp_s3;
        var_a2 = 0;
        if ((M2C_FIELD(temp_a0, u8 *, 0x8F2) == 1) && (M2C_FIELD(temp_a0, u8 *, 0x8F0) == 0)) {
            var_a2 = 1;
        }
        Pes6BitSet_Write(arg0, 0xD2, var_a2);
        var_a2_2 = M2C_FIELD(temp_a0, u8 *, 0x8F2) == 2;
        if (var_a2_2 != 0) {
            var_a2_2 = M2C_FIELD((temp_s2 + temp_s3), u8 *, 0x8F0) == 0;
        }
        Pes6BitSet_Write(arg0, 0xD3, var_a2_2);
        var_a2_3 = M2C_FIELD(temp_a0, u8 *, 0x8F2) == 3;
        if (var_a2_3 != 0) {
            var_a2_3 = M2C_FIELD((temp_s2 + temp_s3), u8 *, 0x8F0) == 0;
        }
        Pes6BitSet_Write(arg0, 0xD4, var_a2_3);
        temp_v0_3 = temp_s2 + temp_s3;
        var_a2_4 = 0;
        if ((M2C_FIELD(temp_v0_3, u8 *, 0x8EE) == 1) && (temp_s1 == 0)) {
            var_a2_4 = 1;
        }
        Pes6BitSet_Write(arg0, 0xD5, var_a2_4);
        var_a2_5 = M2C_FIELD(temp_v0_3, u8 *, 0x8EE) == 2;
        if (var_a2_5 != 0) {
            var_a2_5 = temp_s1 == 0;
        }
        Pes6BitSet_Write(arg0, 0xD6, var_a2_5);
        var_a2_6 = M2C_FIELD(temp_v0_3, u8 *, 0x8EE) == 3;
        if (var_a2_6 != 0) {
            var_a2_6 = temp_s1 == 0;
        }
        Pes6BitSet_Write(arg0, 0xD7, var_a2_6);
        var_a2_7 = M2C_FIELD(temp_v0_3, u8 *, 0x8EE) == 4;
        if (var_a2_7 != 0) {
            var_a2_7 = temp_s1 == 0;
        }
        Pes6BitSet_Write(arg0, 0xD8, var_a2_7);
        temp_v1 = M2C_FIELD(temp_v0_3, u8 *, 0x8EE);
        var_a2_8 = 0;
        var_a0 = 0;
        if (((s32) temp_v1 >= 5) && ((s32) temp_v1 < 0xE)) {
            var_a0 = 1;
        }
        if ((var_a0 != 0) && (temp_s1 == 0)) {
            var_a2_8 = 1;
        }
        Pes6BitSet_Write(arg0, 0xD9, var_a2_8);
        var_a2_9 = (s32) M2C_FIELD(temp_v0_3, u8 *, 0x8EE) >= 0xE;
        if (var_a2_9 != 0) {
            var_a2_9 = temp_s1 == 0;
        }
        Pes6BitSet_Write(arg0, 0xDA, var_a2_9);
        return 1;
    }
    return 0;
}
