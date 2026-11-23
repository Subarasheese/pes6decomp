/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 count0;
    s32 *value0;
    s32 count1;
    s32 *value1;
    void (*increase)(s32);
    void (*decrease)(s32);
    s32 state;
} MenuAdjustment;
typedef struct {
    u8 pad00[0x18];
    MenuAdjustment *work;
} AdjustmentTask;
extern s32 D_003E7670, D_003E7674;
extern void func_002FE420(s32), func_002FE410(s32);
extern s32 func_002FF570(AdjustmentTask *);
extern void func_00305E60(AdjustmentTask *, s32 (*)(AdjustmentTask *));
s32 func_002FF5C0(AdjustmentTask *task) {
    MenuAdjustment *w = task->work;
    w->state = 0;
    w->count0 = 1;
    w->value0 = &D_003E7670;
    w->count1 = 1;
    w->value1 = &D_003E7674;
    w->increase = func_002FE420;
    w->decrease = func_002FE410;
    func_00305E60(task, func_002FF570);
    return 1;
}
