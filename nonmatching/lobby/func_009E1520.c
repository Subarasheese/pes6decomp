/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0099C7E0(M2C_UNK);                       /* extern */
s8 func_009E07C0(s32);                              /* extern */
M2C_UNK func_009E0D60(s32, void *);                 /* extern */
extern void *D_00A7DEF0;

void func_009E1520(s32 arg0) {
    s8 temp_v0_2;
    void *temp_v0;

    if (D_00A7DEF0 == NULL) {
        temp_v0 = func_0099C7E0(8);
        D_00A7DEF0 = temp_v0;
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s8 *, 1) = 0;
            temp_v0_2 = func_009E07C0(arg0);
            M2C_FIELD(D_00A7DEF0, s8 *, 3) = temp_v0_2;
            M2C_FIELD(D_00A7DEF0, s8 *, 4) = temp_v0_2;
            func_009E0D60(arg0, D_00A7DEF0);
        }
    }
}
