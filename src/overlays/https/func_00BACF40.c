/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"
extern RcomApiFunction D_00CC9418[];
/* Provider slot 55: retain an EVP_PKEY. */
void func_00BACF40(EVP_PKEY *key) {
    typedef void (*Operation)(EVP_PKEY *key);
    Operation operation = (Operation)D_00CC9418[0];
    if (operation) {
        operation(key);
    } else {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x88);
    }
}
