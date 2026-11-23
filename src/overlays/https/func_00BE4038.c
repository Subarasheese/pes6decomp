/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
#include "pes6/https/method_dispatch.h"
s32 func_00BE4038(MethodPair *pair, u32 *size) {
    s32 status = pair->second->method14(pair->secondContext, size);
    if (status)
        return func_00BE61C0(status);
    return status;
}
