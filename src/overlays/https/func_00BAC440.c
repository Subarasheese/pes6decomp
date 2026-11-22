/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9388[];

/* X509_NAME_hash, provider slot 19. */
unsigned long func_00BAC440(X509_NAME *name) {
    typedef unsigned long (*Operation)(X509_NAME *name);
    Operation operation = (Operation)D_00CC9388[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x81);
        return 0;
    }
    return operation(name);
}
