/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Item {
    s32 unk0;
    struct Item *next;
    s32 id;
} Item;

extern Item *D_003E9944;

Item *func_001D5A10(s32 id) {
    Item *item = D_003E9944;

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
