/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F7970(void);
M2C_UNK func_0084A620(M2C_UNK);                     /* extern */
M2C_UNK func_0084F7A0();                            /* extern */
s32 func_0099D400(M2C_UNK);                         /* extern */
s32 func_009A04F0();                                /* extern */
M2C_UNK func_009A0700();                            /* extern */
M2C_UNK func_00BFFE80();                            /* extern */
extern char D_00592703[];
extern char D_00CBCC62[];

void func_008FC480(void) {
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s0;

    var_s0 = 0;
    func_009A0700();
    if ((*(u8 *)D_00CBCC62) != 0) {
        if (func_009A04F0() != 0) {
            if (func_002F7970() != 0) {
                func_0084F7A0();
                func_0084A620(1);
            }
            var_s0 = 1;
        }
        temp_s2 = func_0099D400(0);
        temp_s1 = func_0099D400(1);
        if ((temp_s2 != 0) || (temp_s1 != 0)) {
            if (func_002F7970() != 0) {
                func_0084F7A0();
                func_0084A620(1);
            }
            var_s0 = 1;
            (*(s8 *)D_00592703) = temp_s2 + (temp_s1 * 2);
        }
        if (var_s0 != 0) {
            func_00BFFE80();
        }
    }
}
