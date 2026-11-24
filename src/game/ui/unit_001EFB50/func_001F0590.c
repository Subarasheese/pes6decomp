/* compiler: mwcc-3.0.1b151 */
#include "pes6/resource_bank_load.h"
extern s32 func_001540C0(void);
extern void func_001F0650(LoadedResource *resource);
typedef struct Item {
    s32 id;
    u8 reserved04[0x0c];
    struct Item *next;
} Item;
extern Item *D_0052B220[];
static inline Item *findItem(s32 id) {
    Item *item = D_0052B220[0];
    if (!item)
        return 0;
    do {
        if (item->id == id)
            return item;
        item = item->next;
    } while (item);
    return 0;
}
void func_001F0590(s32 id) {
    s32 args[2];
    s32 heap = func_001540C0();
    args[0] = heap;
    args[1] = heap;
    {
        ResourceLoadOptions options = {0};
        if (!findItem(id)) {
            options.id = args[0];
            func_0017F9A0(id, func_001F0650, args + 1, 4, &options);
        }
    }
}
