/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern void func_002648F0(void *), func_002648E0(void *), func_00264790(void *, u8),
    func_002646E0(void *);
extern u8 func_002646D0(void *);
extern void func_00271EB0(void), func_00271F10(void);
s32 func_00CD3FE0(void *ctx) {
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
        func_00271EB0();
        func_00271F10();
        func_002646E0(ctx);
    }
    func_002648E0(ctx);
    return 1;
}
