/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E9DA4;
void func_0018A180(void);
void func_00186510(s32);
void func_00186530(s32);

void func_002D7590(s32 enable) {
    D_003E9DA4 = enable;
    func_0018A180();
    if (enable != 0) {
        func_00186510(1);
    } else {
        func_00186530(1);
    }
}
