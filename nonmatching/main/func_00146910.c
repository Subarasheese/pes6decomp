/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00509070[];
extern char D_0050A070[];
extern M2C_UNK *D_0050AC70;
extern M2C_UNK *D_0050AC74;

void func_00146910(void) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a3;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_v1;
    void *temp_a0;
    void *temp_v1_2;
    void *temp_v1_3;

    func_001C48E8(((void *)D_00509070), 0, 0x1C10);
    var_a1 = 0;
    var_a0 = ((void *)D_00509070);
    var_a3 = ((void *)D_00509070);
    do {
        M2C_FIELD(var_a0, void **, 0) = (void *) (((void *)D_00509070) + ((var_a1 + 1) * 0x10));
        M2C_FIELD(var_a0, void **, 0x10) = (void *) (((void *)D_00509070) + ((var_a1 + 2) * 0x10));
        M2C_FIELD(var_a0, void **, 0x20) = (void *) (((void *)D_00509070) + ((var_a1 + 3) * 0x10));
        M2C_FIELD(var_a0, void **, 0x30) = (void *) (((void *)D_00509070) + ((var_a1 + 4) * 0x10));
        M2C_FIELD(var_a0, void **, 0x40) = (void *) (((void *)D_00509070) + ((var_a1 + 5) * 0x10));
        M2C_FIELD(var_a0, void **, 0x50) = (void *) (((void *)D_00509070) + ((var_a1 + 6) * 0x10));
        temp_v1 = (var_a1 + 7) * 0x10;
        var_a1 += 8;
        M2C_FIELD(var_a0, void **, 0x60) = (void *) (((void *)D_00509070) + temp_v1);
        temp_v1_2 = ((void *)D_00509070) + (var_a1 * 0x10);
        M2C_FIELD(var_a0, void **, 0x70) = temp_v1_2;
        var_a0 += 0x80;
    } while (var_a1 < 0xF7);
    M2C_FIELD(temp_v1_2, void **, 0) = (void *) (((void *)D_00509070) + ((var_a1 + 1) * 0x10));
    M2C_FIELD(temp_v1_2, void **, 0x10) = (void *) (((void *)D_00509070) + ((var_a1 + 2) * 0x10));
    M2C_FIELD(temp_v1_2, void **, 0x20) = (void *) (((void *)D_00509070) + ((var_a1 + 3) * 0x10));
    M2C_FIELD(temp_v1_2, void **, 0x30) = (void *) (((void *)D_00509070) + ((var_a1 + 4) * 0x10));
    M2C_FIELD(temp_v1_2, void **, 0x40) = (void *) (((void *)D_00509070) + ((var_a1 + 5) * 0x10));
    M2C_FIELD(temp_v1_2, void **, 0x50) = (void *) (((void *)D_00509070) + ((var_a1 + 6) * 0x10));
    var_a2 = 0;
    M2C_FIELD(temp_v1_2, void **, 0x60) = (void *) (((void *)D_00509070) + ((var_a1 + 7) * 0x10));
    D_0050AC70 = ((void *)D_00509070);
    var_v1 = 0;
    do {
        var_a2 += 8;
        M2C_FIELD(var_a3, void **, 0x1000) = (void *) (((void *)D_00509070) + (var_v1 + 0xC) + 0x1000);
        M2C_FIELD(var_a3, void **, 0x100C) = (void *) (((void *)D_00509070) + (var_v1 + 0x18) + 0x1000);
        M2C_FIELD(var_a3, void **, 0x1018) = (void *) (((void *)D_00509070) + (var_v1 + 0x24) + 0x1000);
        M2C_FIELD(var_a3, void **, 0x1024) = (void *) (((void *)D_00509070) + (var_v1 + 0x30) + 0x1000);
        M2C_FIELD(var_a3, void **, 0x1030) = (void *) (((void *)D_00509070) + (var_v1 + 0x3C) + 0x1000);
        M2C_FIELD(var_a3, void **, 0x103C) = (void *) (((void *)D_00509070) + (var_v1 + 0x48) + 0x1000);
        temp_a0 = ((void *)D_00509070) + (var_v1 + 0x54);
        var_v1 += 0x60;
        M2C_FIELD(var_a3, void **, 0x1048) = (void *) (temp_a0 + 0x1000);
        M2C_FIELD(var_a3, void **, 0x1054) = (void *) (((void *)D_00509070) + var_v1 + 0x1000);
        var_a3 += 0x60;
    } while (var_a2 < 0xF7);
    temp_v1_3 = ((void *)D_0050A070) + (var_a2 * 0xC);
    M2C_FIELD(temp_v1_3, void **, 0) = (void *) (((void *)D_00509070) + ((var_a2 + 1) * 0xC) + 0x1000);
    M2C_FIELD(temp_v1_3, void **, 0xC) = (void *) (((void *)D_00509070) + ((var_a2 + 2) * 0xC) + 0x1000);
    M2C_FIELD(temp_v1_3, void **, 0x18) = (void *) (((void *)D_00509070) + ((var_a2 + 3) * 0xC) + 0x1000);
    M2C_FIELD(temp_v1_3, void **, 0x24) = (void *) (((void *)D_00509070) + ((var_a2 + 4) * 0xC) + 0x1000);
    M2C_FIELD(temp_v1_3, void **, 0x30) = (void *) (((void *)D_00509070) + ((var_a2 + 5) * 0xC) + 0x1000);
    M2C_FIELD(temp_v1_3, void **, 0x3C) = (void *) (((void *)D_00509070) + ((var_a2 + 6) * 0xC) + 0x1000);
    M2C_FIELD(temp_v1_3, void **, 0x48) = (void *) (((void *)D_00509070) + ((var_a2 + 7) * 0xC) + 0x1000);
    D_0050AC74 = ((void *)D_0050A070);
}
