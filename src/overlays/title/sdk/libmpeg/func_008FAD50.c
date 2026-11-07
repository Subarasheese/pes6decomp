/* compiler: ee-gcc-2.9 */
#include "types.h"

typedef struct {
    u8 pad0[0x14C];
    s32 x14C;
    u8 pad150[0x184 - 0x150];
    s32 x184;
    s32 x188;
    u8 pad18C[0x194 - 0x18C];
    s32 x194;
    u8 pad198[0x19C - 0x198];
    s32 a[3];
    s32 b[3];
} S;

extern s32 func_008F86F8(S *, s32);

void func_008FAD50(S *p) {
    s32 n;
    s32 i;

    if (p->x14C != 0) {
        if (p->x194 != 0) {
            n = p->x188 != 0 ? 3 : 2;
        } else {
            n = 1;
        }
    } else if (p->x184 != 3) {
        n = 1;
    } else {
        n = p->x194 != 0 ? 3 : 2;
    }
    for (i = 0; i < n; i++) {
        p->a[i] = func_008F86F8(p, 0x10);
        func_008F86F8(p, 1);
        p->b[i] = func_008F86F8(p, 0x10);
        func_008F86F8(p, 1);
    }
}
