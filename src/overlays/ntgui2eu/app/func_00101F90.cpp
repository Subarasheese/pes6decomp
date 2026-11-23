/* compiler: ee-gcc-2.96 */
extern "C" {
#include "types.h"
extern void *D_0060208C;
extern s32 D_00602080;
extern s32 func_00193008(void *buffers, s32 id);
extern s32 func_00193100(s32 mode, u16 timeout);
extern s32 func_0019B160(s32 semaphore);
static inline void flipBuffer(s32 id) {
    func_00193008(D_0060208C, id);
    func_00193100(0, 0);
    func_0019B160(D_00602080);
}
void func_00101F90(s32 id) {
    flipBuffer(id);
    flipBuffer(id ^ 1);
}
}
