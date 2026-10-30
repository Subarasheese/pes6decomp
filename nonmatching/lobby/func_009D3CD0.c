/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern char D_00A02FC8[];
extern char D_00A7DE08[];

s32 func_009D3CD0(s32 arg0, s8 *arg1) {
    s8 *var_a1;
    void *temp_v1;

    var_a1 = arg1;
    if ((*(s32 *)D_00A7DE08) == 0) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < 2) {
        temp_v1 = M2C_FIELD(((arg0 * 4) + (*(s32 *)D_00A7DE08)), void **, 0xAC);
        if (temp_v1 == NULL) {
            return 0;
        }
        if ((var_a1 == NULL) || (*var_a1 == 0)) {
            var_a1 = ((void *)D_00A02FC8);
        }
        func_001DF820(M2C_FIELD(temp_v1, void **, 0xC), (s32) var_a1);
        return 1;
    }
    return 0;
}
