/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
extern void *Pes6Ball_Current;

void func_00287000(void) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    M2C_FIELD(Pes6Ball_Current, s8 *, 0xC) = 1;
    M2C_FIELD(Pes6Ball_Current, s8 *, 0xD) = 0;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x1454) = 0;
    M2C_FIELD(Pes6Ball_Current, M2C_UNK32 *, 0x10) = 0;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x1458) = 0xC1E00000;
    M2C_FIELD(Pes6Ball_Current, M2C_UNK32 *, 0x14) = 0xC1E00000;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x145C) = 0;
    M2C_FIELD(Pes6Ball_Current, M2C_UNK32 *, 0x18) = 0;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) = 0;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x2C) = 0;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x30) = 0;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x34) = 0;
    M2C_FIELD(Pes6Ball_Current, s8 *, 0x62) = 0;
    if (func_002AE670(0xE0) > 0) {
        var_s0 = 0;
        do {
            var_s1 += 1;
            M2C_FIELD((Pes6Ball_Current + var_s0), M2C_UNK32 *, 0x47C) = (M2C_UNK32) M2C_FIELD(Pes6Ball_Current, M2C_UNK32 *, 0x10);
            M2C_FIELD((Pes6Ball_Current + var_s0), M2C_UNK32 *, 0x7FC) = (M2C_UNK32) M2C_FIELD(Pes6Ball_Current, M2C_UNK32 *, 0x14);
            M2C_FIELD((Pes6Ball_Current + var_s0), M2C_UNK32 *, 0xB7C) = (M2C_UNK32) M2C_FIELD(Pes6Ball_Current, M2C_UNK32 *, 0x18);
            M2C_FIELD((Pes6Ball_Current + var_s0), s32 *, 0xFC) = (s32) M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
            var_s0 += 4;
        } while (var_s1 < func_002AE670(0xE0));
    }
}
