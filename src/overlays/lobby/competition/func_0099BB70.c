/* compiler: mwcc-3.0.1b210 */
#include "pes6/overlay_module.h"
extern void func_002CB600(s32 zone);
extern void func_002CAA60(void);
s32 func_0099BB70(void) {
    func_001FC780(Pes6Module_GetRegion(26));
    func_002CAA60();
    func_002CB600(18);
    return 1;
}
