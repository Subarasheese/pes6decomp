/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00905380(void *);                      /* extern */
extern void *D_00923FC8;

s32 func_009048E0(void) {
    s32 temp_v1;

    if ((M2C_FIELD(D_00923FC8, s32 *, 0x8E8) >= 2) && (M2C_FIELD(D_00923FC8, s32 *, 0x648) == 1)) {
        func_0026E840(0x8400F803);
        temp_v1 = M2C_FIELD(D_00923FC8, s32 *, 0x8E8);
        M2C_FIELD(D_00923FC8, s32 *, 0x8DC) = (s32) ((s32) (M2C_FIELD(D_00923FC8, s32 *, 0x8DC) - 1 + temp_v1) % temp_v1);
        func_00905380(D_00923FC8);
    }
    return 0;
}
