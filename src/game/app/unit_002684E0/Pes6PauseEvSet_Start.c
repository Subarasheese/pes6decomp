/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct PauseTask PauseTask;
typedef struct {
    s32 finished;
    s32 (*poll)(s32);
    void (*onReady)(s32);
    s32 value;
} PauseEventWork;
extern s32 PauseEvSet(PauseEventWork *);
extern PauseTask *Pes6Process_Create(s32, s32 (*)(PauseEventWork *), s32, s32, s32, const char *);
extern void Pes6Process_Start(PauseTask *);
extern PauseEventWork *Pes6Process_GetWork(PauseTask *);
extern const char D_003D9A80[];
PauseTask *Pes6PauseEvSet_Start(s32 (*poll)(s32), void (*onReady)(s32), s32 value) {
    PauseTask *task = Pes6Process_Create(0, PauseEvSet, 0, sizeof(PauseEventWork), 0, D_003D9A80);
    PauseEventWork *work;
    Pes6Process_Start(task);
    work = Pes6Process_GetWork(task);
    work->finished = 0;
    work->poll = poll;
    work->onReady = onReady;
    work->value = value;
    return task;
}
