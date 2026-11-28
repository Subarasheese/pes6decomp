/* compiler: ee-gcc-2.9 */
#include "pes6/https/rcom_digest.h"

extern int func_00BB5A38(HmacContext *ctx, u8 *output, unsigned int *size);

s32 func_00BAD298(RcomDigest *ctx, u8 *output, unsigned int *size) {
    s32 result = 0;
    if (ctx->type == 3)
        result = func_00BB5A38(ctx->state.hmac, output, size) ? 0 : 10001;
    else
        func_00BB1F80(ctx->state.plain->digest, output, size);
    return result;
}
