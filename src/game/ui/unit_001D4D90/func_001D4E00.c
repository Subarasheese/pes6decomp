/* compiler: mwcc-3.0.1b151-O3 */
#include "types.h"

typedef struct ListItem {
    u8 reserved[0x0c];
    struct ListItem *next;
} ListItem;
typedef struct {
    u8 reserved[0x1c];
    int active;
    ListItem *head;
} List;
extern s32 func_001D7F10(ListItem *item);

void func_001D4E00(List *list) {
    ListItem *item;
    ListItem *next;
    if (list && list->active) {
        item = list->head;
        do {
            next = item->next;
            func_001D7F10(item);
            item = next;
        } while (next);
    }
}
