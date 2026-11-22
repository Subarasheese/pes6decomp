/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad00[4];
    void *context;
    s32 count;
    u8 pad0C[0xC];
    void (*visit)(void *context, s32 index);
} CallbackList;

void func_009EF0C0(CallbackList *list) {
    s32 count = list->count;
    s32 i = 0;
    if (count > 0) {
        do {
            list->visit(list->context, i);
            ++i;
        } while (i < count);
    }
}
