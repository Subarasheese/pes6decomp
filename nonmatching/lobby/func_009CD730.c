/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_008157A0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0081D100(M2C_UNK, M2C_UNK);            /* extern */
s32 func_008357B0();                                /* extern */
M2C_UNK func_0083CC00(M2C_UNK);                     /* extern */
M2C_UNK func_0083CC60(M2C_UNK);                     /* extern */
M2C_UNK func_0083CCC0(M2C_UNK);                     /* extern */
M2C_UNK func_0083CD20(M2C_UNK);                     /* extern */
M2C_UNK func_0083CD80(M2C_UNK);                     /* extern */
M2C_UNK func_0083CDE0(M2C_UNK);                     /* extern */
M2C_UNK func_0083CE40(M2C_UNK);                     /* extern */
M2C_UNK func_0083CEA0(M2C_UNK);                     /* extern */
M2C_UNK func_0083CF00(M2C_UNK);                     /* extern */
M2C_UNK func_0083CF60(s64);                         /* extern */
M2C_UNK func_0083CFC0(M2C_UNK);                     /* extern */
M2C_UNK func_0083D020(M2C_UNK);                     /* extern */
M2C_UNK func_0083D080(M2C_UNK);                     /* extern */
M2C_UNK func_008439C0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00964A90(s32);                             /* extern */
s32 func_00964BB0();                                /* extern */
s32 func_00966560();                                /* extern */
M2C_UNK func_00966840();                            /* extern */
s32 func_00966860();                                /* extern */
s8 *func_0099C7E0(M2C_UNK);                         /* extern */
M2C_UNK func_009CC360(s64);                         /* extern */
M2C_UNK func_009CC380(M2C_UNK);                     /* extern */
M2C_UNK func_009CC4B0(M2C_UNK, s64);                /* extern */
M2C_UNK func_009CC530(M2C_UNK);                     /* extern */
M2C_UNK func_009CCC80(M2C_UNK);                     /* extern */
extern char D_00814FB0[];
extern char D_00A02F50[];
extern s8 *D_00A7DDB8;

void func_009CD730(void) {
    M2C_UNK var_s0;
    s32 temp_s0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s64 var_s4;
    s64 var_s5;
    s8 *temp_v0;

    if (D_00A7DDB8 == NULL) {
        temp_v0 = func_0099C7E0(0xC);
        D_00A7DDB8 = temp_v0;
        if (temp_v0 != NULL) {
            if (func_008357B0() == 0) {
                var_s5 = 1;
                var_s4 = 1;
            } else {
                var_s5 = 2;
                var_s4 = 0;
            }
            if (func_00966560() != 0) {
                temp_s0 = func_00964BB0();
                var_s1 = 0;
                var_s2 = 0;
                var_s3 = 0;
loop_15:
                if (var_s3 < temp_s0) {
                    temp_v0_2 = func_00964A90(var_s3);
                    switch (temp_v0_2) {            /* irregular */
                    case 1:
                        var_s1 += 1;
                        break;
                    case 0:
                        var_s2 += 1;
                        break;
                    }
                    var_s3 += 1;
                    goto loop_15;
                }
                if ((var_s2 >= 2) && (var_s1 >= 2)) {
                    var_s0 = 0;
                } else {
                    var_s0 = 1;
                }
                func_009CCC80(0);
                func_009CC380(var_s0);
                func_009CC360(var_s4);
            } else {
                if (func_00966860() != 0) {
                    func_00966840();
                }
                func_009CCC80(1);
                func_009CC530(0);
                func_0083D080(1);
                func_0083D020(1);
                func_0083CFC0(3);
                func_0083CF60(var_s5);
                func_0083CF00(0);
                func_0083CEA0(0);
                func_0083CE40(3);
                func_0083CDE0(0);
                func_0083CD80(1);
                func_0083CD20(2);
                func_0083CCC0(2);
                func_0083CC60(3);
                func_0083CC00(2);
                *D_00A7DDB8 = 3;
            }
            func_009CC4B0(0, 1);
            func_009CC4B0(1, 1);
            func_009CC4B0(2, 3);
            func_009CC4B0(3, (s64) (var_s5 << 0x38) >> 0x38);
            func_009CC4B0(4, 0);
            func_009CC4B0(5, 0);
            func_009CC4B0(6, 3);
            func_009CC4B0(7, 0);
            func_009CC4B0(8, 1);
            func_009CC4B0(9, 2);
            func_009CC4B0(0xA, 2);
            func_009CC4B0(0xB, 3);
            func_009CC4B0(0xD, 2);
            func_008157A0(((void *)D_00814FB0), ((void *)D_00814FB0), ((void *)D_00A02F50));
            func_0081D100(0, 0);
            func_0081D100(1, 1);
            func_0081D100(2, 1);
            func_0081D100(3, 1);
            func_008439C0(3, 0xEA60);
        }
    }
}
