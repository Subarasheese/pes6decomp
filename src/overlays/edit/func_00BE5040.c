/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_00B91440(s32);
extern void func_00BE5260(s32);
extern void func_00BE52A0(void *);
extern s32 func_00BE9360(s32, s32);

s32 func_00BE5040(s32 **arg0) {
    s32 temp_v0;

    temp_v0 = func_00BE9360(1, 0);
    switch (temp_v0) {
    case 1:
        *arg0 = (s32 *) func_00BE5260;
        func_00B91440(0x26);
        break;
    case 2:
        *arg0 = (s32 *) func_00BE52A0;
        func_00B91440(0x26);
        break;
    }
    return 0;
}
