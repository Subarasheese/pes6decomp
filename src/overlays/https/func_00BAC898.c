/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93B8[];

/* X509_STORE_set_default_paths, provider slot 38. */
s32 func_00BAC898(X509_STORE *store) {
    typedef s32 (*Operation)(X509_STORE *store);
    Operation operation = (Operation)D_00CC93B8[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x68);
        return 0;
    }
    return operation(store);
}
