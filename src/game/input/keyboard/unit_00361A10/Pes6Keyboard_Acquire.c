/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct KeyboardTask KeyboardTask;
typedef s32 (*KeyboardHook)(s32, s32, s32);
extern s32 func_00362BB0(void), func_00363330(s32), func_003637D0(KeyboardHook),
    func_00363A10(s32, s32, s32);
extern s32 mn_KeyboardInit(KeyboardTask *);
extern KeyboardTask *Pes6Process_Create(s32, s32 (*)(KeyboardTask *), s32, s32, s32, const char *);
extern void Pes6Process_Start(KeyboardTask *);
extern KeyboardTask *Pes6Keyboard_Process;
extern s32 Pes6Keyboard_RefCount;
extern const char D_003E6F10[];
void Pes6Keyboard_Acquire(void) {
    if (!Pes6Keyboard_Process) {
        KeyboardTask *task;
        func_00362BB0();
        func_00363330(0);
        func_003637D0(func_00363A10);
        task = Pes6Process_Create(0, mn_KeyboardInit, 0, 0, 0, D_003E6F10);
        Pes6Keyboard_Process = task;
        Pes6Process_Start(task);
    }
    ++Pes6Keyboard_RefCount;
}
