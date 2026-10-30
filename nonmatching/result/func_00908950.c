/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0026C760(void);
extern void func_001D7D80(void *, s16);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00908880(void *, void *);              /* extern */
extern void *D_00923FC8;

s32 func_00908950(void) {
    s32 var_s0;
    s32 var_s1;

    if ((func_0026C760() == 0) && (M2C_FIELD(D_00923FC8, s16 *, 0x36) == 0)) {

    } else {
        M2C_FIELD(D_00923FC8, s16 *, 0x34) = (s16) ((s32) (M2C_FIELD(D_00923FC8, s16 *, 0x34) + 1) % 3);
        if ((M2C_FIELD(D_00923FC8, s16 *, 0x34) == 1) && (func_0026C760() == 0)) {
            M2C_FIELD(D_00923FC8, s16 *, 0x34) = 2;
        }
        if ((M2C_FIELD(D_00923FC8, s16 *, 0x34) == 2) && (M2C_FIELD(D_00923FC8, s16 *, 0x36) == 0)) {
            M2C_FIELD(D_00923FC8, s16 *, 0x34) = 0;
        }
        func_00908880(D_00923FC8 + 0x34, D_00923FC8);
        func_0026E840(0x8400F803);
        var_s1 = 0;
        var_s0 = 0;
        do {
            func_001D7D80(M2C_FIELD((D_00923FC8 + var_s0), void **, 0x60), M2C_FIELD(D_00923FC8, s16 *, 0x34));
            func_001D7D80(M2C_FIELD((D_00923FC8 + var_s0), void **, 0x320), M2C_FIELD(D_00923FC8, s16 *, 0x34));
            var_s1 += 1;
            var_s0 += 0x40;
        } while (var_s1 < 0xB);
    }
    return 0;
}
