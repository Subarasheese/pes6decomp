/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_0022F150(void);
s32 func_00231240(void);
void func_002262E0(u8);

static inline u8 get_v(void) {
    u8 *p = func_0022F150();

    if (func_00231240() == 1) {
        return 0;
    }
    if (p == NULL) {
        return 0;
    }
    return p[2];
}

void func_00226370(void) {
    u8 v = get_v();

    switch (v) {
    case 9:
        v = 0;
        break;
    case 10:
        v = 1;
        break;
    case 8:
        v = 7;
        break;
    }
    func_002262E0(v);
}
