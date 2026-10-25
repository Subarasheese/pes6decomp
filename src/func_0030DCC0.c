/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x14];
    s16 scale;
    u8 pad16[0xCA];
    f32 x;
    f32 unkE4;
    f32 y;
    u8 padEC[0x154];
} Rec240;

extern Rec240 D_0058E5B0[];

s32 func_0030DCC0(f32 *outX, f32 *outY, s32 index) {
    Rec240 *rec;
    f32 scale;

    if ((u8)index != 0xFF) {
        index = (u8)index % 23;
    } else {
        index = 1;
    }
    rec = &D_0058E5B0[index];
    scale = rec->scale;
    *outX = rec->x * scale;
    *outY = rec->y * scale;
    return 1;
}
