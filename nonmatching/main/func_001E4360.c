/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

f32 func_001E4360(void *arg0, s32 arg1) {
    s32 *p;

    M2C_FIELD(arg0, s8 *, 0x10) = 1;
    p = M2C_FIELD(arg0, s32 **, 4);
    while (*p != arg1) {
        p = (s32 *)((u8 *)p + 8);
        if (*p == -1) {
            return 0.0f;
        }
    }
    return M2C_FIELD(p, f32 *, 4) * M2C_FIELD(arg0, f32 *, 8);
}
