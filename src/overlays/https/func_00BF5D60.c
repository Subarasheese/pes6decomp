/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
extern void *func_00BF5D40(u32 bytes), *func_00B99358(void *buffer, u32 bytes);
extern void func_00B991B8(void *buffer);
void *func_00BF5D60(void *buffer, u32 bytes) {
    void *result;
    if (!buffer)
        return func_00BF5D40(bytes);
    result = func_00B99358(buffer, bytes ? bytes : 1);
    if (!result)
        func_00B991B8(buffer);
    return result;
}
