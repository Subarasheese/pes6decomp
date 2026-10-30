/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001AE590(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
extern char D_005CAB44[];
extern M2C_UNK *D_005CABF8;
extern char D_01204A68[];

s32 func_0019FF78(void) {
    s32 var_s2;

    var_s2 = 0;
    if ((func_001AE590(((void *)D_01204A68), ((void *)D_005CAB44), 4) != 0) && (func_001AE590(((void *)D_01204A68), D_005CABF8, 4) != 0)) {
        var_s2 = func_001AE590(((void *)D_005CAB44), D_005CABF8, 4) != 0;
    }
    return var_s2;
}
