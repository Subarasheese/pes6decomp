/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 D_00C3EF9C;

s32 func_00BB7FD8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_00C3EF9C;
    D_00C3EF9C = temp_v0 + arg0;
    return temp_v0;
}
