/* compiler: ee-gcc-2.9-as210-G0 */
#include "types.h"
extern void func_001232E8(s32);
extern s32 func_00135DB8(void);
extern void func_00136F68(void);
void func_00123358(s32 index) {
    if (index < 0) {
        return;
    }
    if (index >= 2) {
        return;
    }
    if (func_00135DB8() == 0) {
        func_001232E8(1);
        func_00136F68();
        return;
    }
    func_001232E8(0);
}
