/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93A0[];

/* X509_NAME_get_entry, provider slot 25. */
X509_NAME_ENTRY *func_00BAC630(X509_NAME *name, s32 index) {
    typedef X509_NAME_ENTRY *(*Operation)(X509_NAME *name, s32 index);
    Operation operation = (Operation)D_00CC93A0[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x7e);
        return 0;
    }
    return operation(name, index);
}
