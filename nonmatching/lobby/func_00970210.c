/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00821570();                                /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_0096FF80();                            /* extern */
M2C_UNK func_00970100();                            /* extern */
M2C_UNK func_00971770();                            /* extern */
M2C_UNK func_00971780();                            /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
s32 func_00971920();                                /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
M2C_UNK func_0099C760();                            /* extern */
s32 func_009B19B0();                                /* extern */
s32 func_009B19C0();                                /* extern */
M2C_UNK func_009B4E80();                            /* extern */
M2C_UNK func_009B4ED0(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_00D0C540();                            /* extern */
M2C_UNK func_00D0C7B0(f32 *, M2C_UNK);              /* extern */
extern char D_009FE410[];
extern char D_009FE414[];
extern char D_009FE418[];
extern char D_009FE41C[];
extern void *D_00A68CC8;

s32 func_00970210(void) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 var_s1;
    void *temp_s0;
    void *temp_s0_3;

    var_s1 = 0;
    func_00971780();
    temp_v0 = func_00971920();
    switch (temp_v0) {                              /* irregular */
    case 0:
        temp_s0 = D_00A68CC8;
        sp30 = (*(f32 *)D_009FE410);
        sp34 = (*(f32 *)D_009FE414);
        sp38 = (*(f32 *)D_009FE418);
        sp3C = (*(f32 *)D_009FE41C);
        func_00D0C540();
        func_00D0C7B0(&sp30, 2);
        func_0099C760();
        func_0099C730(0x01F70091);
        M2C_FIELD(temp_s0, s32 *, 4) = 0;
        temp_s0_2 = func_009B19C0();
        func_009B4ED0(0x01F70099, temp_s0_2, func_009B19B0());
        func_009717C0(1);
        break;
    case 1:
        temp_s0_3 = D_00A68CC8;
        if (func_00969B90() != 0) {
            M2C_FIELD(temp_s0_3, s32 *, 4) = 1;
            func_009717C0(4);
        } else if (func_00821570() != 0) {
            func_009717C0(2);
        }
        break;
    case 2:
        func_00970100();
        break;
    case 3:
        func_0096FF80();
        break;
    case 4:
        var_s1 = M2C_FIELD(D_00A68CC8, s32 *, 4);
        func_009B4E80();
        break;
    }
    func_00971770();
    return var_s1;
}
