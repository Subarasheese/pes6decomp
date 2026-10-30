/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_0058C6D0[];

void func_00255F90(void *arg0) {
    s32 temp_a1_2;
    s32 var_a0;
    s32 var_v1;
    void *temp_a0;
    void *temp_a1;
    void *temp_a2;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_v0;
    void *var_v0;

    if (M2C_FIELD(((void *)D_0058C6D0), u8 *, 0) == 0) {
        func_001C48E8(((void *)D_0058C6D0), 0, 0x620);
        var_a0 = 1;
        temp_a3 = ((void *)D_0058C6D0) + 0x24;
        M2C_FIELD(((void *)D_0058C6D0), u8 *, 0) = 1U;
        var_v1 = 0x1C;
        var_v0 = ((void *)D_0058C6D0) + 0x1C;
        M2C_FIELD(((void *)D_0058C6D0), M2C_UNK (**)(void *, s32, void *, void *), 4) = (M2C_UNK (*)(void *, s32, void *, void *)) M2C_FIELD(arg0, M2C_UNK (**)(void *, s32, void *, void *), 0);
        M2C_FIELD(((void *)D_0058C6D0), s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(((void *)D_0058C6D0), s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 8);
        M2C_FIELD(((void *)D_0058C6D0), s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(((void *)D_0058C6D0), s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(((void *)D_0058C6D0), void **, 0x1C) = temp_a3;
        M2C_FIELD(((void *)D_0058C6D0), void **, 0x38) = temp_a3;
        M2C_FIELD(M2C_FIELD(((void *)D_0058C6D0), void **, 0x1C), void **, 0x10) = temp_a3;
        M2C_FIELD(((void *)D_0058C6D0), void **, 0x20) = (void *) (((void *)D_0058C6D0) + 0x40);
        do {
            temp_a3_2 = ((void *)D_0058C6D0) + (var_v1 + 0x1C) + 0x24;
            var_a0 += 7;
            M2C_FIELD(var_v0, void **, 0x38) = temp_a3_2;
            M2C_FIELD(var_v0, void **, 0x54) = (void *) (((void *)D_0058C6D0) + (var_v1 + 0x38) + 0x24);
            M2C_FIELD(var_v0, void **, 0x70) = (void *) (((void *)D_0058C6D0) + (var_v1 + 0x54) + 0x24);
            M2C_FIELD(var_v0, void **, 0x8C) = (void *) (((void *)D_0058C6D0) + (var_v1 + 0x70) + 0x24);
            M2C_FIELD(var_v0, void **, 0xA8) = (void *) (((void *)D_0058C6D0) + (var_v1 + 0x8C) + 0x24);
            temp_a1 = ((void *)D_0058C6D0) + (var_v1 + 0xA8);
            var_v1 += 0xC4;
            M2C_FIELD(var_v0, void **, 0xC4) = (void *) (temp_a1 + 0x24);
            M2C_FIELD(var_v0, void **, 0xE0) = (void *) (((void *)D_0058C6D0) + var_v1 + 0x24);
            var_v0 += 0xC4;
        } while (var_a0 < 0x28);
        temp_v0 = (var_a0 * 0x1C) + ((void *)D_0058C6D0);
        M2C_FIELD(temp_v0, void **, 0x38) = (void *) (((void *)D_0058C6D0) + ((var_a0 + 1) * 0x1C) + 0x24);
        temp_a2 = ((void *)D_0058C6D0) + ((var_a0 + 2) * 0x1C) + 0x24;
        M2C_FIELD(temp_v0, void **, 0x54) = temp_a2;
        temp_a1_2 = (var_a0 + 3) * 0x1C;
        temp_a0 = ((void *)D_0058C6D0) + temp_a1_2 + 0x24;
        M2C_FIELD(temp_v0, void **, 0x70) = temp_a0;
        M2C_FIELD(temp_v0, void **, 0x8C) = (void *) (((void *)D_0058C6D0) + ((var_a0 + 4) * 0x1C) + 0x24);
        M2C_FIELD(((void *)D_0058C6D0), void **, 0x55C) = (void *) M2C_FIELD(((void *)D_0058C6D0), void **, 0x20);
        M2C_FIELD(((void *)D_0058C6D0), M2C_UNK (**)(void *, s32, void *, void *), 4)(temp_a0, temp_a1_2, temp_a2, temp_a3_2);
    }
}
