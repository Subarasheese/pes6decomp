/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BBC20(s32);
extern void func_001D7F10(void *);
M2C_UNK func_001C48E8(void **, M2C_UNK, M2C_UNK);   /* extern */
extern void *D_00398400;
extern char D_00398434[];

s32 func_001B8DC0(void) {
    s32 var_s1;
    void **var_s0;

    if ((*(s32 *)D_00398434) == 0) {

    } else {
        var_s1 = 0;
        var_s0 = &D_00398400;
        do {
            func_001D7F10(*var_s0);
            var_s1 += 1;
            *var_s0 = NULL;
            var_s0 += 4;
        } while (var_s1 < 4);
        if (M2C_FIELD(&D_00398400, void **, 0x14) != NULL) {
            func_001D7F10(M2C_FIELD(&D_00398400, void **, 0x14));
            M2C_FIELD(&D_00398400, void **, 0x14) = NULL;
        }
        if (M2C_FIELD(&D_00398400, void **, 0x18) != NULL) {
            func_001D7F10(M2C_FIELD(&D_00398400, void **, 0x18));
            M2C_FIELD(&D_00398400, void **, 0x18) = NULL;
        }
        if (M2C_FIELD(&D_00398400, void **, 0x30) != NULL) {
            func_001D7F10(M2C_FIELD(&D_00398400, void **, 0x30));
            M2C_FIELD(&D_00398400, void **, 0x30) = NULL;
        }
        func_001BBC20(M2C_FIELD(&D_00398400, s32 *, 0x1C));
        func_001C48E8(&D_00398400, 0, 0x40);
    }
    return 1;
}
