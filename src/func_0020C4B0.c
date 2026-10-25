/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    void **items;
    s32 count;
} PtrArray;

void *func_0020C4B0(PtrArray *arr, s32 index) {
    void *item = NULL;

    if (arr != NULL) {
        if (index < arr->count) {
            item = arr->items[index];
        }
    }
    return item;
}
