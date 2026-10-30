/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EEE60(void *, void *);
s8 func_008BB190(M2C_UNK, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_008D0150(void *, s32);                 /* extern */
extern u8 D_003E7900;
extern u8 D_003E7901;
extern u8 D_003E7902;
extern u8 D_003E7903;

void func_008D0430(void *arg0, s32 arg1) {
    s8 sp48;
    s8 sp49;
    s8 sp4A;
    s8 sp4B;
    u8 sp4C;
    u8 sp4D;
    u8 sp4E;
    u8 sp4F;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s8 var_v0;
    void *temp_a0;

    sp4E = D_003E7902;
    sp4C = D_003E7900;
    sp4D = D_003E7901;
    sp4F = D_003E7903;
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_a0 = M2C_FIELD(arg0, void **, 0x190);
    if (temp_a0 != NULL) {
        func_001EEE60(temp_a0, &sp4C);
    }
    M2C_FIELD(arg0, void **, 0x190) = NULL;
    if (temp_s0 != 0) {
        temp_v0 = arg1 & 0xFF;
        if (temp_v0 < 5) {
            var_a0 = 0;
loop_5:
            if (M2C_FIELD((temp_s0 + var_a0), u8 *, 1) != M2C_FIELD((temp_s0 + temp_v0), u8 *, 0x334)) {
                var_a0 += 1;
                if (var_a0 < 0x20) {
                    goto loop_5;
                }
            } else {
                M2C_FIELD(arg0, void **, 0x190) = (void *) M2C_FIELD((((arg1 & 0xFF) * 4) + arg0), void **, 0x1A8);
            }
        }
    }
    if ((arg0 != NULL) && (M2C_FIELD(arg0, void **, 0x190) != NULL)) {
        sp4A = 0xFF;
        sp49 = 0xFF;
        sp48 = 0xFF;
        sp4B = func_008BB190(0xFF, 0x40, 0x3C);
        func_001EEE60(M2C_FIELD(arg0, void **, 0x190), &sp48);
    }
    temp_v1 = arg1 & 0xFF;
    if (temp_v1 < 5) {
        var_v0 = ((u32) temp_v1 >> 1) & 0xFF;
    } else {
        var_v0 = 3;
    }
    M2C_FIELD(arg0, s8 *, 2) = var_v0;
    func_008D0150(arg0, var_v0 & 0xFF);
}
