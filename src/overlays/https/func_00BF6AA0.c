/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
s32 func_00BF6AA0(s32 byteOffset, s32 count, const s32 *excluded) {
    s32 i;
    for (i = 0; i < count; ++i) {
        if (byteOffset == excluded[i])
            return 0;
    }
    return 1;
}
