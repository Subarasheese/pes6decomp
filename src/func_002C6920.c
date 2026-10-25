/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 pad[30]; u8 lo:5; u8 f:1; } Rec_002C6920;

s32 func_002C6920(Rec_002C6920 *a0, s32 *a1) {
    s32 v = a0->f;
    *a1 += 15;
    return v * 15;
}
