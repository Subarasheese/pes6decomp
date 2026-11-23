/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
extern s32 func_00BE7418(void *, void *, void *, const char *, s32);
s32 func_00BE97F0(void *state, void *src, void *out, const char *name) {
    if (!name || !*name)
        return 0;
    return func_00BE7418(state, src, out, name, 1);
}
