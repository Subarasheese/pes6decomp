/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Item {
    s32 id;
    u8 pad[0xC];
    struct Item *next;
} Item;

typedef struct Msg {
    u8 pad[0xC];
    s32 a;
    s32 b;
    u8 pad2[4];
} Msg;

extern Item *D_0052B220[];
extern s32 func_0017F9A0(s32, void (*)(void), s32 *, s32, void *);
extern void func_001F0650(void);

static inline Item *find_item(s32 id) {
    Item *item = D_0052B220[0];

    if (item == NULL) {
        return NULL;
    }
    do {
        if (item->id == id) {
            return item;
        }
        item = item->next;
    } while (item != NULL);
    return NULL;
}

void func_001F04F0(s32 id, s32 *arg) {
    Msg msg;
    u8 *p = (u8 *)&msg;
    s32 n = 20;
    if (p != NULL) {
        do { *p++ = 0; } while (--n);
    }
    if (find_item(id) != NULL) return;
    msg.a = arg[0];
    func_0017F9A0(id, func_001F0650, arg + 1, 4, &msg);
}
