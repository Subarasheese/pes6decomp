/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Item {
    s32 unk0;
    struct Item *next4;
    struct Item *next8;
} Item;

typedef struct Obj {
    Item *head;
    u8 pad[0xC];
    s32 type;
} Obj;

extern void func_001EEDA0(Item *, s32);
extern void func_001ED1E0(Item *, s32);

void func_001ED8F0(Obj *o, s32 arg) {
    Item *p;
    if (o == NULL) return;
    if (o->type != 4) {
        for (p = o->head; p != NULL; p = p->next8) {
            func_001EEDA0(p, arg);
        }
    } else {
        for (p = o->head; p != NULL; p = p->next4) {
            func_001ED1E0(p, arg);
        }
    }
}
