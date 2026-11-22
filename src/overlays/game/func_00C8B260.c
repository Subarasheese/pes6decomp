/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u32 : 2;
    u32 enabled : 1;
} CallbackFlags;
extern CallbackFlags D_00CCD074;
extern s32 D_00CCD088;
extern s32 func_00C8B2C0(s32 node);
extern u32 func_001B9250(s32 root, s32 (*visit)(s32 node));
u32 func_00C8B260(u32 enabled) {
    u32 previous = D_00CCD074.enabled;
    D_00CCD074.enabled = enabled;
    func_001B9250(D_00CCD088, func_00C8B2C0);
    return previous;
}
