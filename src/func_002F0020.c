/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad[0x64];
    void *h64;
    u8 pad2[0x28];
    void *h90;
} Obj;

extern void func_001ED840(void *, u8);
extern void func_001F3C40(void *, u8);

void func_002F0020(Obj *o, f32 x) {
    if (o != 0) {
        func_001ED840(o->h90, (u8)x);
        func_001F3C40(o->h64, (u8)x);
    }
}
