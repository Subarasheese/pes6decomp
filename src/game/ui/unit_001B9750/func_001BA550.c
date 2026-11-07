/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 count;
    s32 *items;
} List;

void func_001B9250(s32, void (*)(void));
void func_001BA670(void);

void func_001BA550(List *list, s32 i) {
    if (list != NULL && i < list->count) {
        func_001B9250(list->items[i], func_001BA670);
    }
}
