/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 unk0;
    u8 a;
    u8 b;
    u8 mode : 2;
    u8 rest : 6;
} Obj4;

void func_002C7630(Obj4 *, s32);

void func_002C7600(Obj4 *obj, s32 arg1) {
    obj->a = 0;
    obj->mode = 0;
    obj->b = 0;
    func_002C7630(obj, arg1);
}
