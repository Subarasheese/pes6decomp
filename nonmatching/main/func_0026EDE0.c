/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026EF10(M2C_UNK *, void *, void *);   /* extern */
extern char D_0058D8A0[];
extern char D_0058E7F0[];

void func_0026EDE0(void) {
    M2C_UNK *var_s0;
    s32 var_s1;
    void *temp_a1;
    void *temp_a2;

    var_s1 = 0;
    var_s0 = ((void *)D_0058E7F0);
    do {
        temp_a2 = *M2C_FIELD(var_s0, void ***, 4);
        temp_a1 = ((void *)D_0058D8A0) + (M2C_FIELD(var_s0, u8 *, 0x12) * 0xC8);
        M2C_FIELD(temp_a2, void **, 0x14) = (void *) ((M2C_FIELD(temp_a2, s32 *, 0xC) * 0x64) + temp_a1);
        M2C_FIELD(temp_a2, u8 *, 0x30) = (u8) M2C_FIELD(M2C_FIELD(temp_a2, void **, 0x14), u8 *, 0);
        M2C_FIELD(temp_a2, u8 *, 0x1FF) = (u8) M2C_FIELD(M2C_FIELD(temp_a2, void **, 0x14), u8 *, 0x62);
        func_0026EF10(var_s0, temp_a1, temp_a2);
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0x16);
}
