/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058E7F0[];

void func_002CA520(void) {
    M2C_UNK *var_v1;
    s32 var_a0;

    var_a0 = 0;
    var_v1 = ((void *)D_0058E7F0);
    do {
        var_a0 += 7;
        M2C_FIELD(*M2C_FIELD(var_v1, void ***, 4), s8 *, 0x209) = 0;
        M2C_FIELD(*M2C_FIELD(var_v1, void ***, 4), s8 *, 0x20B) = 0;
        M2C_FIELD(var_v1, s8 *, 0x234) = 0;
        M2C_FIELD(*M2C_FIELD(var_v1, void ***, 0x244), s8 *, 0x209) = 0;
        M2C_FIELD(*M2C_FIELD(var_v1, void ***, 0x244), s8 *, 0x20B) = 0;
        M2C_FIELD(var_v1, s8 *, 0x474) = 0;
        M2C_FIELD(*M2C_FIELD(var_v1, void ***, 0x484), s8 *, 0x209) = 0;
        M2C_FIELD(*M2C_FIELD(var_v1, void ***, 0x484), s8 *, 0x20B) = 0;
        M2C_FIELD(var_v1, s8 *, 0x6B4) = 0;
        M2C_FIELD(*M2C_FIELD(var_v1, void ***, 0x6C4), s8 *, 0x209) = 0;
        M2C_FIELD(*M2C_FIELD(var_v1, void ***, 0x6C4), s8 *, 0x20B) = 0;
        M2C_FIELD(var_v1, s8 *, 0x8F4) = 0;
        M2C_FIELD(*M2C_FIELD(var_v1, void ***, 0x904), s8 *, 0x209) = 0;
        M2C_FIELD(*M2C_FIELD(var_v1, void ***, 0x904), s8 *, 0x20B) = 0;
        M2C_FIELD(var_v1, s8 *, 0xB34) = 0;
        M2C_FIELD(*M2C_FIELD(var_v1, void ***, 0xB44), s8 *, 0x209) = 0;
        M2C_FIELD(*M2C_FIELD(var_v1, void ***, 0xB44), s8 *, 0x20B) = 0;
        M2C_FIELD(var_v1, s8 *, 0xD74) = 0;
        M2C_FIELD(*M2C_FIELD(var_v1, void ***, 0xD84), s8 *, 0x209) = 0;
        M2C_FIELD(*M2C_FIELD(var_v1, void ***, 0xD84), s8 *, 0x20B) = 0;
        M2C_FIELD(var_v1, s8 *, 0xFB4) = 0;
        var_v1 += 0xFC0;
    } while (var_a0 < 0xF);
    M2C_FIELD(*M2C_FIELD(var_v1, void ***, 4), s8 *, 0x209) = 0;
    M2C_FIELD(*M2C_FIELD(var_v1, void ***, 4), s8 *, 0x20B) = 0;
    M2C_FIELD(var_v1, s8 *, 0x234) = 0;
}
