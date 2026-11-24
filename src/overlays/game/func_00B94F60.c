/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 reserved00[2], count, reserved03[0x1c - 3];
    s32 type;
    u8 reserved20[2], active;
} MatchIncident;
extern MatchIncident D_00CBCD90[];
extern u8 D_00591C09[];
extern s32 func_002DCA30(void), func_00848210(void);
extern u8 Pes6MatchFlow_GetState(s32);
s32 func_00B94F60(void) {
    MatchIncident *ctx = D_00CBCD90;
    s32 ready;
    if (func_002DCA30() && func_00848210())
        Pes6MatchFlow_GetState(1);
    ready = 0;
    {
        s32 enabled = 0;
        s32 live = D_00591C09[0] != 5;
        if (live)
            live = ctx->active != 0;
        if (live) {
            s32 applicable = 1;
            if (ctx->type != 4 && ctx->type != 5)
                applicable = 0;
            if (applicable)
                enabled = 1;
        }
        if (enabled && ctx->count > 2)
            ready = 1;
    }
    return ready != 0;
}
