/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "pes6/match_presentation.h"
typedef struct {
    u8 reserved[0x24];
    s32 selection;
} PresentationSelection;
extern s32 func_00BDA0E0(void), func_00301850(Presentation *);
extern void func_002D4BE0(s32);
extern s32 D_003B4F10[];
s32 func_003017E0(Presentation *ctx) {
    PresentationSelection *selection = ctx->work;
    if (!func_00BDA0E0()) {
        func_002D4BE0(D_003B4F10[selection->selection]);
        func_00305E60(ctx, func_00301850);
        return 1;
    }
    return 0;
}
