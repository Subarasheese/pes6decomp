/* compiler: mwcc-3.0.1b151 */
#pragma opt_repositioncode off
#include "types.h"

extern void func_00145750(void *handle);

/* The texture list contains a count followed by its handle-array pointer. */
void func_00151550(const void *list) {
    s32 count, i;
    void **slot;
    count = *(const s32 *)list;
    for (i = 0; i < count; i++) {
        slot = (void **)(*(const s32 *)((const u8 *)list + 4) + i * 4);
        if (*slot != 0) {
            func_00145750(*slot);
        }
    }
}
