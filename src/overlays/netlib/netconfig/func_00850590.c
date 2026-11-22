/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 D_008B1598[];

u32 func_00850590(u8 param_1)

{
    return (&D_008B1598[0])[param_1 & 1];
}
