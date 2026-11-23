/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u32 D_008DC270[];
s32 func_008B3880(s32 slot) {
    u32 *state = &D_008DC270[slot];
    if (*state != 0x1000)
        *state = 0x4000;
    return 0;
}
