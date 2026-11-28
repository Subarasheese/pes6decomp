/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 func_00BE6610(void *key);

s32 func_00BE6648(void *key) {
    s32 status = 0;
    if (key)
        status = func_00BE6610(key) ? 0x21b : 0;
    return status;
}
