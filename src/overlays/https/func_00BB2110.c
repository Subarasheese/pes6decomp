/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/signature_methods.h"
s32 func_00BB2110(s32 type, const u8 *digest, u32 length, u8 *signature, u32 *size, void *key) {
    PalSignMethod method = func_00BAD1A0()->sign;
    if (!method) {
        func_00BB3380(10, 105, 14, 0, 0);
        return -1;
    }
    return method(type, digest, length, signature, size, key);
}
