/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 lo, hi;
    s32 (*fn)(s32, s32, s32);
} Ent;

extern Ent D_003D93B0[];

s32 func_00264F70(s32 v, s32 a1, s32 a2) {
    s32 r = 0;
    u32 i;
    for (i = 0; i < 7; i++) {
        if (D_003D93B0[i].lo <= v && v <= D_003D93B0[i].hi) {
            r = D_003D93B0[i].fn(v, a1, a2);
            break;
        }
    }
    return r;
}
