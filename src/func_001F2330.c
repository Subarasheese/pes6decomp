/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0;
    u8 id;
    u8 pad2[0x3A];
    void (*draw)(void);
    void (*update)(void);
    void (*free)(void);
    s32 handle;
} Obj;

Obj *func_001F4140(s32, s32, s32);
s32 func_001EDFC0(void);
void func_001F2440(void);
void func_001F23A0(void);
void func_001F22B0(void);

Obj *func_001F2330(s32 owner) {
    Obj *obj;

    if (owner != 0) {
        obj = func_001F4140(owner, 9, 0x50);
        obj->handle = func_001EDFC0();
        obj->draw = func_001F2440;
        obj->update = func_001F23A0;
        obj->free = func_001F22B0;
        obj->id = 0xFF;
        return obj;
    }
    return NULL;
}
