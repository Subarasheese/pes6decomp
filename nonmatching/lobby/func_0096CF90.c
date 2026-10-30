/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008187D0();                            /* extern */
s32 func_008193E0(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0093AD70(s32, s32);                        /* extern */
void *func_00969AF0();                              /* extern */
s32 func_00969B90();                                /* extern */
M2C_UNK func_0096CE00();                            /* extern */
M2C_UNK func_00971770();                            /* extern */
M2C_UNK func_00971780();                            /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
s32 func_00971920();                                /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009B4020(M2C_UNK);                     /* extern */
M2C_UNK func_009B4030(M2C_UNK);                     /* extern */
M2C_UNK func_009B4060(M2C_UNK);                     /* extern */
M2C_UNK func_009B46F0();                            /* extern */
M2C_UNK func_009B4D20(M2C_UNK);                     /* extern */
M2C_UNK func_00D0C540();                            /* extern */
M2C_UNK func_00D0C7B0(f32 *, M2C_UNK);              /* extern */
extern char D_009FE3D0[];
extern char D_009FE3D4[];
extern char D_009FE3D8[];
extern char D_009FE3DC[];

s32 func_0096CF90(void) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_s0;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_v0_2;

    var_s0 = 0;
    func_00971780();
    temp_v0 = func_00971920();
    switch (temp_v0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        temp_s1 = func_00969AF0();
        sp30 = (*(f32 *)D_009FE3D0);
        sp34 = (*(f32 *)D_009FE3D4);
        sp38 = (*(f32 *)D_009FE3D8);
        sp3C = (*(f32 *)D_009FE3DC);
        func_00D0C540();
        func_00D0C7B0(&sp30, 2);
        M2C_FIELD(temp_s1, s32 *, 0x18) = 0;
        func_009B4060(1);
        func_009B4020(1);
        func_009B46F0();
        func_009B4D20(1);
        func_009717C0(1);
        break;
    case 1:                                         /* switch 1 */
        func_0096CE00();
        break;
    case 2:                                         /* switch 1 */
        temp_v0_2 = func_00969AF0();
        temp_v0_3 = func_0093AD70(M2C_FIELD(temp_v0_2, s32 *, 4), M2C_FIELD(temp_v0_2, s32 *, 0x10));
        switch (temp_v0_3) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case -1:                                    /* switch 2 */
            func_0026E840(0x8C008005);
            func_0099D030(0);
            func_009717C0(4);
            break;
        case 1:                                     /* switch 2 */
            func_0099D030(0);
            func_009B4030(0);
            func_009B46F0();
            func_009717C0(1);
            break;
        }
        break;
    case 3:                                         /* switch 1 */
        var_s0 = M2C_FIELD(func_00969AF0(), s32 *, 0x18);
        func_009B4060(0);
        func_009B4020(0);
        func_009B46F0();
        func_009B4D20(0);
        break;
    case 4:                                         /* switch 1 */
        temp_s1_2 = func_00969AF0();
        if (func_00969B90() == 0) {
            if (func_008193E0(0x01FB003E, -1) != 0) {
                M2C_FIELD(temp_s1_2, s32 *, 0x18) = 1;
                func_009717C0(3);
            }
        } else {
            func_008187D0();
            M2C_FIELD(temp_s1_2, s32 *, 0x18) = 1;
            func_009717C0(3);
        }
        break;
    }
    func_00971770();
    return var_s0;
}
