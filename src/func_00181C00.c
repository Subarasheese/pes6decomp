/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 active;
    s32 handle;
    u8 pad[0x58];
} Slot60;

extern char D_0051FF38[];
extern u8 D_00397040[];
extern void func_00182720(Slot60 *s, u8 v);

void func_00181C00(void) {
    Slot60 *s = M2C_FIELD(D_0051FF38, Slot60 **, 0);
    u8 *t = D_00397040;
    s32 i;

    for (i = 0; i < 27; i++, s++, t++) {
        if (s->active) {
            func_00182720(s, *t);
        }
    }
}
