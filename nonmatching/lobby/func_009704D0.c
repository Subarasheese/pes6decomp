/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0093B9E0();                                /* extern */
s32 func_0093D4B0();                                /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
M2C_UNK func_0099C760();                            /* extern */
s32 func_009B19D0();                                /* extern */
s32 func_009B19E0();                                /* extern */
M2C_UNK func_009B1A60(M2C_UNK);                     /* extern */
M2C_UNK func_009B40A0(M2C_UNK);                     /* extern */
M2C_UNK func_009B4D60(s32);                         /* extern */
M2C_UNK func_009B4ED0(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_00D0C540();                            /* extern */
M2C_UNK func_00D0C7B0(f32 *, M2C_UNK);              /* extern */
extern char D_009FE3F0[];
extern char D_009FE3F4[];
extern char D_009FE3F8[];
extern char D_009FE3FC[];
extern void *D_00A68CC8;

void func_009704D0(void) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = D_00A68CC8;
    sp30 = (*(f32 *)D_009FE3F0);
    sp34 = (*(f32 *)D_009FE3F4);
    sp38 = (*(f32 *)D_009FE3F8);
    sp3C = (*(f32 *)D_009FE3FC);
    func_00D0C540();
    func_00D0C7B0(&sp30, 2);
    func_0099C760();
    func_0099C730(0x01F70091);
    temp_s1 = func_009B19E0();
    func_009B4ED0(0x01FC0005, temp_s1, func_009B19D0());
    func_009B4D60(M2C_FIELD(temp_s0, s32 *, 0x18));
    if (func_0093D4B0() == 0) {
        func_009B40A0(0);
    } else {
        func_009B40A0(1);
    }
    if (func_0093B9E0() == 0) {
        func_009B1A60(0);
    } else {
        func_009B1A60(1);
    }
    if (func_00969B90() != 0) {
        M2C_FIELD(temp_s0, s32 *, 4) = 1;
        func_009717C0(4);
        return;
    }
    func_009717C0(2);
}
