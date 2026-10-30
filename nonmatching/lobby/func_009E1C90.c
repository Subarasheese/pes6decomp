/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF460(void *, void *);
M2C_UNK func_0020E310(M2C_UNK, s8 *);               /* extern */
M2C_UNK func_002DF8E0(s32, s8);                     /* extern */
extern void *D_00A7DEF8;

s32 func_009E1C90(s8 arg0) {
    s8 sp3C;
    s8 sp3D;
    s8 sp3E;
    s8 sp3F;
    void *temp_s1;

    if (D_00A7DEF8 == NULL) {
        return 0;
    }
    temp_s1 = M2C_FIELD(D_00A7DEF8, void **, 0x18);
    if (temp_s1 != NULL) {
        if (arg0 & 0xFF) {
            func_0020E310(3, &sp3C);
        } else {
            sp3C = 0xFF;
            sp3D = 0xFF;
            sp3E = 0xFF;
            sp3F = 0xFF;
        }
        func_001DF460(M2C_FIELD(temp_s1, void **, 0xC), &sp3C);
    }
    M2C_FIELD(D_00A7DEF8, s8 *, 0x39) = arg0;
    if (M2C_FIELD(D_00A7DEF8, u8 *, 0x38) != 0) {
        func_002DF8E0(M2C_FIELD(D_00A7DEF8, s32 *, 0x14), arg0);
    }
    return 1;
}
