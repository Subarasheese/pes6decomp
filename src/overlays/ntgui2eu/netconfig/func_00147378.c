/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern u32 func_00135080(s32);
extern s32 func_0012DD30(s32, s32, s32, s32, s32 *, s32);
extern void func_001514E8(s32);
extern void func_00147308(void);
extern s32 func_00124860(void);
extern char D_00147480[];
extern char D_011DFB38[];
extern s32 D_011DFB48[];
extern s32 D_005B3744[];
extern s32 D_005BD3EC[];

void func_00147378(int arg0) {
    u32 arg3;
    int buffer[8];

    func_00131560(buffer, 0, 0, (u32)D_00147480, 0);
    D_011DFB48[0] = func_00131580(buffer);
    D_005B3744[0] = *(int *)(D_005BD3EC[0] * 4 + (u32)D_011DFB38);
    if (arg0 == 0) {
        arg3 = func_00135080(0x70);
        func_0012DD30(0, 500, 0xfa, arg3, (int *)0x0, D_005B3744[0]);
    } else {
        func_001514E8(D_005B3744[0]);
    }
    func_00147308();
    func_00124860();
}
