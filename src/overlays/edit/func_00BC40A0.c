/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 SD_call(s32);
s32 func_00BCF3A0(s32);
extern void func_00C1B4D0(void);
extern void func_00C1B500(void);

s32 func_00BC40A0(void) {
    if (func_00BCF3A0(0x8000) == 1) {
        func_00C1B4D0();
        SD_call(0x8400F803);

        return 1;
    } else {
        if (func_00BCF3A0(0x40000) == 1) {
            func_00C1B500();
            SD_call(0x8400F803);
            return 1;
        }
        return 0;
    }
}
