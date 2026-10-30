/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9C60(void *);
extern void func_001D7F10(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
M2C_UNK func_0099D280(s32);                         /* extern */
extern void *D_00A7DED8;

s32 func_009E0000(void) {
    s32 var_s0;
    void *temp_s1;
    void *temp_v0;

    if (D_00A7DED8 != NULL) {
        func_001D7F10(M2C_FIELD(D_00A7DED8, void **, 0x144));
        func_001B9C60(M2C_FIELD(D_00A7DED8, void **, 4));
        func_002DC1D0(M2C_FIELD(D_00A7DED8, s32 *, 8));
        func_002DF960(M2C_FIELD(D_00A7DED8, s32 *, 0xC));
        var_s0 = 0;
        do {
            temp_v0 = D_00A7DED8 + (var_s0 * 0x1C);
            temp_s1 = temp_v0 + 0x10;
            func_001D7F10(M2C_FIELD(temp_v0, void **, 0x10));
            func_001D7F10(M2C_FIELD(temp_s1, void **, 4));
            func_0099D280(M2C_FIELD(temp_s1, s32 *, 8));
            func_001D7F10(M2C_FIELD(temp_s1, void **, 0xC));
            func_001D7F10(M2C_FIELD(temp_s1, void **, 0x10));
            func_001C48E8(temp_s1, 0, 0x1C);
            var_s0 += 1;
        } while (var_s0 < 0xB);
        func_0099C7C0(D_00A7DED8);
        D_00A7DED8 = NULL;
        return 1;
    }
    return 0;
}
