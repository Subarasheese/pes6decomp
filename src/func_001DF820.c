/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Obj {
    u8 pad[0x18];
    void *f18;
    u8 pad1C[0x20];
    void *f3C;
    u8 pad40[0x2C];
    u8 f6C;
    u8 pad6D[7];
    u8 f74;
} Obj;

extern s32 func_001C7E10(void *);
extern void func_00153FA0(void *);
extern void func_001E50C0(Obj *);
extern void func_001DFF50(Obj *, s32);
extern void func_001E5120(Obj *);

void func_001DF820(Obj *o, s32 a) {
    if (o == NULL || a == 0) return;
    if (o->f6C != 0) return;
    if (func_001C7E10(o->f18) == 0) return;
    func_00153FA0(o->f18);
    o->f18 = NULL;
    func_001E50C0(o);
    func_001DFF50(o, a);
    func_001E5120(o);
    if (o->f3C != NULL) {
        func_00153FA0(o->f3C);
        o->f3C = NULL;
    }
    o->f74 = 0xFF;
}
