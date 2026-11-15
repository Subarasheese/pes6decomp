/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 Pes6Module_GetRegion(int);
extern void func_001FC780(s32);
s32 func_00983550(void) {
    func_001FC780(Pes6Module_GetRegion(4));
    return 1;
}
