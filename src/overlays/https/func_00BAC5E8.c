/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC939C[];

/* X509_NAME_entry_count, provider slot 24. */
s32 func_00BAC5E8(X509_NAME *name) {
    typedef s32 (*Operation)(X509_NAME *name);
    Operation operation = (Operation)D_00CC939C[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x7f);
        return 0;
    }
    return operation(name);
}
