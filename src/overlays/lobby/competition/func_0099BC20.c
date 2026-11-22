/* compiler: mwcc-3.0.1b210 */
#include "pes6/overlay_module.h"
extern void func_002CB600(s32 zone);
extern void func_002CAA60(void);
extern void func_002CAAA0(void);
s32 func_0099BC20(void) {
    func_001FC780(Pes6Module_GetRegion(26));
    func_001FC780(Pes6Module_GetRegion(4));
    func_002CAA60();
    func_002CAAA0();
    func_002CB600(18);
    func_002CB600(22);
    return 1;
}
