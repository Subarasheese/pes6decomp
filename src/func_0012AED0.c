/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 status;
    void *func;
    void *stack;
    s32 stackSize;
    void *gpReg;
    s32 initPriority;
    s32 currentPriority;
    u32 attr;
    u32 option;
    s32 pad[3];
} ThreadParam;

void func_001C0470(void *, s32);
s32 func_00105160(ThreadParam *);
extern s32 D_003EF370;

s32 func_0012AED0(void *func, void *stack, s32 stackSize, s32 prio) {
    ThreadParam param;

    func_001C0470(&param, sizeof(param));
    param.gpReg = &D_003EF370;
    param.func = func;
    param.stack = stack;
    param.stackSize = stackSize;
    param.initPriority = prio;
    return func_00105160(&param);
}
