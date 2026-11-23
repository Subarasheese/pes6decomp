/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/signature_methods.h"
s32 func_00BB21B8(s32 type, const u8 *digest, u32 length, const u8 *signature, u32 size,
                  void *key) {
    PalVerifyMethod method = func_00BAD1A0()->verify;
    if (!method) {
        func_00BB3380(10, 108, 14, 0, 0);
        return -1;
    }
    return method(type, digest, length, signature, size, key);
}
