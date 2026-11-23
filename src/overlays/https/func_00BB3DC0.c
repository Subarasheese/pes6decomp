/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/evp_cipher_state.h"
s32 func_00BB3DC0(CipherState *ctx, const PalCipher *cipher, const u8 *key, const u8 *iv,
                  s32 encrypt) {
    if (encrypt < 0)
        encrypt = ctx->encrypt;
    if (encrypt)
        return func_00BB3E00(ctx, cipher, key, iv);
    return func_00BB3E80(ctx, cipher, key, iv);
}
