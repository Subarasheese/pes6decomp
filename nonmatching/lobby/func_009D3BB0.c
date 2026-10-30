/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern char D_00A02FC8[];
extern char D_00A7DE08[];

s32 func_009D3BB0(s32 arg0) {
    s32 var_s1;
    void *temp_v0;

    if ((*(s32 *)D_00A7DE08) == 0) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < 2) {
        var_s1 = 0;
        do {
            temp_v0 = M2C_FIELD(((arg0 * 0x10) + (*(s32 *)D_00A7DE08) + (var_s1 * 4)), void **, 0x8C);
            if (temp_v0 != NULL) {
                func_001DF820(M2C_FIELD(temp_v0, void **, 0xC), (s32) ((void *)D_00A02FC8));
            }
            var_s1 += 1;
        } while (var_s1 < 4);
        return 1;
    }
    return 0;
}
