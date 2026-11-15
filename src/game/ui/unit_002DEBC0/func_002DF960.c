/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 pad[0x70]; s32 f; } Obj;
extern void func_002E1CA0(u8 *);
extern void Pes6Process_Unlink(s32);
extern void Pes6Process_Destroy(s32);

void func_002DF960(Obj *a0) {
    if (a0 != NULL) {
        s32 i = 0;
        u8 *p = (u8 *)a0;
        for (; i < 2; i++) {
            func_002E1CA0(p + 0x28);
            p += 0x24;
        }
        Pes6Process_Unlink(a0->f);
        Pes6Process_Destroy(a0->f);
    }
}
