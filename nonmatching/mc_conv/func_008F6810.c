/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E9370(int);
extern s32 func_001E6B70(s32);
extern void func_008F68F0(void);
extern s32 D_003EA6C4;
extern char D_0065C340[];
extern char D_008FEA80[];

s32 func_008F6810(void) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = 0;
    if (D_003EA6C4 != 1) {
        M2C_FIELD(((void *)D_0065C340), s8 *, 6) = 4;
        M2C_FIELD(((void *)D_008FEA80), s8 *, 7) = 1;
        M2C_FIELD(((void *)D_0065C340), s8 *, 4) = 1;
        M2C_FIELD(((void *)D_0065C340), s8 *, 0xB) = 1;
        M2C_FIELD(((void *)D_0065C340), s8 *, 0xE) = 1;
        M2C_FIELD(((void *)D_0065C340), s8 *, 1) = 1;
        M2C_FIELD(((void *)D_0065C340), s8 *, 5) = 1;
        M2C_FIELD(((void *)D_0065C340), s8 *, 2) = 1;
        func_008F68F0();
        D_003EA6C4 += 1;
        func_002E9370(0x80000);
    } else {
        M2C_FIELD(((void *)D_008FEA80), s8 *, 7) = 0;
        var_s0 = 1;
        M2C_FIELD(((void *)D_0065C340), s8 *, 4) = 1;
        var_s1 = 0;
        M2C_FIELD(((void *)D_0065C340), s8 *, 0xB) = 1;
        M2C_FIELD(((void *)D_0065C340), s8 *, 0xE) = 0;
        M2C_FIELD(((void *)D_0065C340), s8 *, 1) = 1;
        M2C_FIELD(((void *)D_0065C340), s8 *, 5) = 1;
        D_003EA6C4 = 0;
        do {
            func_001E6B70(var_s1 + 0x7396);
            var_s1 += 1;
        } while (var_s1 < 0x1E);
    }
    return var_s0;
}
