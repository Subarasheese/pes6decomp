/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002C2FA0(M2C_UNK, s8 *);               /* extern */
s32 func_009A0270();                                /* extern */
extern char D_00591E0C[];
extern char D_00591F13[];
extern char D_005E3600[];

void func_002C2EF0(void) {
    s8 sp2C;
    s32 var_s0;
    s32 var_v0;
    s8 *var_v1;
    s8 temp_v1;

    var_v0 = 4;
    var_v1 = &sp2C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    func_002C2FA0(0, &sp2C);
    var_s0 = (*(s32 *)D_00591E0C) == 0;
    if (var_s0 == 0) {
        var_s0 = (*(u8 *)D_00591F13) != 0;
    }
    temp_v1 = (var_s0 << 7) | (func_009A0270() & 0xFF & 0x7F);
    (*(s32 *)D_005E3600) = 0;
    sp2C = temp_v1;
    func_002C2FA0(0, &sp2C);
}
