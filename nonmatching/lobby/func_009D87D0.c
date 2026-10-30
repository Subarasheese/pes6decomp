/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9C60(void *);
extern void func_001D7F10(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
extern void *D_00A7DEA0;

s32 func_009D87D0(void) {
    s32 var_s1;
    s32 var_s2;
    void *temp_s0;
    void *temp_v0;

    if (D_00A7DEA0 != NULL) {
        func_001D7F10(M2C_FIELD(D_00A7DEA0, void **, 0x250));
        func_001B9C60(M2C_FIELD(D_00A7DEA0, void **, 4));
        func_002DC1D0(M2C_FIELD(D_00A7DEA0, s32 *, 8));
        func_002DF960(M2C_FIELD(D_00A7DEA0, s32 *, 0xC));
        var_s1 = 0;
        do {
            temp_v0 = D_00A7DEA0 + (var_s1 << 6);
            temp_s0 = temp_v0 + 0x10;
            func_001D7F10(M2C_FIELD(temp_v0, void **, 0x10));
            func_001D7F10(M2C_FIELD(temp_s0, void **, 4));
            func_001D7F10(M2C_FIELD(temp_s0, void **, 8));
            func_001D7F10(M2C_FIELD(temp_s0, void **, 0xC));
            var_s2 = 0;
loop_6:
            func_001D7F10(M2C_FIELD((temp_s0 + (var_s2 * 4)), void **, 0x10));
            var_s2 += 1;
            if (var_s2 < 8) {
                goto loop_6;
            }
            func_001C48E8(temp_s0, 0, 0x40);
            var_s1 += 1;
        } while (var_s1 < 9);
        func_0099C7C0(D_00A7DEA0);
        D_00A7DEA0 = NULL;
        return 1;
    }
    return 0;
}
