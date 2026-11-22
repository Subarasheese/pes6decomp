/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern void func_0014CBA8(void);
extern s32 func_00124860(void);
extern char D_0014CD38[];
extern s32 D_011E09D0[];
extern u32 D_005BD8BC[];

void func_0014CC10(void) {
    int buffer[8];

    func_00131560(buffer, 0, 0, (u32)D_0014CD38, 0);
    D_011E09D0[0] = func_00131580(buffer);
    D_005BD8BC[0] = 0;
    func_0014CBA8();
    func_00124860();
}
