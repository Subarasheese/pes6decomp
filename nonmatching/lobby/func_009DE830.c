/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern char D_00A03150[];
extern void *D_00A7DED0;

s32 func_009DE830(s8 *arg0) {
    s8 *var_a1;
    void *temp_v1;

    if (D_00A7DED0 != NULL) {
        temp_v1 = M2C_FIELD(D_00A7DED0, void **, 0x14);
        var_a1 = arg0;
        if (temp_v1 == NULL) {
            return 0;
        }
        if ((arg0 == NULL) || (*arg0 == 0)) {
            var_a1 = ((void *)D_00A03150);
        }
        func_001DF820(M2C_FIELD(temp_v1, void **, 0xC), (s32) var_a1);
        return 1;
    }
    return 0;
}
