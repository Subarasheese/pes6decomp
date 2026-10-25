/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xC];
    f32 value;
} Node;

typedef struct {
    u8 pad0[4];
    Node *node;
} Sub;

typedef struct {
    u8 pad0[0x24];
    Sub *sub;
} Obj;

typedef struct {
    f32 scale;
    u8 pad4[0x1788];
    s32 ids[1];
} Ctx;

extern Ctx *D_003E74CC;
void func_001AFD80(Node *, s32);
f32 func_00131B60(f32);

void func_0027B780(Obj *obj, s32 i) {
    func_001AFD80(obj->sub->node, D_003E74CC->ids[i]);
    obj->sub->node->value = func_00131B60(D_003E74CC->scale);
}
