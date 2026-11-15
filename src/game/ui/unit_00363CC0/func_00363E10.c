/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x20];
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} Obj;

void func_001D7F10(s32);
void Pes6Process_Unlink(s32);
void Pes6Process_Destroy(s32);
void Pes6Heap_Free(Obj *);

void func_00363E10(Obj *obj) {
    func_001D7F10(obj->a);
    func_001D7F10(obj->b);
    func_001D7F10(obj->c);
    Pes6Process_Unlink(obj->d);
    Pes6Process_Destroy(obj->d);
    Pes6Heap_Free(obj);
}
