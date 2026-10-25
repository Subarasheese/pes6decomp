/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001FC7D0(s32);
void func_001FC780(s32);
void func_001FC840(s32);

s32 func_002CA8C0(void) {
    if (func_001FC7D0(3) == 2) {
        return 1;
    }
    func_001FC780(3);
    func_001FC840(2);
    return 0;
}
