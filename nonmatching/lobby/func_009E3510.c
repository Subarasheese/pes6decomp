/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DC740(void);
s32 func_00824910();                                /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
extern void *D_00A7DF00;

void func_009E3510(s32 arg0, s8 arg1) {
    s8 var_s0;
    void *temp_v0;

    var_s0 = arg1;
    if (D_00A7DF00 == NULL) {
        temp_v0 = func_0099C7E0(0x218);
        D_00A7DF00 = temp_v0;
        if (temp_v0 != NULL) {
            if (var_s0 == 1) {
                M2C_FIELD(temp_v0, s8 *, 7) = 1;
            }
            if ((var_s0 == 0) && (arg0 == func_00824910())) {
                var_s0 = 1;
            }
            if ((var_s0 == 1) && (arg0 != func_00824910())) {
                var_s0 = 2;
            }
            if ((arg0 == 0) && (var_s0 != 3)) {
                var_s0 = 2;
            }
            M2C_FIELD(D_00A7DF00, s8 *, 4) = var_s0;
            M2C_FIELD(D_00A7DF00, s32 *, 0) = arg0;
            M2C_FIELD(D_00A7DF00, s8 *, 8) = 0;
            if ((var_s0 != 3) && (func_002DC740() == 2)) {
                M2C_FIELD(D_00A7DF00, s8 *, 6) = 1;
            }
        }
    }
}
