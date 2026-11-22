/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    s32 state;
    u8 payload[0x3C43C];
} MovieFrame;
typedef struct {
    void *buffer;
    MovieFrame *frames;
    s32 writeIndex;
    s32 count;
    s32 capacity;
} MovieQueue;
extern int DIntr(void);
extern int EIntr(void);
void func_00138990(MovieQueue *queue) {
    DIntr();
    queue->frames[queue->writeIndex].state = 2;
    ++queue->count;
    queue->writeIndex = (queue->writeIndex + 1) % queue->capacity;
    EIntr();
}
