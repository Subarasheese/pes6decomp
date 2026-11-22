/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"
extern RcomApiFunction D_00CC9408[];
/* Provider slot 52: EVP_PKEY_new. */
EVP_PKEY *func_00BACE20(void) {
    typedef EVP_PKEY *(*Operation)(void);
    Operation operation = (Operation)D_00CC9408[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x87);
        return 0;
    }
    return operation();
}
