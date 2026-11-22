/* compiler: mwcc-3.0.1b151 */
#include "types.h"

typedef struct {
    s32 reserved;
    s32 index;
} EndingState;
extern EndingState *D_003EA6A8;
extern const s32 D_009082E0[];

s32 func_00900330(void) { return D_009082E0[D_003EA6A8->index]; }
