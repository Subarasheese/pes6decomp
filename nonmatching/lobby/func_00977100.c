/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900();                                /* extern */
M2C_UNK func_001C48E8(void **, M2C_UNK, M2C_UNK);   /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_00971770();                            /* extern */
M2C_UNK func_00971780();                            /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
s32 func_00971920();                                /* extern */
M2C_UNK func_00985C60(s32);                         /* extern */
s32 func_00985C70();                                /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
M2C_UNK func_0099C760();                            /* extern */
M2C_UNK func_009B1A60(M2C_UNK);                     /* extern */
M2C_UNK func_009B40A0(M2C_UNK);                     /* extern */
M2C_UNK func_009B7510();                            /* extern */
M2C_UNK func_009E84C0(void *);                      /* extern */
M2C_UNK func_009E84E0(void *);                      /* extern */
void *func_009E84F0();                              /* extern */
s32 func_009E8540(void *);                          /* extern */
s32 func_009F4A40();                                /* extern */
extern void *D_00A68D40;
extern M2C_UNK func_00976920;
extern M2C_UNK func_00976AA0;
extern M2C_UNK func_00976BD0;
extern M2C_UNK func_00976BE0;
extern M2C_UNK func_00976BF0;
extern M2C_UNK func_00976C20;
extern M2C_UNK func_00976C90;
extern M2C_UNK func_00976CE0;
extern M2C_UNK func_00976CF0;
extern M2C_UNK func_00976D80;
extern M2C_UNK func_00976E10;

s32 func_00977100(void) {
    s32 temp_v0;
    s32 var_s1;
    void *temp_s0;
    void *temp_s0_2;

    var_s1 = 0;
    func_00971780();
    temp_v0 = func_00971920();
    switch (temp_v0) {                              /* irregular */
    case 0:
        func_009B7510();
        func_009B40A0(0);
        func_009B1A60(0);
        func_009717C0(1);
        break;
    case 1:
        if (func_0017F900() != 0) {
            func_009717C0(2);
        }
        break;
    case 2:
        temp_s0 = func_009E84F0();
        func_0099C760();
        func_0099C730(0x01F7001C);
        func_001C48E8(&D_00A68D40, 0, 0xC);
        D_00A68D40 = temp_s0;
        M2C_FIELD(temp_s0, void ***, 0x58) = &D_00A68D40;
        M2C_FIELD(temp_s0, M2C_UNK **, 0x78) = &func_00976E10;
        M2C_FIELD(temp_s0, M2C_UNK **, 0x7C) = &func_00976D80;
        M2C_FIELD(temp_s0, M2C_UNK **, 0x80) = &func_00976CF0;
        M2C_FIELD(temp_s0, M2C_UNK **, 0x84) = &func_00976CE0;
        M2C_FIELD(temp_s0, M2C_UNK **, 0x88) = &func_00976C90;
        M2C_FIELD(temp_s0, M2C_UNK **, 0x8C) = &func_00976C20;
        M2C_FIELD(temp_s0, M2C_UNK **, 0x90) = &func_00976BF0;
        M2C_FIELD(temp_s0, M2C_UNK **, 0x94) = &func_00976BE0;
        M2C_FIELD(temp_s0, M2C_UNK **, 0x98) = &func_00976BD0;
        M2C_FIELD(temp_s0, M2C_UNK **, 0x9C) = &func_00976AA0;
        M2C_FIELD(temp_s0, M2C_UNK **, 0xA0) = &func_00976920;
        M2C_FIELD(temp_s0, s32 *, 0) = 0;
        M2C_FIELD(temp_s0, s32 *, 8) = 0;
        M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x3C) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x40) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x44) = 0;
        if (func_00985C70() == 0) {
            func_00985C60(func_009F4A40());
        }
        func_009717C0(3);
        break;
    case 3:
        temp_s0_2 = D_00A68D40;
        if (func_00969B90() != 0) {
            func_009E84C0(temp_s0_2);
        }
        if (func_009E8540(temp_s0_2) != 0) {
            func_009717C0(4);
        }
        break;
    case 4:
        if (D_00A68D40 == NULL) {
            var_s1 = 1;
        } else {
            func_009E84E0(D_00A68D40);
            var_s1 = 1;
            D_00A68D40 = NULL;
        }
        break;
    }
    func_00971770();
    return var_s1;
}
