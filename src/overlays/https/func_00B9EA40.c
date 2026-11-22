/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/m2c.h"

extern s32 func_00B9D160(void *, u8 **, s32, s32);

s32 func_00B9EA40(void *arg0, s32 arg1) {
    return func_00B9D160(arg0, (u8 **)arg1, M2C_FIELD(arg0, s32 *, 4), 0);
}
