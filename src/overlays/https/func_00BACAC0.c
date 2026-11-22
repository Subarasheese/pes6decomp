/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93D4[];

/* store context extension cleanup, provider slot 45. */
s32 func_00BACAC0(void) {
    typedef s32 (*Operation)(void);
    Operation operation = (Operation)D_00CC93D4[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x8a);
        return 0;
    }
    return operation();
}
