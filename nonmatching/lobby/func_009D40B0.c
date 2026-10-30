/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF4F0(void *, s8);
extern char D_00A7DE08[];

s32 func_009D40B0(s32 arg0, s8 arg1) {
    void *temp_v0;

    if ((*(s32 *)D_00A7DE08) == 0) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < 5) {
        temp_v0 = M2C_FIELD(((arg0 * 4) + (*(s32 *)D_00A7DE08)), void **, 0x6C);
        if (temp_v0 != NULL) {
            func_001DF4F0(M2C_FIELD(temp_v0, void **, 0xC), arg1);
        }
        return 1;
    }
    return 0;
}
