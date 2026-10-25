/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_0058D3A4[];
extern s32 D_0058D3A8[];
extern s32 D_0058D3AC[];
void func_00153FA0(s32);

void func_00261AE0(void) {
    if (D_0058D3A4[0] == 0) {
        return;
    }
    func_00153FA0(D_0058D3A4[0]);
    D_0058D3A4[0] = 0;
    D_0058D3A8[0] = 0;
    D_0058D3AC[0] = 0;
}
