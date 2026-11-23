/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/evp_cipher_state.h"
s32 func_00BB3C48(CipherState *ctx) {
    ctx->used = 0;
    ctx->encrypt = 1;
    func_001C48E8(ctx->originalIv, 0, 32);
    func_001C48E8(ctx->iv, 0, 32);
    func_001C48E8(ctx->buffer, 0, 32);
    ctx->position = 0;
    if (ctx->cipher && ctx->contextSize != ctx->cipher->contextSize) {
        if (ctx->algorithmData) {
            func_001C48E8(ctx->algorithmData, 0, ctx->contextSize);
            func_00BC0A88(ctx->algorithmData);
        }
        ctx->algorithmData = func_00BC0A38(ctx->cipher->contextSize);
        if (!ctx->algorithmData) {
            func_00BB3380(6, 108, 33, 0, 0);
            return 0;
        }
        ctx->contextSize = ctx->cipher->contextSize;
    }
    if (ctx->algorithmData)
        func_001C48E8(ctx->algorithmData, 0, ctx->contextSize);
    ctx->total = ctx->flags = 0;
    return 1;
}
