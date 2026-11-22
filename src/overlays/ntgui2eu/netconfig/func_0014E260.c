/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 D_005BC20C;
extern s32 func_00135D48(void);
extern s32 func_00135D70(void);
extern void func_0014E2B8(void);

s32 func_0014E260(void) {
    s32 value1;
    s32 value2;
    value1 = func_00135D48();
    if ((value1 & D_005BC20C) == 0) {
        return 0;
    } else {
        value2 = func_00135D70();
        if ((value2 & D_005BC20C) != 0) {
            return 0;
        } else {
            func_0014E2B8();
            return 1;
        }
    }
}
