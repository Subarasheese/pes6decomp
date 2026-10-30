/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001DACB0(void *, s32, void *);         /* extern */
extern char D_0052AB90[];
extern char D_0052ABAC[];

void func_001DAB60(void *arg0) {
    s32 temp_a1;
    void *var_a0;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0);
    var_a0 = NULL;
    if (((*(s32 *)D_0052ABAC) != 0) && (temp_a1 >= 0) && (temp_a1 < (*(s32 *)D_0052AB90))) {
        var_a0 = (*(s32 *)D_0052ABAC) + (temp_a1 * 0x4C);
    }
    M2C_FIELD(var_a0, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x48);
    func_001DACB0(var_a0, M2C_FIELD(arg0, s32 *, 0x44), arg0);
}
