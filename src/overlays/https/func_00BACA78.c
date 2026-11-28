/* compiler: ee-gcc-2.9 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93D0[];

s32 func_00BACA78(long number, char *argument, int (*create)(), int (*duplicate)(), void (*destroy)()) {
    typedef s32 (*GetIndex)(long, char *, int (*)(), int (*)(), void (*)());
    GetIndex operation = (GetIndex)D_00CC93D0[0];
    if (!operation) {
        RCOM_MISSING_CERTIFICATE_CALLBACK(0x66);
        return -1;
    }
    return operation(number, argument, create, duplicate, destroy);
}
