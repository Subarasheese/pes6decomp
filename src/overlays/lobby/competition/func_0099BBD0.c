/* compiler: mwcc-3.0.1b210 */
#include "pes6/overlay_module.h"
extern void func_002CB600(s32 zone);
extern void func_002CAA30(void);
extern void func_002CAA90(void);
s32 func_0099BBD0(void) {
    func_002CB600(18);
    func_002CB600(22);
    func_002CAA30();
    func_002CAA90();
    Pes6Module_Load(26);
    return 1;
}
