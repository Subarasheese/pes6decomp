/* compiler: ee-gcc-2.96-nsa-G0 */
#include "pes6/https/method_dispatch.h"

extern s32 func_00BE5168(MethodPair *, s32);
s32 func_00BE4DD8(MethodPair *ctx, void *key, void **choices, void *options) {
    s32 status;
    ctx->status->value = 0;
    status = func_00BE40C8(ctx, key, choices, options);
    if (status)
        return status;
    {
        if (ctx->status->value)
            ctx->limits[1] = ctx->status->value;
        status = func_00BE5168(ctx, 0);
    }
    return status;
}
