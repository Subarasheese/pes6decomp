/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002F4470(s32, M2C_UNK);                /* extern */
M2C_UNK func_002F4520(s32);                         /* extern */
extern char D_0065EDC0[];
extern char D_0065EE80[];

void func_00654AE0(f32 fparg0) {
    if (!(fabsf(fparg0) < 1.1920929e-7f)) {
        func_002F4520((*(s32 *)D_0065EDC0));
        func_002F4470((*(s32 *)D_0065EDC0), 1);
        return;
    }
    (*(s8 *)D_0065EE80) = 0;
}
