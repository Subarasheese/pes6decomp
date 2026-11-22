/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_008E7F00(int param_1);

void func_008E7310(int param_1)

{
    if (param_1 != 0) {
        func_008E7F00(param_1 + 0x54);
        *(u8 *)(param_1 + 1) = 0;
    }
    return;
}
