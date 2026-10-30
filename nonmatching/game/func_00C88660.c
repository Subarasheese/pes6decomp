/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCCE04[];
extern char D_00CCCE08[];

void func_00C88660(s32 arg0) {
    u8 var_a0;

    if (((u64) ((s64) (*(u8 *)D_00CCCE04) << 0x3D) >> 0x3F) != 0) {
        if (arg0 >= 3) {
            var_a0 = ((*(u8 *)D_00CCCE04) & ~1) | (0 & 1);
        } else {
            (*(s32 *)D_00CCCE08) = arg0;
            var_a0 = ((*(u8 *)D_00CCCE04) & ~1) | 1;
        }
        (*(u8 *)D_00CCCE04) = var_a0;
    }
}
