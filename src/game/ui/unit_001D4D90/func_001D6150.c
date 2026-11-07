/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 a;
    u8 pad4[0x3C];
    s32 b;
    s32 c;
} Obj;

void func_001D5350(s32);
void func_001D51F0(s32, s32, s32);

void func_001D6150(Obj *obj) {
    s32 a = obj->a;

    func_001D5350(obj->c);
    func_001D51F0(obj->b, obj->c, a);
}
