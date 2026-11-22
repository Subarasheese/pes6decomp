/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 func_00C08E60(s32, s32);

extern char D_00C4F9D8[];

s32 func_00C07A08(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    return func_00C08E60(arg0, (s32)((void *)D_00C4F9D8)) == 0;
}
