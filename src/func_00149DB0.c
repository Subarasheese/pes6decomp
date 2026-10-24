/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Task {
    u8 pad0[0xC];
    struct Task *next;
    s32 id;
} Task;

extern Task D_0050AE30;
void func_0014A410(Task *);

void func_00149DB0(s32 id) {
    Task *task;

    for (task = D_0050AE30.next; task != &D_0050AE30; task = task->next) {
        if (task->id == id) {
            func_0014A410(task);
            return;
        }
    }
}
