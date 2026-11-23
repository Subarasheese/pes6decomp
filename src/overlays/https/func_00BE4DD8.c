/* compiler: ee-gcc-2.96-nsa-G0 */
#include "types.h"
typedef struct {
    s32 reserved00, value;
} KeyStatus;
typedef struct {
    u8 reserved00[4];
    KeyStatus *status;
    u8 reserved08[0x38];
    s32 *limits;
} KeyContext;
extern s32 func_00BE40C8(KeyContext *, void *, void *, void *);
extern s32 func_00BE5168(KeyContext *, s32);
s32 func_00BE4DD8(KeyContext *ctx, void *param, void *key, void *data) {
    s32 status;
    ctx->status->value = 0;
    status = func_00BE40C8(ctx, param, key, data);
    if (status)
        return status;
    {
        if (ctx->status->value)
            ctx->limits[1] = ctx->status->value;
        status = func_00BE5168(ctx, 0);
    }
    return status;
}
