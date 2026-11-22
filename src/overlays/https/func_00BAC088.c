/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9360[];

/* X509_subject_name_cmp, provider slot 9. */
s32 func_00BAC088(X509 *a, X509 *b) {
    typedef s32 (*Operation)(X509 *a, X509 *b);
    Operation operation = (Operation)D_00CC9360[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x95);
        return 0;
    }
    return operation(a, b);
}
