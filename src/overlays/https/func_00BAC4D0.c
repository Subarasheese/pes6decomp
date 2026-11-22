/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9390[];

/* d2i_X509_NAME, provider slot 22. */
X509_NAME *func_00BAC4D0(X509_NAME **name, u8 **input, long length) {
    typedef X509_NAME *(*Operation)(X509_NAME **name, u8 **input, long length);
    Operation operation = (Operation)D_00CC9390[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x7d);
        return 0;
    }
    return operation(name, input, length);
}
