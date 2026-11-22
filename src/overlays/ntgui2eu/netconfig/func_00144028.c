/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 func_00135D48(void);
extern s32 func_00135D70(void);
extern s32 func_001540B0(s32 *);
extern s8 D_005FC198[];
extern void func_00144080(void);

s32 func_00144028(void) {
    s32 value1;
    s32 value2;
    value1 = func_00135D48();
    if ((value1 & 0x10) == 0) {
        return 0;
    } else {
        value2 = func_00135D70();
        if ((value2 & 0x10) != 0) {
            return 0;
        } else {
            func_001540B0(D_005FC198);
            func_00144080();
            return 1;
        }
    }
}
