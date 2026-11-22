/* compiler: ee-gcc-2.9-G0 */
/* MPEG decoder source adapted from OpenRAC/rac-deadlocked-decomp, src/core/0013C750.c.
 * See THIRD_PARTY.md for provenance and terms. */
/* C adapted from rac3-decomp func_00130210 (NTSC-U func_00130210, commit 403f30a9) */
#include "types.h"

typedef struct {
    u8 pad0[0x184];
    int f184;
    int f188;
} Type1;

void func_008F6080(Type1 *s, int *dmv, int *arg0, int mvx, int mvy) {
    if (s->f184 == 3) {
        if (s->f188) {
            dmv[0] = ((mvx + (mvx > 0)) >> 1) + arg0[0];
            dmv[1] = ((mvy + (mvy > 0)) >> 1) + arg0[1] - 1;
            dmv[2] = ((3 * mvx + (mvx > 0)) >> 1) + arg0[0];
            dmv[3] = ((3 * mvy + (mvy > 0)) >> 1) + arg0[1] + 1;
        } else {
            dmv[0] = ((3 * mvx + (mvx > 0)) >> 1) + arg0[0];
            dmv[1] = ((3 * mvy + (mvy > 0)) >> 1) + arg0[1] - 1;
            dmv[2] = ((mvx + (mvx > 0)) >> 1) + arg0[0];
            dmv[3] = ((mvy + (mvy > 0)) >> 1) + arg0[1] + 1;
        }
    } else {
        dmv[0] = ((mvx + (mvx > 0)) >> 1) + arg0[0];
        dmv[1] = ((mvy + (mvy > 0)) >> 1) + arg0[1];
        if (s->f184 == 1) {
            dmv[1]--;
        } else {
            dmv[1]++;
        }
    }
}
