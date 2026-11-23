/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
extern void *func_001E6E10(s32), *func_00C8B150(void);
extern void func_00C897C0(u32, s8), func_00C88EC0(u32, void (*)(void), void (*)(void));
extern void *func_00C89CB0(u32, void *, void *, void *, float, float, float, float);
extern void func_00C81FA0(void);
extern u8 D_00CA8800[];
extern float D_00CA87F0[], D_00CA87F4[], D_00CA87F8[], D_00CA87FC[];
void func_00C81FB0(void) {
    void *resource = func_001E6E10(0x4ee2);
    func_00C89CB0(126, D_00CA8800, func_00C8B150(), resource, D_00CA87F0[0], D_00CA87F4[0],
                  D_00CA87F8[0], D_00CA87FC[0]);
    func_00C897C0(126, 0);
    func_00C88EC0(32, 0, func_00C81FA0);
}
