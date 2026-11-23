/* compiler: ee-gcc-2.96-G0 */
#include "pes6/https/crypto_parameters.h"

s32 func_00BF4400(CryptoObject *object, const CryptoBytes *key) {
    void *copy;
    s32 result = func_00BED2C0(object, &copy, key->bytes, key->length);
    if (result == 0)
        result = func_00BED060(object, copy, key->length);
    return result;
}
