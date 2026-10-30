/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00D15060(s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_00D1A8D0();                            /* extern */
extern char D_00D395A4[];
extern char D_00D39AA4[];
extern char D_00D39AA8[];
extern char D_00D39AAC[];
extern char D_00D39AB8[];
extern char D_00D39ABC[];

s32 func_00D1A420(void) {
    s32 temp_a3;
    s32 var_a0;
    s32 var_v0;

    if (((*(u8 *)D_00D395A4) & 1) != 1) {
        if ((((u64) ((s64) (*(u8 *)D_00D395A4) << 0x3E) >> 0x3F) != 0) && (((u64) ((s64) (*(u8 *)D_00D395A4) << 0x3C) >> 0x3F) == 0)) {
            return 0;
        }
        if (((s32) (*(s32 *)D_00D39AAC) >> 6) & 1) {
            func_0026E840(0x8C008005);
        } else {
            var_a0 = (*(s32 *)D_00D39AA4);
            temp_a3 = (*(s32 *)D_00D39AA8) & 8;
            do {
                if ((var_a0 != 4) || ((*(s32 *)D_00D39AB8) > 0)) {
                    var_a0 += 1;
                }
                var_a0 = var_a0 % 5;
                if (((*(s32 *)D_00D39ABC) != 0) || (temp_a3 != 0)) {
                    var_v0 = var_a0 & 3;
                    if ((var_a0 < 0) && (var_v0 != 0)) {
                        var_v0 -= 4;
                    }
                    var_a0 = var_v0;
                }
            } while ((*(s32 *)D_00D39AA8) & (1 << var_a0));
            func_00D15060(var_a0, 5, 4, temp_a3, (*(s32 *)D_00D39AA8), (*(s32 *)D_00D39ABC), (*(s32 *)D_00D39AB8));
            func_00D1A8D0();
            func_0026E840(0x8400F803);
        }
        return -1;
    }
    return 0;
}
