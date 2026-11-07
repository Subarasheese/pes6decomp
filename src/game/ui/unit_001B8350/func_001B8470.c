/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[8];
    s32 handle;
    u8 padC[0x21];
    u8 on;
} Obj;

extern Obj D_00398400;
extern s32 D_00398434[];
void func_001D7D60(s32, s32);
void func_001D7C20(s32, s32);

void func_001B8470(s32 on) {
    Obj *obj = &D_00398400;

    if (D_00398434[0] != 0) {
        func_001D7D60(obj->handle, on);
        if (on != 0) {
            func_001D7C20(obj->handle, 2);
        }
        obj->on = on;
    }
}
