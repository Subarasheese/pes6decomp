/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
void *func_0099AF50(s32, s32, M2C_UNK);             /* extern */
M2C_UNK func_009F06D0(s32, void *, s32, s32, M2C_UNK); /* extern */

void func_009F0480(void *arg0, s32 arg1, void **arg2, s32 arg3, void *arg4) {
    s32 temp_a3;
    void *temp_v0;

    if (*arg2 == NULL) {
        temp_v0 = func_0099AF50(arg1, M2C_FIELD(arg4, s32 *, 0), 1);
        *arg2 = temp_v0;
        func_001D7D80(temp_v0, M2C_FIELD(arg4, s16 *, 4));
        temp_a3 = M2C_FIELD(arg4, s32 *, 0xC);
        if (temp_a3 > 0) {
            func_009F06D0(arg3, temp_v0, M2C_FIELD(arg4, s32 *, 8), temp_a3, -1);
        }
    }
    M2C_FIELD(arg0, void ***, 0) = arg2;
    M2C_FIELD(arg0, s32 *, 4) = arg3;
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg4, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg4, s32 *, 0xC);
}
