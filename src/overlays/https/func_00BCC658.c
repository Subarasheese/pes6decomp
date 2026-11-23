/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
extern void *func_00BC6FB0(const void *);
extern void func_00BC6730(void *), func_00BB3380(s32, s32, s32, const char *, s32);
s32 func_00BCC658(void **slot, const void *key) {
    void *copy = func_00BC6FB0(key);
    if (!copy) {
        func_00BB3380(20, 215, 0x804, 0, 0);
        return 0;
    }
    if (*slot)
        func_00BC6730(*slot);
    *slot = copy;
    return 1;
}
