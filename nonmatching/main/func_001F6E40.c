/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00399510[];
extern char D_00399514[];
void func_001F6E40(void *a0, void *a1, s32 a2, s32 a3) {
    s32 t[4];
    t[1] = (s32)a1;
    *(f32 *)&t[2] = *(f32 *)D_00399510;
    *(f32 *)&t[3] = *(f32 *)D_00399514;
    if (a0 != 0 && a1 != 0) {
        ((void (*)(void *, void *, s32, s32))t[a3 + 2])(a0, &t[1], a2, a3);
    }
}
