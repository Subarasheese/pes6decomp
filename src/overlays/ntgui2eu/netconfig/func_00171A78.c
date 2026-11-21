/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 func_00173078(s32);
extern s32 func_00174030(void *);
extern void func_00173858(u32 *);
extern void func_00173B00(s32);

s32 func_00171A78(u32 *arg0) {
    if (arg0 == 0) {
        return 0;
    } else {
        if (((s32 *)(arg0))[0x343] == 0) {
            return 0;
        } else {
            func_00174030(arg0);
            func_00173B00(arg0);
            ((s32 *)(arg0))[0x26] = 2;
            func_00173858(arg0);
            func_00173078(arg0);
            return 1;
        }
    }
}
