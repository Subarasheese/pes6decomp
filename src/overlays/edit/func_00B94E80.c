/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 * func_001F85A0(u16 *, u8 *);
extern s32 func_0024EC90(s32);
extern void * func_00B94EF0(s32, s32, s32, s32);

extern char D_00CE35C0[];

s32 func_00B94E80(s32 arg0, s32 arg1, s32 arg2) {
    u16 *temp_a0;
    u16 *temp_v0;

    temp_v0 = func_00B94EF0(arg0, 0, func_0024EC90(arg1), arg2);
    temp_a0 = temp_v0;
    if (arg2 == 0) {
        return (s32) temp_v0;
    }
    func_001F85A0(temp_a0, ((void *)D_00CE35C0));
    return (s32) ((void *)D_00CE35C0);
}
