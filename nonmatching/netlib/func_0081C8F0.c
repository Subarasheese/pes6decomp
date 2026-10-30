/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0081A650(s32);                         /* extern */
M2C_UNK func_0081B6D0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0081B7B0(s32, s32, s64);               /* extern */
M2C_UNK func_0081B820(s32, s32, s64);               /* extern */
M2C_UNK func_0081B890(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0081B900(s32, s32, s32);               /* extern */
M2C_UNK func_0081BB00(s32, s32);                    /* extern */
M2C_UNK func_0081BB30(s32, s32);                    /* extern */
s64 func_0083F5A0(s32);                             /* extern */
s32 func_0083F620(s32);                             /* extern */
s64 func_0083F720(s32);                             /* extern */
s32 func_0083F8B0(s32);                             /* extern */
s32 func_0083FCA0();                                /* extern */
extern char D_008A3CF0[];
extern char D_008A3D18[];

s32 func_0081C8F0(s32 arg0) {
    M2C_UNK var_s0;
    s32 temp_v0;
    s32 var_s2;
    s32 var_s4;
    s64 temp_s0;
    s64 temp_s5;
    s64 var_s1;
    s64 var_s5;

    if ((*(s32 *)D_008A3D18) == 0) {
        return 0;
    }
    temp_v0 = func_0083FCA0();
    func_0081BB30((*(s32 *)D_008A3CF0), temp_v0);
    func_0081BB00((*(s32 *)D_008A3CF0), arg0);
    var_s4 = 0;
    do {
        var_s2 = 0;
        var_s0 = 3;
        var_s5 = 0;
        var_s1 = 2;
        func_0081B6D0((*(s32 *)D_008A3CF0), var_s4, 0);
        if (var_s4 < temp_v0) {
            var_s2 = func_0083F8B0(var_s4);
            temp_s0 = (s64) (func_0083F720(var_s4) << 0x38) >> 0x38;
            temp_s5 = (s64) (func_0083F5A0(var_s4) << 0x38) >> 0x38;
            var_s1 = func_0083F620(var_s4) & 0xFF;
            if (((s64) (temp_s0 << 0x38) >> 0x38) != 0) {
                var_s0 = 1;
            } else {
                var_s0 = 0;
            }
            if (((s64) (temp_s5 << 0x38) >> 0x38) != 1) {
                var_s5 = 0;
            } else {
                var_s5 = (s64) (1 << 0x38) >> 0x38;
            }
        }
        func_0081B900((*(s32 *)D_008A3CF0), var_s4, var_s2);
        func_0081B890((*(s32 *)D_008A3CF0), var_s4, var_s0);
        func_0081B820((*(s32 *)D_008A3CF0), var_s4, var_s5);
        func_0081B7B0((*(s32 *)D_008A3CF0), var_s4, (s64) (var_s1 << 0x38) >> 0x38);
        var_s4 += 1;
    } while (var_s4 < 4);
    func_0081A650((*(s32 *)D_008A3CF0));
    return 1;
}
