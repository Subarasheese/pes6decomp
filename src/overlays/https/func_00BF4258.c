/* compiler: ee-gcc-2.96-G0 */
#include "pes6/https/crypto_parameters.h"

extern const CryptoMethod D_00C41E18;
s32 func_00BF4258(CryptoObject *object, const void *key) {
    void *saved;
    s32 result = func_00BED2C0(object, &saved, key, 8);
    if (result == 0) {
        result = func_00BED060(object, saved, 8);
        if (result == 0)
            result = func_00BECE80(object, &D_00C41E18, saved);
    }
    return result;
}
