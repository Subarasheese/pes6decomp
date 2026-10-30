/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK *func_0093B9B0();                           /* extern */
M2C_UNK func_0099B470(s32, s32, M2C_UNK *);         /* extern */
extern void *D_003EAD10;
extern char D_009FF2D4[];
extern char D_00A02AE8[];

void func_009B1AF0(void) {
    M2C_UNK *var_v0;
    void *temp_s0;

    temp_s0 = D_003EAD10;
    var_v0 = func_0093B9B0();
    if (var_v0 == NULL) {
        var_v0 = ((void *)D_00A02AE8);
    }
    func_0099B470(M2C_FIELD(temp_s0, s32 *, 0xC), (*(s32 *)D_009FF2D4), var_v0);
}
