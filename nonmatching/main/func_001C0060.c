/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D6E40(void *);
extern void func_001D7F10(void *);
M2C_UNK func_001BF780(void *);                      /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */
extern char D_00398660[];
extern s32 D_003E9934;

s32 func_001C0060(void) {
    M2C_UNK *var_s1;
    u32 var_s2;

    if (M2C_FIELD(((void *)D_00398660), s32 *, 0x34) != 0) {
        if (M2C_FIELD(((void *)D_00398660), void **, 0x44) != NULL) {
            func_001D6E40(M2C_FIELD(((void *)D_00398660), void **, 0x44));
            M2C_FIELD(((void *)D_00398660), void **, 0x44) = NULL;
        }
        var_s2 = 0;
        var_s1 = ((void *)D_00398660);
        do {
            func_001D7F10(M2C_FIELD(var_s1, void **, 0x34));
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < 4U);
        M2C_FIELD(((void *)D_00398660), s32 *, 0x30) = -1;
        func_001C48E8(((void *)D_00398660) + 0x34, 0, 0x10);
        if (M2C_FIELD(((void *)D_00398660), s32 *, 0x5C) != 0) {
            func_001EDD90(M2C_FIELD(((void *)D_00398660), s32 *, 0x5C));
            M2C_FIELD(((void *)D_00398660), s32 *, 0x5C) = 0;
        }
    }
    func_001BF780(((void *)D_00398660) + 0x64);
    D_003E9934 = 0;
    return 1;
}
