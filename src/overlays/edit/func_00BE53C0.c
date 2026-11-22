/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00BC4F70(s32, s32);
extern void func_00BE5820(void *);

s32 func_00BE53C0(s32 **arg0) {
    if (func_00BC4F70(0xED0016, 0) != 0) {
        *arg0 = (s32 *) func_00BE5820;
    }
    return 0;
}
