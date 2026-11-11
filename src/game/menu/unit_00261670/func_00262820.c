/* compiler: mwcc-3.0.1b210 */
#include "types.h"
u8 *Pes6OptionData_GetBlock304(u32 arg0);
void func_00262820(u32 arg0) {
    u8 b = arg0;
    *(u8 *)(Pes6OptionData_GetBlock304(arg0) + 3) = b;
}
