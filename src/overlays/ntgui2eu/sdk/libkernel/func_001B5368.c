/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern s32 func_001B3320(void *, void *);

s32 func_001B5368(s32 arg0, void *arg1) {
    s32 *entry;
    s32 value;
    void *entry2;
    s32 *entry3;
    entry3 = &value;
    if ((*((s32 *)(((s8 *)arg1) + 8))) == 0) {
        *((s32 *)(((s8 *)arg1) + 4)) = 0;
        return 0;
    }
    entry2 = (void *)arg0;
    value = func_001B3320(entry2, arg1);
    *(entry = (s32 *)(((s8 *)arg1) - -4)) = (*((s32 *)(8 + ((s8 *)arg1))) = 0);
    value = *entry3;
    return value;
}
