/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
#include "pes6/https/method_dispatch.h"
s32 func_00BE4490(MethodPair *pair, void *key, void *state, void *out, u32 *written, const void *in,
                  u32 length, void *options) {
    s32 status =
        pair->first->method0c(pair->firstContext, key, state, out, written, in, length, options);
    if (status)
        return func_00BE61C0(status);
    return status;
}
