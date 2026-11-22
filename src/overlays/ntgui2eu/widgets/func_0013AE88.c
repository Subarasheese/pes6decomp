/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern void func_0013ADD0(void);
extern s32 func_00124860(void);
extern char D_0013AF78[];
extern s32 D_011D9604[];
extern u32 D_005BCB44[];

void func_0013AE88(void) {
    int buffer[8];

    func_00131560(buffer, 0, 0, (u32)D_0013AF78, 0);
    D_011D9604[0] = func_00131580(buffer);
    D_005BCB44[0] = 0;
    func_0013ADD0();
    func_00124860();
}
