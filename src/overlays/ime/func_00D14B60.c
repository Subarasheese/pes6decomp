/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_001F08B0(u32 param_1);
extern void func_001D6E40(int param_1);
extern u32 func_001D6E70(int param_1, u32 param_2, u32 param_3);
extern void func_001DEF30(int param_1, u8 param_2);
extern u32 D_00D393D4[];
extern u32 D_00D3957C[];

u32 func_00D14B60(int param_1)

{
    int iVar1;

    if (param_1 == 0) {
        if (D_00D393D4[0] != 0) {
            func_001D6E40(D_00D393D4[0]);
        }
        D_00D393D4[0] = 0;
        return 0;
    }
    iVar1 = func_001F08B0(param_1);
    if (iVar1 != 0) {
        if (D_00D393D4[0] != 0) {
            func_001D6E40(D_00D393D4[0]);
        }
        D_00D393D4[0] = func_001D6E70(D_00D3957C[0], 0x62, iVar1);
    }
    func_001DEF30(*(u32 *)(D_00D393D4[0] + 0xc), 3);
    return 0;
}
