/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 Pes6Wind_GetSpeed(void);
s32 sprintf(char *, const char *, ...);
extern char D_0092EC58[];
extern char D_0092F670[];

char *func_00923150(void) {
    f32 v;

    v = Pes6Wind_GetSpeed();
    if (v < 0.0f) {
        v = 0.0f;
    } else if (v > 99.0f) {
        v = 99.0f;
    }
    sprintf(D_0092F670, D_0092EC58, (s32)v);
    return D_0092F670;
}
