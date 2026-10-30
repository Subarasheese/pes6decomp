/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
void *func_008C1490(M2C_UNK, s32);                  /* extern */

void func_008E1340(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s0;
    void *temp_v0;

    var_s0 = 0;
    if (M2C_FIELD(arg0, void **, 0x60) == NULL) {
        temp_v0 = func_008C1490(0x21, arg2);
        M2C_FIELD(arg0, void **, 0x60) = temp_v0;
        switch (arg1) {                             /* irregular */
        case 0:
            if (arg3 == 1) {
                var_s0 = 2;
            }
            break;
        case 1:
            if (arg3 != 1) {
                var_s0 = 1 & 0xFF;
            } else {
                var_s0 = 3;
            }
            break;
        }
        func_001D7D80(temp_v0, var_s0 & 0xFF);
    }
}
