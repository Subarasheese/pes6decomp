/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 second;
    s32 first;
} PairEntry;

typedef struct {
    u8 pad0[0x10];
    s32 count;
    PairEntry items[16];
} PairQueue;

extern PairQueue D_005F1CC0;

s32 func_00338640(s32 first, s32 second) {
    PairQueue *queue = &D_005F1CC0;

    if (queue->count >= 16) {
        return 0;
    }
    queue->items[queue->count].second = second;
    queue->items[queue->count].first = first;
    queue->count++;
    return 1;
}
