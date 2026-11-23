/* compiler: ee-gcc-2.96-G0 */
#include "pes6/https/crypto_parameters.h"

s32 func_00BE5CF8(const CryptoMethod *method, CryptoObject *object, const CryptoBytes *input) {
    CryptoBytes *saved;
    s32 result = func_00BED248(object, (void **)&saved, sizeof(*saved));
    if (result == 0) {
        result = func_00BED2C0(object, (void **)&saved->bytes, input->bytes, input->length);
        if (result == 0) {
            saved->length = input->length;
            result = func_00BECE80(object, method, saved);
        }
    }
    return result;
}
