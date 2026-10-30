/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00188E10(M2C_UNK);                         /* extern */
extern char D_0051FF4F[];
extern s8 *D_00520220;

void func_001901F0(s32 arg0) {
    s32 var_a0;
    s8 *var_a1;

    if (D_00520220 != NULL) {
        *D_00520220 = 0;
        if ((*(u8 *)D_0051FF4F) & 0x10) {
            if (func_00188E10(1) == 1) {
                goto block_7;
            }
            if (func_00188E10(0) == 1) {
block_7:
                *D_00520220 = 2;
            }
        }
        if (arg0 == 1) {
            var_a0 = 0;
            var_a1 = D_00520220 + 0x1C;
            do {
                M2C_FIELD(var_a1, s8 *, 0) = 0;
                var_a0 += 6;
                M2C_FIELD(var_a1, s8 *, 0x448) = 0;
                M2C_FIELD(var_a1, s8 *, 0x890) = 0;
                M2C_FIELD(var_a1, s8 *, 0xCD8) = 0;
                M2C_FIELD(var_a1, s8 *, 0x1120) = 0;
                M2C_FIELD(var_a1, s8 *, 0x1568) = 0;
                var_a1 += 0x19B0;
            } while (var_a0 < 0xC);
        }
    }
}
