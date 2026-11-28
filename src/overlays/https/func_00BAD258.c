/* compiler: ee-gcc-2.9 */
#include "pes6/https/rcom_digest.h"

extern void func_00BB5A30(HmacContext *ctx, const u8 *data, int length);
extern void func_00BB1F50(void *ctx, const void *data, u32 length);

s32 func_00BAD258(RcomDigest *ctx, const u8 *data, s32 length) {
    if (ctx->type == 3)
        func_00BB5A30(ctx->state.hmac, data, length);
    else
        func_00BB1F50(ctx->state.plain->digest, data, length);
    return 0;
}
