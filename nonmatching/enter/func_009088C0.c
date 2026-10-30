/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_009087F0();                                /* extern */
s64 func_0090F520(M2C_UNK);                         /* extern */
extern char D_00591BE4[];
extern char D_0092F0D0[];
extern char D_0092F0F8[];
extern char D_0092F0FA[];

s32 func_009088C0(void) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a2;

    temp_v0 = func_009087F0();
    var_a2 = 2;
    switch (temp_v0) {                              /* irregular */
    case 1:
        if (((s64) (func_0090F520(1) << 0x38) >> 0x38) != 0) {
            return 0;
        }
        var_a0 = (*(s32 *)D_0092F0D0) | 0x1000;
block_15:
        (*(s32 *)D_0092F0D0) = var_a0;
        return 1;
    case 2:
        var_a0 = (*(s32 *)D_0092F0D0) | 0x1000;
        goto block_15;
    default:
        if (*(s32 *)0x92F0D0 & 0x2000) {

        } else {
            var_a2 = 1;
        }
        if ((*(s16 *)D_0092F0F8) < (((s32) ((*(s16 *)D_0092F0FA) * (*(u8 *)D_00591BE4)) / (s32) (var_a2 & 0xFF)) - 0xC)) {
            return 0;
        }
        var_a0 = (*(s32 *)D_0092F0D0) & ~0x4000;
        goto block_15;
    }
}
