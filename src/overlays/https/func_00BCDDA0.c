/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_00BCF270(void *);

u32 func_00BCDDA0(s32 arg0) {
    if (arg0 != 0) {
        if (!(func_00BCF270((void *)arg0) & 0x3000) || (M2C_FIELD(arg0, s64 *, 0x100) & 0x40000)) {
            return M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32(**)(s32), 0x24)(arg0);
        }
        return 1;
    }
    return 1;
}
