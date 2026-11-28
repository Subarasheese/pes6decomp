/* compiler: ee-gcc-2.9 */
#include "pes6/rcom_certificate.h"

extern RcomApiFunction D_00CC93BC[];

s32 func_00BAC8E0(void *context, s32 value) {
    typedef s32 (*SetValue)(void *, s32);
    SetValue operation = (SetValue)D_00CC93BC[0];
    if (!operation)
        return 0;
    return operation(context, value);
}
