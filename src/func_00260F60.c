/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_0058D360[];
void func_001EDD90(s32);

void func_00260F60(void) {
    if (D_0058D360[0] == 0) {
        return;
    }
    func_001EDD90(D_0058D360[0]);
    D_0058D360[0] = 0;
}
