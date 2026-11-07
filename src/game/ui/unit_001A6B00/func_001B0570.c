/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0;
    u8 state;
    u8 pad2[6];
    s32 value;
    s8 handle;
} Sub;

typedef struct {
    Sub *sub;
    s32 b;
    u8 pad8[0x3C];
    s32 data;
} Obj;

void func_00153FA0(s32);

void func_001B0570(Obj *obj) {
    Sub *sub = obj->sub;

    if (sub->handle != 0) {
        func_00153FA0(obj->data);
    } else {
        sub->value = obj->data;
    }
}
