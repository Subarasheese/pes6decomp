/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BBC60(s32);
s32 func_001BBEC0(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern char D_0088A750[];
extern char D_008B2448[];
extern char D_008B2450[];
extern char D_008B2458[];
extern M2C_UNK func_008809D0;
extern M2C_UNK func_008809E0;

void func_00880B30(void) {
    s32 temp_v0;

    if ((*(s32 *)D_008B2448) == 0) {
        temp_v0 = func_001BBEC0(0, &func_008809E0, &func_008809D0, 0, 0, ((void *)D_0088A750));
        (*(s32 *)D_008B2448) = temp_v0;
        func_001BBC60(temp_v0);
    }
    (*(s8 *)D_008B2450) = 0;
    (*(s8 *)D_008B2458) = 0;
}
