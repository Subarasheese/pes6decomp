/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_003FC450[];
extern char D_003FC454[];
extern char D_003FC460[];
extern M2C_UNK *D_003FC850;
extern M2C_UNK *D_003FC854;
extern char D_003FC858[];

void func_00139590(void) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a0_2;
    s32 temp_a2;
    s32 temp_a4;
    s32 var_a1;
    void *temp_a3;

    var_a0 = D_003FC850;
    if (var_a0 != NULL) {
loop_1:
        if ((M2C_FIELD(var_a0, u8 *, 0xD) == 0) || (M2C_FIELD(var_a0, u8 *, 0xE) != 0)) {
            var_a0 = M2C_FIELD(var_a0, M2C_UNK **, 4);
            if (var_a0 == NULL) {
                goto block_5;
            }
            goto loop_1;
        }
    } else {
block_5:
        func_001C48E8(((void *)D_003FC450), 0, 0x410);
        var_a1 = 1;
        var_a0_2 = ((void *)D_003FC460);
        do {
            M2C_FIELD(var_a0_2, void **, 4) = (void *) (((void *)D_003FC450) + ((var_a1 + 1) * 0x10));
            M2C_FIELD(var_a0_2, void **, 0x14) = (void *) (((void *)D_003FC450) + ((var_a1 + 2) * 0x10));
            M2C_FIELD(var_a0_2, void **, 0x24) = (void *) (((void *)D_003FC450) + ((var_a1 + 3) * 0x10));
            M2C_FIELD(var_a0_2, void **, 0x34) = (void *) (((void *)D_003FC450) + ((var_a1 + 4) * 0x10));
            M2C_FIELD(var_a0_2, void **, 0x44) = (void *) (((void *)D_003FC450) + ((var_a1 + 5) * 0x10));
            M2C_FIELD(var_a0_2, void **, 0x54) = (void *) (((void *)D_003FC450) + ((var_a1 + 6) * 0x10));
            temp_a2 = (var_a1 + 7) * 0x10;
            var_a1 += 8;
            temp_a4 = var_a1 * 0x10;
            M2C_FIELD(var_a0_2, void **, 0x64) = (void *) (((void *)D_003FC450) + temp_a2);
            M2C_FIELD(var_a0_2, void **, 0x74) = (void *) (((void *)D_003FC450) + temp_a4);
            var_a0_2 += 0x80;
        } while (var_a1 < 0x37);
        temp_a3 = ((void *)D_003FC454) + temp_a4;
        M2C_FIELD(temp_a3, void **, 0) = (void *) (((void *)D_003FC450) + ((var_a1 + 1) * 0x10));
        M2C_FIELD(temp_a3, void **, 0x10) = (void *) (((void *)D_003FC450) + ((var_a1 + 2) * 0x10));
        M2C_FIELD(temp_a3, void **, 0x20) = (void *) (((void *)D_003FC450) + ((var_a1 + 3) * 0x10));
        M2C_FIELD(temp_a3, void **, 0x30) = (void *) (((void *)D_003FC450) + ((var_a1 + 4) * 0x10));
        M2C_FIELD(temp_a3, void **, 0x40) = (void *) (((void *)D_003FC450) + ((var_a1 + 5) * 0x10));
        M2C_FIELD(temp_a3, void **, 0x50) = (void *) (((void *)D_003FC450) + ((var_a1 + 6) * 0x10));
        D_003FC854 = ((void *)D_003FC460);
        D_003FC850 = ((void *)D_003FC450);
        M2C_FIELD(((void *)D_003FC450), s32 *, 8) = 0;
        M2C_FIELD(D_003FC850, s8 *, 0xC) = 0x12;
        (*(s32 *)D_003FC858) = 0x3F;
    }
}
