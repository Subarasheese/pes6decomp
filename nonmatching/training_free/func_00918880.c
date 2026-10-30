/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_009051D0(u8, M2C_UNK);                     /* extern */
s32 func_00919920(u8 *);                            /* extern */
s32 func_0091A970(u8 *);                            /* extern */
u8 *func_0098EC40(M2C_UNK);                         /* extern */
s32 func_00A07B40();                                /* extern */
M2C_UNK func_00C234C0(u8 *);                        /* extern */
extern char D_00591F14[];
extern char D_005926EC[];
extern char D_00CB52A9[];
extern char D_00CB52AA[];
extern char D_00CB52C8[];

void func_00918880(void) {
    s32 var_s0;
    s32 var_s1_2;
    s32 var_v1;
    u8 *temp_v0;
    u8 *var_s1;
    u8 *var_s2;
    u8 var_s0_2;

    if ((*(u8 *)D_00591F14) != 0) {
        goto block_1;
    }
    if (func_00A07B40() == 0) {
        goto block_1;
    }
    if ((s32) (*(u8 *)D_00CB52C8) >= (s32) (*(u8 *)D_005926EC)) {
        var_v1 = 1;
    } else {
block_1:
        var_v1 = 0;
    }
    if (var_v1 & 0xFF) {
        var_s1 = func_0098EC40(0);
        var_s0 = 0;
        do {
            if (func_00919920(var_s1) & 0xFF) {
                func_00C234C0(var_s1);
            }
            var_s0 = (var_s0 + 1) & 0xFF;
            var_s1 += 0x240;
        } while (var_s0 < 0xA);
        var_s0_2 = 0;
        temp_v0 = func_0098EC40(0);
        var_s2 = temp_v0;
        if (func_009051D0(M2C_FIELD(temp_v0, u8 *, 0x13), 0x16) == 0) {
            var_s1_2 = 0;
            do {
                if (func_0091A970(var_s2) & 0xFF) {
                    var_s0_2 = *var_s2;
                }
                var_s1_2 = (var_s1_2 + 1) & 0xFF;
                var_s2 += 0x240;
            } while (var_s1_2 < 0xA);
            (*(u8 *)D_00CB52AA) = var_s0_2;
        }
        return;
    }
    (*(s8 *)D_00CB52A9) = 0;
    (*(u8 *)D_00CB52AA) = 0;
}
