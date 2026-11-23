/* compiler: ee-gcc-2.9-as210-G0 */
#include "types.h"
extern void func_00159708(void), func_00136FB0(void);
extern u32 func_00135D48(void), func_00135D70(void), D_005BC210[];
s32 func_001500A8(void) {
    func_00159708();
    if (!(func_00135D48() & D_005BC210[0]))
        return 0;
    if (func_00135D70() & D_005BC210[0])
        return 0;
    func_00136FB0();
    return 1;
}
