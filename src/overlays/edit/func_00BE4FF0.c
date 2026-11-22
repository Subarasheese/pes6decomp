/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00B91440(s32);
extern void func_00BE52A0(void *);
extern s32 func_00BE8C90(void);

s32 func_00BE4FF0(s32 **arg0) {
    if (func_00BE8C90() != 0) {
        *arg0 = (s32 *) func_00BE52A0;
        func_00B91440(0x27);
    }
    return 0;
}
