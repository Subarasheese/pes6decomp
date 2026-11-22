/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9354[];

/* d2i_X509, provider slot 6. */
X509 *func_00BABFB0(X509 **cert, u8 **input, long length) {
    typedef X509 *(*Operation)(X509 **cert, u8 **input, long length);
    Operation operation = (Operation)D_00CC9354[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x69);
        return 0;
    }
    return operation(cert, input, length);
}
