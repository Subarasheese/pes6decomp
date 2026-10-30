/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001F08B0(M2C_UNK);                         /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0093C280();                                /* extern */
s32 func_0093C2B0();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
M2C_UNK func_0099C760();                            /* extern */
M2C_UNK func_009B40A0(M2C_UNK);                     /* extern */
M2C_UNK func_009C2460(M2C_UNK);                     /* extern */
M2C_UNK func_009C2490(M2C_UNK);                     /* extern */
M2C_UNK func_009C24C0(M2C_UNK);                     /* extern */
M2C_UNK func_009C24F0(M2C_UNK);                     /* extern */
M2C_UNK func_009C2A70(s32);                         /* extern */
M2C_UNK func_009C2DC0(M2C_UNK, s32);                /* extern */
M2C_UNK func_009C2ED0(M2C_UNK, s32);                /* extern */
M2C_UNK func_009C3180(M2C_UNK);                     /* extern */
extern void *D_00A68CC0;

void func_0096DF40(void) {
    M2C_UNK var_s1;
    M2C_UNK var_s2;
    void *temp_s0;

    temp_s0 = D_00A68CC0;
    func_0099C760();
    func_0099C730(0x020C0012);
    func_009B40A0(0);
    func_009C3180(3);
    if (func_0093C2B0() == 0) {
        var_s2 = 0;
        var_s1 = 1;
    } else {
        var_s2 = 1;
        var_s1 = 0;
    }
    func_009C2ED0(var_s2, func_001F08B0(0x020C0015));
    func_009C2ED0(var_s1, func_001F08B0(0x020C0014));
    func_009C2DC0(0, func_001F08B0(0x6C0019));
    func_009C2DC0(1, func_001F08B0(0x020C0013));
    func_009C2DC0(2, func_001F08B0(0x01F70087));
    if (func_0093C280() != 0) {
        func_009C2A70(func_0093C280());
    }
    func_009C24F0(0);
    func_009C2490(0);
    func_009C2460(0);
    func_009C24C0(0x133);
    if (M2C_FIELD(temp_s0, s32 *, 4) == 4) {
        func_0026E840(0x8C008005);
        func_009717C0(8);
        return;
    }
    func_009717C0(3);
}
