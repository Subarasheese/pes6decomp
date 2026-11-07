/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x1C];
    s32 value;
} Node;

typedef struct {
    u8 pad0[0x34];
    Node *node;
} Sub;

typedef struct {
    u8 pad0[2];
    u8 active;
    u8 pad3[0x19];
    Node *src;
    u8 pad20[0x28];
    Sub *sub;
} Obj;

void func_001D8750(Sub *);

void func_001F0900(Obj *obj) {
    if (obj->active == 0) {
        return;
    }
    obj->sub->node->value = obj->src->value;
    func_001D8750(obj->sub);

}
