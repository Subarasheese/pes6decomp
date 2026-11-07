/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xA];
    s16 valid;
    s16 x;
    u8 padE[0x2];
    s16 y;
} Pos;

typedef struct {
    u8 pad0[0x10];
    Pos *pos;
} Info;

extern Info *D_00520008[];

s32 func_00187460(f32 *x, f32 *y) {
    Pos *pos;

    *x = 0.0f;
    *y = 0.0f;
    pos = D_00520008[0]->pos;
    if (pos->valid == 0) {
        return 0;
    }
    *x = pos->x;
    *y = pos->y;
    return 1;
}
