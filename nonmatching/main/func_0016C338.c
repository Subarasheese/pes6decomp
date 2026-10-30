/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0016C2E8(void);
extern int func_0016ABC8(void);
M2C_UNK sprintf(s32, M2C_UNK *, s32, M2C_UNK *); /* extern */
M2C_UNK func_001C7F58(M2C_UNK *, s32);              /* extern */
extern char D_003C9F08[];
extern char D_0050E790[];

void func_0016C338(s32 arg0, s32 arg1) {
    s32 var_s0;

    var_s0 = arg0;
    if (var_s0 == 0) {
        var_s0 = func_0016ABC8();
    }
    if (func_0016C2E8() == 1) {
        func_001C7F58(((void *)D_0050E790), arg1);
        sprintf(arg1, ((void *)D_003C9F08), var_s0, ((void *)D_0050E790));
    }
}
