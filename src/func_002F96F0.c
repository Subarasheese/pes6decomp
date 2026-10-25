/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    void **items;
    u32 count;
} PtrArray;

void *func_002F96F0(PtrArray *arr, u32 index) {
    void *item = NULL;

    if (arr != NULL) {
        if (index < arr->count) {
            item = arr->items[index];
        }
    }
    return item;
}
