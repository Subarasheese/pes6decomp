/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_006231E0(s32);                             /* extern */
s32 func_0063A9F0(s32);                             /* extern */
s32 func_0063C0A0(M2C_UNK);                         /* extern */
s32 func_0063CA40(s32);                             /* extern */
void *func_0063E160(s32, M2C_UNK);                  /* extern */
s32 func_0063E1E0(s32);                             /* extern */
extern s32 D_003E9E3C;
extern char D_0065D898[];
extern void *D_0065EF70;

s32 func_00635AE0(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1_2;
    s32 var_s2;
    u8 var_s1;
    void *var_v0;

    var_s0 = arg0;
    if (!((*(s32 *)D_0065D898) & 0x20000000)) {
        if ((*(s32 *)D_0065D898) != 0x40000000) {
            return 0x24;
        }
        if ((arg2 & 0xFF) == 0xFF) {
            var_v0 = func_0063E160(arg1 & 0xFF, 0);
            if (var_v0 == NULL) {
                return 0x24;
            }
            goto block_11;
        }
        var_v0 = D_0065EF70;
block_11:
        var_s1 = M2C_FIELD(var_v0, u8 *, 0xC);
        goto block_12;
    }
    var_s1 = func_0063A9F0((*(s32 *)D_0065D898)) & 0xFF;
block_12:
    if (func_006231E0(D_003E9E3C) == 2) {
        var_s0 = func_0063C0A0(0x2000);
    }
    var_s1_2 = 0;
    var_s2 = var_s0 / func_0063CA40(var_s1 & 0xFF);
    var_s0_2 = 0;
    do {
        if ((var_s0_2 != 0x23) && ((func_0063E1E0(var_s0_2) & 0xFF & 0x7F) == 0xE)) {
            var_s1_2 += 1;
        }
        var_s0_2 += 1;
    } while (var_s0_2 < 0x24);
    if (var_s1_2 < var_s2) {
        var_s2 = var_s1_2;
    }
    return var_s2;
}
