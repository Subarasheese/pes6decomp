/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/evp_cipher_state.h"
void func_00BB4300(CipherState *ctx) {
    if (ctx->cipher && ctx->cipher->cleanup)
        ctx->cipher->cleanup(ctx);
    if (ctx->algorithmData) {
        func_001C48E8(ctx->algorithmData, 0, ctx->contextSize);
        func_00BC0A88(ctx->algorithmData);
        ctx->algorithmData = 0;
        ctx->contextSize = 0;
    }
    func_001C48E8(ctx, 0, sizeof(*ctx));
}
