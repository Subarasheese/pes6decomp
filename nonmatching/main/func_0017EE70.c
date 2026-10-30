/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK **, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK *D_00511620;
extern M2C_UNK *D_00511624;
extern char D_005116A8[];
extern char D_00519D10[];
extern M2C_UNK *D_00519D98;
extern M2C_UNK *D_00519E20;
extern M2C_UNK **D_00519E24;

void func_0017EE70(void) {
    M2C_UNK *var_v1;
    s32 temp_a4_4;
    s32 var_a0;
    s32 var_a2;
    void *temp_a0;
    void *temp_a4;
    void *temp_a4_2;
    void *temp_a4_3;
    void *temp_a5;
    void *temp_a5_2;
    void *temp_a5_3;
    void *temp_a5_4;
    void *temp_a5_5;
    void *temp_a6;
    void *temp_a6_2;
    void *temp_v1;

    func_001C48E8(&D_00519E20, 0, 0x28);
    func_001C48E8(&D_00511620, 0, 0x8800);
    var_v1 = ((void *)D_005116A8);
    D_00511624 = ((void *)D_005116A8);
    var_a2 = 1;
    var_a0 = 0x88;
    do {
        temp_a5 = &D_00511620 + (var_a0 + 0x88);
        M2C_FIELD(var_v1, void **, 0) = (void *) (&D_00511620 + (var_a0 - 0x88));
        M2C_FIELD(var_v1, void **, 4) = temp_a5;
        M2C_FIELD(var_v1, void **, 0x88) = (void *) (&D_00511620 + var_a0);
        var_a2 += 8;
        temp_a4 = &D_00511620 + (var_a0 + 0x110);
        M2C_FIELD(var_v1, void **, 0x8C) = temp_a4;
        M2C_FIELD(var_v1, void **, 0x110) = temp_a5;
        temp_a5_2 = &D_00511620 + (var_a0 + 0x198);
        M2C_FIELD(var_v1, void **, 0x114) = temp_a5_2;
        M2C_FIELD(var_v1, void **, 0x198) = temp_a4;
        temp_a4_2 = &D_00511620 + (var_a0 + 0x220);
        M2C_FIELD(var_v1, void **, 0x19C) = temp_a4_2;
        M2C_FIELD(var_v1, void **, 0x220) = temp_a5_2;
        temp_a5_3 = &D_00511620 + (var_a0 + 0x2A8);
        M2C_FIELD(var_v1, void **, 0x224) = temp_a5_3;
        M2C_FIELD(var_v1, void **, 0x2A8) = temp_a4_2;
        temp_a4_3 = &D_00511620 + (var_a0 + 0x330);
        M2C_FIELD(var_v1, void **, 0x2AC) = temp_a4_3;
        M2C_FIELD(var_v1, void **, 0x330) = temp_a5_3;
        M2C_FIELD(var_v1, void **, 0x334) = (void *) (&D_00511620 + (var_a0 + 0x3B8));
        var_a0 += 0x440;
        M2C_FIELD(var_v1, void **, 0x3B8) = temp_a4_3;
        M2C_FIELD(var_v1, void **, 0x3BC) = (void *) (&D_00511620 + var_a0);
        var_v1 += 0x440;
    } while (var_a2 < 0xF7);
    temp_a4_4 = var_a2 * 0x88;
    temp_a0 = &D_00511620 + temp_a4_4;
    M2C_FIELD(temp_a0, void **, 0) = (void *) (&D_00511620 + ((var_a2 - 1) * 0x88));
    temp_a6 = &D_00511620 + ((var_a2 + 1) * 0x88);
    temp_v1 = &D_00511624 + temp_a4_4;
    M2C_FIELD(temp_v1, void **, 0) = temp_a6;
    M2C_FIELD(temp_a0, void **, 0x88) = temp_a0;
    temp_a5_4 = &D_00511620 + ((var_a2 + 2) * 0x88);
    M2C_FIELD(temp_v1, void **, 0x88) = temp_a5_4;
    M2C_FIELD(temp_a0, void **, 0x110) = temp_a6;
    temp_a6_2 = &D_00511620 + ((var_a2 + 3) * 0x88);
    M2C_FIELD(temp_v1, void **, 0x110) = temp_a6_2;
    M2C_FIELD(temp_a0, void **, 0x198) = temp_a5_4;
    temp_a5_5 = &D_00511620 + ((var_a2 + 4) * 0x88);
    M2C_FIELD(temp_v1, void **, 0x198) = temp_a5_5;
    M2C_FIELD(temp_a0, void **, 0x220) = temp_a6_2;
    M2C_FIELD(temp_v1, void **, 0x220) = (void *) (&D_00511620 + ((var_a2 + 5) * 0x88));
    M2C_FIELD(temp_a0, void **, 0x2A8) = temp_a5_5;
    M2C_FIELD(temp_v1, void **, 0x2A8) = (void *) (&D_00511620 + ((var_a2 + 6) * 0x88));
    D_00519D98 = ((void *)D_00519D10);
    D_00519E20 = &D_00511620;
    D_00519E24 = &D_00519D98;
}
