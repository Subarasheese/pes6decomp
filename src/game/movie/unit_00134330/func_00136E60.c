/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    s32 active;
    u8 pad[0x28];
    s32 a;
    s32 b;
} Obj;

extern s32 func_00114FA8(void);
extern void func_0010D800(s32);
extern void func_0010A978(s32);

s32 func_00136E60(Obj *o) {
    if (o->active != 0) {
        while ((func_00114FA8() != 0) ^ 1) {
        }
        func_0010D800(o->a);
    } else {
        func_0010A978(o->b);
    }
    return 1;
}
