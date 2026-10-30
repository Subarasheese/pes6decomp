/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001A4AA0(void);
M2C_UNK func_0019B3A0(M2C_UNK);                     /* extern */
M2C_UNK func_001A4A38(s32, s32);                    /* extern */
M2C_UNK func_001A4A48(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_001A4A90(s32);                             /* extern */
extern char D_005CAC28[];
extern char D_005CB3D0[];

void func_001A4B08(void) {
    s32 *var_s1;
    s32 temp_a0;
    s32 temp_a1;
    u32 var_s2;

    if (func_001A4AA0() != 0) {
        var_s2 = 2;
        var_s1 = ((void *)D_005CB3D0) + 0x10;
        func_001A4A38(M2C_FIELD(((void *)D_005CB3D0), s32 *, 0), M2C_FIELD(((void *)D_005CB3D0), s32 *, 4));
        func_001A4A48(0x80074000, ((void *)D_005CAC28), 0x7A8);
        func_0019B3A0(0);
        func_0019B3A0(2);
        func_001A4A38(M2C_FIELD(((void *)D_005CB3D0), s32 *, 8), M2C_FIELD(((void *)D_005CB3D0), s32 *, 0xC));
        do {
            var_s2 += 1;
            temp_a0 = *var_s1;
            temp_a1 = func_001A4A90(*var_s1);
            var_s1 += 8;
            func_001A4A38(temp_a0, temp_a1);
        } while (var_s2 < 3U);
    }
}
