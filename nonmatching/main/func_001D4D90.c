/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern char D_0052AB50[];
extern char D_0052AB54[];
extern char D_0052AB58[];
extern char D_0052AB5C[];

void func_001D4D90(s32 arg0, s32 arg1) {
    s32 var_a2;
    s32 var_a3;

    var_a3 = arg0 >> 1;
    if (arg0 < 0) {
        var_a3 = (s32) (arg0 + 1) >> 1;
    }
    (*(s32 *)D_0052AB50) = (var_a3 + 0x800) * 0x10;
    var_a2 = arg1 >> 1;
    (*(s32 *)D_0052AB54) = (0x800 - var_a3) * 0x10;
    if (arg1 < 0) {
        var_a2 = (s32) (arg1 + 1) >> 1;
    }
    (*(s32 *)D_0052AB58) = (var_a2 + 0x800) * 0x10;
    (*(s32 *)D_0052AB5C) = (0x800 - var_a2) * 0x10;
}
