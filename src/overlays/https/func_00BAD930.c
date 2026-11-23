/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
extern void *func_00BC1088(void);
extern u32 func_00BC0E68(void *, u32, u32);
s32 func_00BAD930(void *context, u32 first, u32 second, u32 *out) {
    *out = func_00BC0E68(func_00BC1088(), second, first);
    return 0;
}
