/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00338AA0(s32, s32);
extern s32 func_003389F0(void *, s32, s32);
extern void *func_00338AD0(s32, void (*)(void), s32, void *);
extern s32 func_00341910(s32, s32, s32);
extern char D_003E61A8[];
extern void func_003432F0(void);
extern void func_00344BA0(void);

s32 func_00344DF0(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_00338AD0(0x1C, func_00344BA0, 5, (void *)D_003E61A8);
    func_003389F0(temp_v0, 3, 0x8FFFFFFF);
    func_00338AA0((s32) temp_v0, arg0);
    if (func_00341910(1, 5, 0xA) == 0) {
        func_00338AA0((s32) func_00338AD0(0x42, func_003432F0, 4, (void *)D_003E61A8), arg0);
    }
    return 1;
}
