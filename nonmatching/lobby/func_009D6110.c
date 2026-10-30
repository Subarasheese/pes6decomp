/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_009658D0(s32, s32);                        /* extern */
s32 func_009658F0();                                /* extern */
s32 func_00965920();                                /* extern */
s32 func_009D3300(s32, s32);                        /* extern */
s32 func_009D33E0(s32, s32);                        /* extern */
s32 func_009D34C0(s32);                             /* extern */
s32 func_009D3510(s32);                             /* extern */
M2C_UNK func_009D3570(s32);                         /* extern */
M2C_UNK func_009D3E10(s32);                         /* extern */
M2C_UNK func_009D40B0(s32, s32);                    /* extern */
M2C_UNK func_009D4120(s32, s32, s32);               /* extern */

void func_009D6110(void) {
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;

    temp_v0 = func_00965920();
    func_009D3570(func_009D3510(temp_v0));
    var_s1 = 0;
    do {
        temp_s3 = func_009D3300(temp_v0, var_s1) & 0xFF;
        temp_s2 = func_009D33E0(temp_v0, var_s1) & 0xFF;
        func_009D40B0(var_s1, temp_s3);
        var_s3 = 0;
loop_2:
        if ((temp_s2 & 0xFF) != 1) {
            var_v0 = -1;
        } else {
            var_v0 = func_009658D0(var_s3, var_s1);
        }
        func_009D4120(var_s3, var_s1, var_v0);
        var_s3 += 1;
        if (var_s3 < 2) {
            goto loop_2;
        }
        var_s1 += 1;
    } while (var_s1 < 5);
    if (func_009D34C0(temp_v0) == 0) {
        var_v0_2 = -1;
    } else {
        var_v0_2 = func_009658F0();
        switch (temp_v0) {                          /* irregular */
        case 3:
            break;
        case 14:
            var_v0_2 -= 0x68;
            break;
        case 11:
            var_v0_2 -= 0x5A;
            break;
        case 5:
            var_v0_2 -= 0x2D;
            break;
        }
    }
    func_009D3E10(var_v0_2);
}
