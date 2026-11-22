/* compiler: mwcc-3.0.1b210 */
#include "pes6/overlay_module.h"
extern void func_002CB600(s32 zone);
extern void func_002CAA20(void);
s32 func_0099BAD0(void) {
    func_001FC780(Pes6Module_GetRegion(24));
    func_002CAA20();
    func_002CB600(19);
    return 1;
}
