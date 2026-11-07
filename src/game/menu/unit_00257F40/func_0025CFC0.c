/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 D_0058D148[];
s32 func_0025ED80(void);
void func_0025D230(void);

void func_0025CFC0(void) {
    if (func_0025ED80() == 0) {
        return;
    }
    func_0025D230();
    D_0058D148[0] = 1;
}
