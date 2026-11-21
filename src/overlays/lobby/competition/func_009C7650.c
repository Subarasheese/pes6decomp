/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_0099C7C0(int param_1);
extern u32 D_00A7DD70[];

void func_009C7650(void)

{
    if (D_00A7DD70[0] != 0) {
        func_0099C7C0(*(u32 *)(D_00A7DD70[0] + 0x50));
        func_0099C7C0(D_00A7DD70[0]);
        D_00A7DD70[0] = 0;
    }
    return;
}
