/* compiler: mwcc-3.0.1b210 */
#pragma opt_strength_reduction off
#include "types.h"
typedef struct TrainingStateStack TrainingStateStack;
extern void func_002648F0(TrainingStateStack *), func_002648E0(TrainingStateStack *),
    func_00264790(TrainingStateStack *, s32);
extern s32 func_002646D0(TrainingStateStack *), func_002645A0(TrainingStateStack *, s32),
    func_001F87E0(s32, s32), func_001F87D0(void);
s32 func_00CD7D40(TrainingStateStack *ctx) {
    s32 done = 0;
    func_002648F0(ctx);
    switch ((u8)func_002646D0(ctx)) {
    case 0:
        if (func_001F87E0(1, 32))
            func_00264790(ctx, 2);
        break;
    case 1:
        if (!func_001F87D0())
            break;
        func_00264790(ctx, 2);
    case 2:
        done = 1;
        break;
    }
    func_002648E0(ctx);
    if (done)
        func_00264790(ctx, func_002645A0(ctx, 1));
    return done;
}
