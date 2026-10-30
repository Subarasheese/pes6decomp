/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_008187D0();                            /* extern */
s32 func_008193E0(s32, M2C_UNK);                    /* extern */
void *func_00969AF0();                              /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_0096E160();                            /* extern */
M2C_UNK func_0096E270();                            /* extern */
M2C_UNK func_00971770();                            /* extern */
M2C_UNK func_00971780();                            /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
s32 func_00971920();                                /* extern */
s32 func_009B1990();                                /* extern */
s32 func_009B19A0();                                /* extern */
M2C_UNK func_009B4D20(M2C_UNK);                     /* extern */
M2C_UNK func_009B4E80();                            /* extern */
M2C_UNK func_009B4ED0(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_00D0C540();                            /* extern */
M2C_UNK func_00D0C7B0(f32 *, M2C_UNK);              /* extern */
extern char D_009FE390[];
extern char D_009FE394[];
extern char D_009FE398[];
extern char D_009FE39C[];

s32 func_0096E460(void) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 var_s0;
    void *temp_s1;
    void *temp_s1_3;

    var_s0 = 0;
    func_00971780();
    temp_v0 = func_00971920();
    switch (temp_v0) {                              /* irregular */
    case 0:
        temp_s1 = func_00969AF0();
        sp30 = (*(f32 *)D_009FE390);
        sp34 = (*(f32 *)D_009FE394);
        sp38 = (*(f32 *)D_009FE398);
        sp3C = (*(f32 *)D_009FE39C);
        func_00D0C540();
        func_00D0C7B0(&sp30, 2);
        M2C_FIELD(temp_s1, s32 *, 0x18) = 0;
        temp_s1_2 = func_009B19A0();
        func_009B4ED0(0x020C0011, temp_s1_2, func_009B1990());
        func_009717C0(1);
        break;
    case 1:
        func_0096E270();
        break;
    case 2:
        func_0096E160();
        break;
    case 3:
        var_s0 = M2C_FIELD(func_00969AF0(), s32 *, 0x18);
        func_009B4E80();
        break;
    case 4:
        temp_s1_3 = func_00969AF0();
        if (func_00969B90() == 0) {
            if (func_008193E0(M2C_FIELD(temp_s1_3, s32 *, 0), -1) != 0) {
                M2C_FIELD(temp_s1_3, s32 *, 0x18) = 1;
                func_009B4D20(0);
                func_009717C0(1);
            }
        } else {
            func_008187D0();
            M2C_FIELD(temp_s1_3, s32 *, 0x18) = 1;
            func_009717C0(3);
        }
        break;
    }
    func_00971770();
    return var_s0;
}
