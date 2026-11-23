/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern void func_002648F0(void *), func_002648E0(void *), func_00264790(void *, u8),
    func_002646E0(void *);
extern u8 func_002646D0(void *);
extern void func_00182AE0(s32), func_00182B30(s32), func_001A1750(void), func_00188A60(void *),
    func_00147F40(s32);
s32 func_00CD41D0(void *ctx) {
    u8 status;
    func_002648F0(ctx);
    status = func_002646D0(ctx);
    if (status != 1) {
        switch (status) {
        case 0:
            break;
        default:
            func_00264790(ctx, 0);
            break;
        }
        func_00182AE0(0);
        func_00182B30(0);
        func_001A1750();
        func_00188A60(0);
        func_00147F40(1);
        func_002646E0(ctx);
    }
    func_002648E0(ctx);
    return 1;
}
