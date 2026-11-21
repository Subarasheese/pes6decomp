/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
extern s32 *func_009812C0(void);

s32 func_0097F9F0(void) {
    void *var_v0;

    if (func_0082C2A0() == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = func_009812C0();
    }
    if (var_v0 == NULL) {
        return 0;
    }
    return M2C_FIELD(var_v0, s32 *, 0x141E8);
}
