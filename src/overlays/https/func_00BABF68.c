/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9350[];

/* i2d_X509, provider slot 5. */
s32 func_00BABF68(X509 *cert, u8 **out) {
    typedef s32 (*Operation)(X509 *cert, u8 **out);
    Operation operation = (Operation)D_00CC9350[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x6a);
        return 0;
    }
    return operation(cert, out);
}
