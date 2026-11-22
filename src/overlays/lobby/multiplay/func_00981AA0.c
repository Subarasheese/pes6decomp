/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_009818C0(void *state, void **entries, s32 count, s32 kind, s32 mode, s64 flags);

s32 func_00981AA0(void *state, void *entry, s32 kind, s64 flags) {
    return func_009818C0(state, &entry, 1, kind, 2, flags);
}
