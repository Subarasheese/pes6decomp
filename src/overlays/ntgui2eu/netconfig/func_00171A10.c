/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 func_00173078(s32);
extern s32 func_00174030(void *);
extern void func_00173858(u32 *);
extern void func_00173B00(s32);

s32 func_00171A10(u32 *arg0) {
    s32 value1;
    if (arg0 == 0) {
        return 0;
    } else {
        if (((s32 *)(arg0))[0x2FC] == 0) {
            return 0;
        } else {
            value1 = func_00174030(arg0);
            if (value1 == 0) {
                func_00173B00(arg0);
                ((s32 *)(arg0))[0x26] = 2;
                func_00173858(arg0);
                func_00173078(arg0);
            }
            return 1;
        }
    }
}
