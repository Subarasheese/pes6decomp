/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s8 func_009A7210(void);
extern void *Pes6Ball_Current;

s32 func_009B1FF0(void) {
    s32 a;
    s32 b;
    s32 c;

    a = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1474);
    if (a <= 0) {
        a = -a;
    }
    if ((f32) a < 13465.0f) {
        return 0;
    }
    b = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x147C);
    if (b <= 0) {
        b = -b;
    }
    if ((f32) b <= 939.0f) {
        c = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1478);
        if (c <= 0) {
            c = -c;
        }
        if (c < 0x271) {
            return ~func_009A7210() != 0;
        }
    }
    return 0;
}
