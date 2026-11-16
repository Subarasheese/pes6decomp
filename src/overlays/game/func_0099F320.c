/* compiler: mwcc-3.0.1b151 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern char D_00CB6390[];

u16 func_0099F320(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFF;
    if (temp_v1 >= 8) {
        return 0U;
    }
    return *(u16 *)(((u8 *)D_00CB6390) + (temp_v1 * 4));
}
