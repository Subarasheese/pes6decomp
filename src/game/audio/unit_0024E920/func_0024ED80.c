/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 active;
    u8 done;
    u8 pad2[2];
    s32 x;
    s32 y;
} Ctx;

extern Ctx D_0053CF10[];

s32 func_0024ED80(s32 x, s32 y) {
    Ctx *ctx = D_0053CF10;

    if (D_0053CF10[0].active != 0) {
        return 0;
    }
    ctx->x = x;
    ctx->y = y;
    ctx->active = 1;
    ctx->done = 0;
    return 1;
}
