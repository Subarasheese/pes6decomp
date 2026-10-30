/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern s32 D_003EA958;
extern s32 D_003EA95C;
extern s32 D_003EA960;
extern void *D_00A7A200;
extern char D_00A7A210[];

void func_00974CD0(void) {
    M2C_UNK *var_a0;
    s32 var_a1;

    if (D_00A7A200 != NULL) {
        func_001D4E00(D_00A7A200);
        D_00A7A200 = NULL;
    }
    var_a1 = 0;
    var_a0 = ((void *)D_00A7A210);
    do {
        M2C_FIELD(var_a0, s32 *, 0) = 0;
        var_a1 += 6;
        M2C_FIELD(var_a0, s32 *, 4) = 0;
        M2C_FIELD(var_a0, s32 *, 8) = 0;
        M2C_FIELD(var_a0, s32 *, 0xC) = 0;
        M2C_FIELD(var_a0, s32 *, 0x10) = 0;
        M2C_FIELD(var_a0, s32 *, 0x14) = 0;
        var_a0 += 0x18;
    } while (var_a1 < 0xC);
    D_003EA958 = 0;
    D_003EA95C = 0;
    D_003EA960 = 0;
}
