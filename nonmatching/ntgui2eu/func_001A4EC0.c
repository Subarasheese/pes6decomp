/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B3A0(M2C_UNK);                     /* extern */
M2C_UNK func_001A4E58(s32, s32);                    /* extern */
M2C_UNK func_001A4E68(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_001A4EB0(s32);                             /* extern */
extern char D_005CB3F0[];
extern char D_005CBB30[];
extern char D_005CBB58[];

void func_001A4EC0(void) {
    s32 *var_s1;
    s32 temp_a0;
    s32 temp_a1;
    u32 var_s2;

    if (!(*(s32 *)0x10001810 & 0x100)) {
        var_s2 = 2;
        var_s1 = ((void *)D_005CBB58) + 0x10;
        func_001A4E58(M2C_FIELD(((void *)D_005CBB58), s32 *, 0), M2C_FIELD(((void *)D_005CBB58), s32 *, 4));
        func_001A4E68(0x80076000, ((void *)D_005CB3F0), 0x740);
        func_001A4E68(0x82000, ((void *)D_005CBB30), 0x28);
        func_0019B3A0(0);
        func_0019B3A0(2);
        func_001A4E58(M2C_FIELD(((void *)D_005CBB58), s32 *, 8), M2C_FIELD(((void *)D_005CBB58), s32 *, 0xC));
        do {
            var_s2 += 1;
            temp_a0 = *var_s1;
            temp_a1 = func_001A4EB0(*var_s1);
            var_s1 += 8;
            func_001A4E58(temp_a0, temp_a1);
        } while (var_s2 < 8U);
    }
}
