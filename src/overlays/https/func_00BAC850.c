/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93B4[];

/* X509_STORE_load_locations, provider slot 37. */
s32 func_00BAC850(X509_STORE *store, char *file, char *directory) {
    typedef s32 (*Operation)(X509_STORE *store, char *file, char *directory);
    Operation operation = (Operation)D_00CC93B4[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x67);
        return 0;
    }
    return operation(store, file, directory);
}
