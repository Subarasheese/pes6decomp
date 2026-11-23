/* compiler: ee-gcc-2.96-G0 */
#include "pes6/https/crypto_parameters.h"

s32 func_00BE5B80(const CryptoMethod *method, CryptoObject *object, const void *value) {
    void *copy;
    s32 result = func_00BED248(object, &copy, 4);
    if (result == 0) {
        func_00BF5CC0(copy, value, 4);
        result = func_00BECE80(object, method, copy);
    }
    return result;
}
