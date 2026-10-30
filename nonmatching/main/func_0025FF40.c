/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0025CDF0(M2C_UNK, f32 *, f32 *, f32 *); /* extern */
extern char D_0058D2E8[];
extern char D_0058D2EC[];
extern char D_0058D2F4[];
extern char D_0058D2F8[];

void func_0025FF40(void *arg0) {
    f32 sp18;
    f32 sp1C;

    if (arg0 != NULL) {
        (*(f32 *)D_0058D2E8) = M2C_FIELD(arg0, f32 *, 0);
        (*(f32 *)D_0058D2EC) = M2C_FIELD(arg0, f32 *, 4);
        sp18 = (*(f32 *)D_0058D2F4) + M2C_FIELD(arg0, f32 *, 0);
        sp1C = (*(f32 *)D_0058D2F8) + M2C_FIELD(arg0, f32 *, 4);
        func_0025CDF0(1, &sp18, ((void *)D_0058D2EC), ((void *)D_0058D2E8));
    }
}
