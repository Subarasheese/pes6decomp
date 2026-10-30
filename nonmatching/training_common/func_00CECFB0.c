/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00121430(s8 *, s32);                   /* extern */
M2C_UNK func_001C48E8(s8 *, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK sprintf(s8 *, M2C_UNK *);             /* extern */
M2C_UNK func_001DF820(s32, s8 *);                   /* extern */
s32 func_001F08B0(M2C_UNK);                         /* extern */
extern char D_00CFE578[];

void func_00CECFB0(s32 arg0, s64 arg1, s64 arg2) {
    s8 sp50;
    s32 temp_s3;
    s32 var_s0;
    s32 var_v0;
    s64 temp_v1;
    s8 *var_v1;

    var_v0 = 0x80;
    var_v1 = &sp50;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    func_001C48E8(&sp50, 0, 0x80);
    temp_v1 = (s64) (arg1 << 0x38) >> 0x38;
    if (temp_v1 != 5) {
        temp_s3 = temp_v1 + 1;
        var_s0 = 0;
        if (temp_s3 > 0) {
            do {
                func_00121430(&sp50, func_001F08B0(0x1700AB));
                var_s0 += 1;
            } while (var_s0 < temp_s3);
        }
loop_10:
        if (var_s0 < (((s64) (arg2 << 0x38) >> 0x38) + 1)) {
            if (var_s0 < 5) {
                func_00121430(&sp50, func_001F08B0(0x1700AD));
                var_s0 += 1;
                goto loop_10;
            }
        }
    } else {
        sprintf(&sp50, ((void *)D_00CFE578));
    }
    func_001DF820(arg0, &sp50);
}
