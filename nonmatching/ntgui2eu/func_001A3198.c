/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019EC50(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern char D_005CABFC[];

s32 func_001A3198(void) {
    s32 var_v0;

loop_3:
    if (func_0019EC50(0x01204B40, 0x80000003, 0) >= 0) {
        if (M2C_FIELD((void *)0x01204B40, s32 *, 0x24) != 0) {
            (*(s32 *)D_005CABFC) = 0;
            return 0;
        }
        var_v0 = 0x100000;
        do {
            var_v0 -= 1;
        } while (var_v0 != -1);
        goto loop_3;
    }
    return -1;
}
