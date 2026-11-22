/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_001ACEC0(void *, s32);
extern void func_0017DF40(s32, s32, s32);
extern s32 func_0017DF20(s32, s32, s32);
extern char D_00521D50[];

int func_001ACDF0(void *arg0) {
    int value;
    int value2;

    value2 = *(int *)((int)arg0 + 0x10);
    value = *(int *)((u32) * (u8 *)arg0 * 4 + (u32)D_00521D50);
    func_001ACEC0(arg0, *(u8 *)arg0 + 0x23be);
    func_0017DF40(value2, 0x71, 0x44c);
    func_0017DF20(value2, 0x71, *(u8 *)arg0 + 0x23be);
    func_0017DF40(value2, 0x72, *(u8 *)(value + 10) + 0x578);
    func_0017DF20(value2, 0x72, *(u8 *)(value + 10) + 0x5aa);
    func_0017DF40(value2, 0x6f, *(u8 *)(value + 10) + 0x578);
    value2 = func_0017DF20(value2, 0x6f, *(u8 *)arg0 + 0x23be);
    return value2;
}
