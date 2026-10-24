/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xC];
    void (*run)(void *);
} Handler;

typedef struct {
    u8 unk0;
    u8 state;
    u8 pad2[0xA];
    s32 type;
    s32 active;
} Task;

extern Handler **D_003E7600;

void func_001AC550(Task *task) {
    Handler *handler = D_003E7600[task->type];

    if (task->state == 2) {
        if (task->active != 0) {
            handler->run(task);
        }
    }
}
