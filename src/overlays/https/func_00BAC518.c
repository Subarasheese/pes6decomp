/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC9394[];

/* i2d_X509_NAME, provider slot 31. */
s32 func_00BAC518(X509_NAME *name, u8 **out) {
    typedef s32 (*Operation)(X509_NAME *name, u8 **out);
    Operation operation = (Operation)D_00CC9394[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x83);
        return 0;
    }
    return operation(name, out);
}
