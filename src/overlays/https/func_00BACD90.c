/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9400[];

/* PEM_read_X509, provider slot 33. */
X509 *func_00BACD90(RcomFile *file, X509 **cert, RcomPasswordCallback password) {
    typedef X509 *(*Operation)(RcomFile *file, X509 **cert, RcomPasswordCallback password);
    Operation operation = (Operation)D_00CC9400[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x85);
        return 0;
    }
    return operation(file, cert, password);
}
