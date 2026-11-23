/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
typedef struct {
    s32 status;
    void (*entry)(void);
    void *stack;
    s32 stackSize;
    void *globalPointer;
    s32 priority, initialPriority;
    u32 attributes;
    const char *option;
    u8 kernelFields[0xc];
} ThreadParameters;
extern ThreadParameters D_011DD800;
extern u8 D_011DD830[];
extern s32 D_005BD310, D_005BD30C;
extern const char D_005FC130[];
extern void *func_001AE7D8(void *, s32, u32);
extern s32 func_00135130(void);
extern s32 func_0019AF20(ThreadParameters *);
extern s32 func_0019C260(s32, void *);
extern void func_001424F8(void);
/* Start the memory-card getstat worker at the configured priority plus one. */
void func_00142558(void) {
    D_005BD310 = 0;
    D_005BD30C = 0;
    func_001AE7D8(&D_011DD800, 0, sizeof(D_011DD800));
    D_011DD800.entry = func_001424F8;
    D_011DD800.stack = D_011DD830;
    D_011DD800.stackSize = 0x2000;
    D_011DD800.globalPointer = 0;
    D_011DD800.priority = func_00135130() + 1;
    D_011DD800.option = D_005FC130;
    func_0019C260(func_0019AF20(&D_011DD800), 0);
}
