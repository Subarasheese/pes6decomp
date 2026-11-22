/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_001D7A20(void *, s32, s32);
extern s32 func_001D7E40(s32, s32);
extern void func_001D7F10(void *);
extern s32 func_001D7F90(s32);

s32 func_00973940(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 value;

    value = func_001D7F90(arg0);
    if (value != 0) {
        func_001D7E40(value, arg1);
        if (func_001D7A20((void *)value, arg3, arg2) == 0) {
            func_001D7F10((void *)value);
            return 0;
        }
        func_001D7F10((void *)value);
        return arg3;
    }
    return 0;
}
