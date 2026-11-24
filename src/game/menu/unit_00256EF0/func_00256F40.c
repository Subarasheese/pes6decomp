/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    void *first, *second;
    s32 position;
    u8 ownsStorage : 1;
    u8 : 7;
} MatchResourcePair;
extern void *Pes6Heap_Alloc(s32 count, s32 bytes), *func_001BB730(void);
extern void func_001BB710(void *resource);
MatchResourcePair *func_00256F40(MatchResourcePair *pair) {
    s32 allocated = 0;
    void *first, *second;
    if (!pair) {
        pair = Pes6Heap_Alloc(1, sizeof(*pair));
        allocated = 1;
    }
    if (pair) {
        first = func_001BB730();
        second = func_001BB730();
        if (first && second) {
            pair->first = first;
            pair->second = second;
            pair->position = 0;
            pair->ownsStorage = allocated;
        } else {
            func_001BB710(first);
            func_001BB710(second);
        }
    }
    return pair;
}
