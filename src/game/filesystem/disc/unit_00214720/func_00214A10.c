/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s16 row;
    s16 col;
} Pos;

extern s32 D_00537B30[];

s32 func_00214A10(s32 packed) {
    volatile Pos *p = (volatile Pos *)&packed;
    s32 row = p->row;
    s32 col = p->col;

    return D_00537B30[col + row * 4];
}
