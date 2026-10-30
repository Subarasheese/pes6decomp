/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008FCDC0(M2C_UNK);                         /* extern */
s32 func_008FCE70(M2C_UNK);                         /* extern */
s32 func_008FCF00(M2C_UNK);                         /* extern */
extern char D_009083B0[];
extern char D_009083BC[];
extern char D_009083C0[];

s32 func_008F7D60(void) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0 | 0x1E000;
    if ((var_s0 & 0x8000) && (func_008FCE70(1) == 0)) {
        var_s0 &= 0xFFFF7FFF;
    }
    if ((var_s0 & 0x10000) && (func_008FCDC0(1) == 0)) {
        var_s0 &= 0xFFFEFFFF;
    }
    if ((var_s0 & 0x2000) && (func_008FCF00(1) == 0)) {
        var_s0 &= ~0x2000;
    }
    temp_a0 = (*(s32 *)D_009083BC) & 0xFFFE5FFF;
    (*(s32 *)D_009083BC) = temp_a0;
    temp_v1 = var_s0 & ~temp_a0;
    (*(s32 *)D_009083C0) = temp_v1;
    if (temp_v1 != 0) {
        (*(u8 *)D_009083B0) &= 0xFE;
    }
    return 1;
}
