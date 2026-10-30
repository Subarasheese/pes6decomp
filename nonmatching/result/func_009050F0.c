/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDAE0(void *, s8);
extern void func_001D7D60(void *, s8);
extern void func_001B7B80(s32);
M2C_UNK func_001B79C0();                            /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_009100B0(M2C_UNK, M2C_UNK);            /* extern */
extern void *D_00923FC8;

s32 func_009050F0(void) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;

    if ((M2C_FIELD(D_00923FC8, s32 *, 0x648) != 1) && ((M2C_FIELD(D_00923FC8, s32 *, 0x910) + M2C_FIELD(D_00923FC8, s32 *, 0x8E8)) != 0)) {
        func_0026E840(0x84028400);
        var_s2 = 1;
        func_001D7D60(M2C_FIELD(D_00923FC8, void **, 0x918), 1);
        var_s1 = 0;
        var_s0 = 0;
        do {
            func_001D7D60(M2C_FIELD((D_00923FC8 + var_s0), void **, 0x950), 1);
            var_s1 += 1;
            var_s0 += 0x20;
        } while (var_s1 < 6);
        func_001EDAE0(M2C_FIELD(D_00923FC8, void **, 0x818), 0);
        M2C_FIELD(D_00923FC8, s32 *, 0x648) = 1;
        func_009100B0(1, 1);
        if (M2C_FIELD(D_00923FC8, s32 *, 0x8E8) < 2) {
            var_s2 = 0;
        }
        func_001D7D60(M2C_FIELD(D_00923FC8, void **, 0x91C), var_s2 & 0xFF);
        func_001D7D60(M2C_FIELD(D_00923FC8, void **, 0x920), var_s2 & 0xFF);
        func_001B79C0();
        func_001B7B80(5);
    }
    return 0;
}
