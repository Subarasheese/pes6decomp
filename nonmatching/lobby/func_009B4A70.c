/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF8E0(s32, M2C_UNK);                /* extern */
s32 func_0093CC60(s32);                             /* extern */
void *func_0099C7F0(M2C_UNK);                       /* extern */
M2C_UNK func_009B3D40();                            /* extern */
M2C_UNK func_009B40A0(M2C_UNK);                     /* extern */
M2C_UNK func_009B46F0();                            /* extern */
extern void *D_003EAD1C;

void func_009B4A70(void) {
    s32 var_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *var_v1;

    temp_v0 = func_0099C7F0(0x1D0);
    D_003EAD1C = temp_v0;
    M2C_FIELD(temp_v0, s32 *, 0) = 0;
    var_a0 = 0;
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    var_v1 = temp_v0;
    do {
        M2C_FIELD(var_v1, s32 *, 0x30) = 0;
        var_a0 += 5;
        M2C_FIELD(var_v1, s32 *, 0x4C) = 0;
        M2C_FIELD(var_v1, s32 *, 0x50) = 0;
        M2C_FIELD(var_v1, s32 *, 0x6C) = 0;
        M2C_FIELD(var_v1, s32 *, 0x70) = 0;
        M2C_FIELD(var_v1, s32 *, 0x8C) = 0;
        M2C_FIELD(var_v1, s32 *, 0x90) = 0;
        M2C_FIELD(var_v1, s32 *, 0xAC) = 0;
        M2C_FIELD(var_v1, s32 *, 0xB0) = 0;
        M2C_FIELD(var_v1, s32 *, 0xCC) = 0;
        var_v1 += 0xA0;
    } while (var_a0 < 6);
    temp_v0_2 = (var_a0 << 5) + temp_v0;
    M2C_FIELD(temp_v0_2, s32 *, 0x30) = 0;
    M2C_FIELD(temp_v0_2, s32 *, 0x4C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x1AC) = func_0093CC60(var_a0);
    M2C_FIELD(temp_v0, s32 *, 0x1C4) = 0;
    func_009B3D40();
    func_009B40A0(0);
    if (M2C_FIELD(D_003EAD1C, s32 *, 0x1AC) == 0) {
        func_002DF8E0(M2C_FIELD(D_003EAD1C, s32 *, 0x190), 0);
    } else {
        func_002DF8E0(M2C_FIELD(D_003EAD1C, s32 *, 0x190), 0);
    }
    func_009B46F0();
}
