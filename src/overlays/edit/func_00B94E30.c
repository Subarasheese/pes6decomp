/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0024EC90(s32);
extern void *func_00B94EF0(s32, s32, s32, s32);

void *func_00B94E30(s32 arg0, s32 arg1, s32 arg2) {
    return func_00B94EF0(arg0, 1, func_0024EC90(arg1), arg2);
}
