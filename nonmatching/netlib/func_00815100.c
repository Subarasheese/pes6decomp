/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
M2C_UNK func_00816300(M2C_UNK *);                   /* extern */
extern char D_008A35F0[];

s32 func_00815100(void) {
    s32 var_v1;

    if (func_0082C2A0() == 0) {
        goto block_12;
    }
    if (((void *)D_008A35F0) == NULL) {
        return 0;
    }
    if (((void *)D_008A35F0) != NULL) {
        M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41E) = 0;
    }
loop_7:
    if (((void *)D_008A35F0) == NULL) {
        var_v1 = 9;
    } else {
        var_v1 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
    }
    if (var_v1 != 2) {
        func_00816300(((void *)D_008A35F0));
        goto loop_7;
    }
block_12:
    return 1;
}
