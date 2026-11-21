/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u16 D_00CEFBD0[];

u16 func_00C04300(u8 param_1, u8 param_2)

{
    return (&D_00CEFBD0[0])[(u32)param_1 * 0x20 + (u32)param_2];
}
