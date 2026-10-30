/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_00965300(s32);                             /* extern */
u8 func_00965310();                                 /* extern */
M2C_UNK func_00965320();                            /* extern */
s32 func_00965340();                                /* extern */
s32 func_009D7F00();                                /* extern */
M2C_UNK func_009D7FC0();                            /* extern */
M2C_UNK func_009D8210(u8, s32);                     /* extern */
extern void *D_00A7DD68;

s32 func_009C6E90(void) {
    s32 temp_s2;
    s32 var_s0;
    s32 var_s1;
    u8 temp_a0;

    if (func_00965340() != 0) {
        func_00965320();
        var_s0 = -1;
        var_s1 = 0;
        M2C_FIELD(D_00A7DD68, u8 *, 2) = func_00965310();
loop_5:
        temp_a0 = M2C_FIELD(D_00A7DD68, u8 *, 2);
        if (var_s1 < (s32) temp_a0) {
            temp_s2 = M2C_FIELD(D_00A7DD68, s32 *, 4);
            if (temp_s2 == func_00965300(var_s1)) {
                var_s0 = var_s1;
            }
            var_s1 += 1;
            goto loop_5;
        }
        func_009D8210(temp_a0, var_s0);
    }
    func_009D7FC0();
    if ((func_009D7F00() != 0) && (func_0081EC20(0x4000) != 0)) {
        func_0026E840(0x84028400);
        return 1;
    }
    if (func_0081EC20(0x1000) == 0) {
        return 0;
    }
    func_0026E840(0x84008401);
    return 2;
}
