/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
#include "pes6/https/method_dispatch.h"
s32 func_00BE4848(TransformWrapper *wrapper, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5,
                  s32 arg6, s32 arg7) {
    TransformDelegate *delegate;
    s32 status = func_00BECCA8(wrapper, func_00BE4AE8);
    if (status == 0) {
        delegate = wrapper->delegate;
        status = delegate->methods->updateA(delegate, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }
    return status;
}
