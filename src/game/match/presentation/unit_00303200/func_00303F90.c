/* compiler: mwcc-3.0.1b210 */
#pragma opt_lifetimes off
#include "types.h"
typedef struct PresentationChecks PresentationChecks;
typedef s32 (*PresentationTest)(PresentationChecks *);
struct PresentationChecks {
    s32 count;
    s32 reserved;
    PresentationTest checks[8];
};
extern s32 func_00303E80(PresentationChecks *), func_00303E50(PresentationChecks *),
    func_00303E10(PresentationChecks *), func_00303D90(PresentationChecks *),
    func_00303DF0(PresentationChecks *);
static inline void addCheck(PresentationChecks *ctx, PresentationTest test) {
    if (ctx->count < 8) {
        s32 i = 0;
        do {
            if (!ctx->checks[i]) {
                ctx->checks[i] = test;
                ++ctx->count;
                break;
            }
            ++i;
        } while (i < 8);
    }
}
s32 func_00303F90(PresentationChecks *ctx) {
    addCheck(ctx, func_00303E80);
    addCheck(ctx, func_00303E50);
    addCheck(ctx, func_00303E10);
    addCheck(ctx, func_00303D90);
    addCheck(ctx, func_00303DF0);
    return 1;
}
