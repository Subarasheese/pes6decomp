/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u32 D_008DC270[];
s32 func_008B39E0(s32 slot) {
    u32 *state = &D_008DC270[slot];
    if (*state != 4)
        *state = 0x200000;
    return 0;
}
