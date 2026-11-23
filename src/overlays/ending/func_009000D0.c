/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 reserved, index;
    void *group;
    s32 count;
    void *buffer;
} EndingState;
extern EndingState *D_003EA6A8;
extern void func_009004A0(void), func_001B9630(void *, s32), Pes6Heap_Free(void *),
    func_00900390(void);
void func_009000D0(void) {
    if (D_003EA6A8) {
        func_009004A0();
        func_001B9630(D_003EA6A8->group, D_003EA6A8->count);
        Pes6Heap_Free(D_003EA6A8->group);
        Pes6Heap_Free(D_003EA6A8->buffer);
        D_003EA6A8->group = 0;
        D_003EA6A8->buffer = 0;
        D_003EA6A8 = 0;
        func_00900390();
    }
}
