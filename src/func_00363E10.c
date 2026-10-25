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
void func_001BC040(s32);
void func_001BBFD0(s32);
void func_00153FA0(Obj *);

void func_00363E10(Obj *obj) {
    func_001D7F10(obj->a);
    func_001D7F10(obj->b);
    func_001D7F10(obj->c);
    func_001BC040(obj->d);
    func_001BBFD0(obj->d);
    func_00153FA0(obj);
}
