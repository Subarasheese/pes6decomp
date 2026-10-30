/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00816300(M2C_UNK *);                       /* extern */
extern char D_008A35D8[];
extern char D_008A35F0[];

s32 func_008165D0(void) {
    if (((void *)D_008A35F0) == NULL) {
        return 1;
    }
    if (((*(s32 *)D_008A35D8) == 0) && (((void *)D_008A35F0) != NULL)) {
        M2C_FIELD(((void *)D_008A35F0), s8 *, 0x420) = 1;
    }
    return func_00816300(((void *)D_008A35F0));
}
