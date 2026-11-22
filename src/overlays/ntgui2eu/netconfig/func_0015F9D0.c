/* compiler: ee-gcc-2.9 */
#include "types.h"

extern s32 func_0012DD30(s32, s32, s32, s32, s32 *, s32);
extern s32 func_00135080(s32);
extern void func_0015F930(void);
extern void func_0015F990(s32);

extern char D_005B3744[];
extern char D_005BEE28[];

void func_0015F9D0(s32 arg0) {
    if (arg0 < 0) {
        if ((*(s32 *)D_005BEE28) == 1) {
            func_0012DD30(2, 0x1F4, 0xFA, func_00135080(0x47), (s32 *) func_0015F930, (*(s32 *)D_005B3744));
            return;
        }
        func_0012DD30(2, 0x1F4, 0xFA, func_00135080(0x4A), (s32 *) func_0015F930, (*(s32 *)D_005B3744));
        return;
    }
    func_0015F990(arg0);
}
