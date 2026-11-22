/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 D_008B14B8[];
extern int D_008B14BC[];
extern int D_008B14C0[];
extern u8 D_008B14C4[];

void func_0084A5E0(int param_1, int param_2) {
    D_008B14B8[0] = param_2;
    D_008B14BC[0] = param_2 + param_1 * 1000;
    D_008B14C0[0] = param_1 * 1000;
    D_008B14C4[0] = 1;
}
