/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/evp_cipher_state.h"
s32 func_00BB3E80(CipherState *ctx, const PalCipher *cipher, const u8 *key, const u8 *iv) {
    if (cipher && !func_00BB3B50(ctx, cipher))
        return 0;
    ctx->cipher->init(ctx, key, iv, 0);
    ctx->used = ctx->encrypt = 0;
    return 1;
}
