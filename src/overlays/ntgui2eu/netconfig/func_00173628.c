/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


s32 func_00173628(void *arg0, s32 arg1) {
    u32 v = M2C_FIELD(((arg1 * 0x24) + M2C_FIELD(arg0, s32 *, 0xB80)), u32 *, 4) & 4; return v != 0;
}
