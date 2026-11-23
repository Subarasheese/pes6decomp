/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern void func_001B77F0(s32);
extern void func_001B78A0(s32);
extern void func_001B7B80(s32);
extern void func_001B7D40(s32, s32);
extern s32 func_00D0C970(void);
extern s8 D_0058D7AA[];
void func_0090FD20(s32 value, s32 value2) {
    if ((D_0058D7AA[0] == 0) || (func_00D0C970() == 0)) {
        if (value2 == 0) {
            func_001B7B80(value);
        } else {
            func_001B7D40(value, value2);
            func_001B78A0(1);
            func_001B77F0(3);
        }
    }
}
