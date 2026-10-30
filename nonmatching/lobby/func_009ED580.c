/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A7E008[];
extern char D_00A7E00A[];
extern char D_00A7E010[];

s16 func_009ED580(void) {
    s16 var_v0;

    var_v0 = -1;
    if (((*(u8 *)D_00A7E010) & 1) && (((u64) ((s64) (*(u8 *)D_00A7E010) << 0x3E) >> 0x3F) != 0)) {
        if ((*(s16 *)D_00A7E00A) != 0) {
            return -1;
        }
        var_v0 = (*(s16 *)D_00A7E008);
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
