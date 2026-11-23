/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"
extern RcomApiFunction D_00CC940C[];
/* Provider slot 53: EVP_PKEY_free. */
void func_00BACE68(EVP_PKEY *key) {
    typedef void (*Operation)(EVP_PKEY *key);
    Operation operation = (Operation)D_00CC940C[0];
    if (operation) {
        operation(key);
    } else {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x86);
    }
}
