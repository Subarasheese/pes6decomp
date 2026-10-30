/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
M2C_UNK func_009E47D0(u8);                          /* extern */
extern char D_00A03220[];
extern void *D_00A7DF08;

s32 func_009E4300(s8 *arg0) {
    s8 *var_a1;
    void *temp_v1;

    if (D_00A7DF08 != NULL) {
        temp_v1 = M2C_FIELD(D_00A7DF08, void **, 0x58);
        var_a1 = arg0;
        if (temp_v1 != NULL) {
            if ((arg0 == NULL) || (*arg0 == 0)) {
                var_a1 = ((void *)D_00A03220);
            }
            func_001DF820(M2C_FIELD(temp_v1, void **, 0xC), (s32) var_a1);
        }
        func_009E47D0(M2C_FIELD(D_00A7DF08, u8 *, 0x11C));
        return 1;
    }
    return 0;
}
