/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 pad[0x70]; s32 f; } Obj;
extern void func_002E1CA0(u8 *);
extern void func_001BC040(s32);
extern void func_001BBFD0(s32);

void func_002DF960(Obj *a0) {
    if (a0 != NULL) {
        s32 i = 0;
        u8 *p = (u8 *)a0;
        for (; i < 2; i++) {
            func_002E1CA0(p + 0x28);
            p += 0x24;
        }
        func_001BC040(a0->f);
        func_001BBFD0(a0->f);
    }
}
