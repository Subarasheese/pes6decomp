/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int func_00212E00(int param_1, u32 param_2);
extern u32 D_003EB2A0;
extern u8 *D_003E7E1C;

void func_00CE0330(void)

{
    func_00212E00(D_003EB2A0, *(u32 *)(D_003E7E1C + 0x14c));
    return;
}
