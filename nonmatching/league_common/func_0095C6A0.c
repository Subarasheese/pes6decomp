/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
extern char D_00A77EE0[];
extern char D_00A77EE8[];

void func_0095C6A0(void) {
    void *temp_v0;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        if ((*(s32 *)D_00A77EE0) != 1) {
            M2C_FIELD(temp_v0, s32 *, 0x325A8) = 0;
        } else {
            M2C_FIELD(temp_v0, s32 *, 0x325A8) = (s32) (*(s32 *)D_00A77EE8);
        }
    }
}
