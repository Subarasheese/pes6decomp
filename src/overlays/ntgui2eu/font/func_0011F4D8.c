/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_0011EE00(s32, s32, void *, s32, s32, s32, float);

extern char D_005B3708[];
extern char D_005B3718[];
extern char D_005B371C[];
extern char D_011D3E40[];
extern char D_011D3EC0[];
extern char D_011D3F40[];
extern char D_011D3FC0[];

void func_0011F4D8(void) {
    func_0011EE00((*(s32 *)D_005B3708), (*(s32 *)D_005B3718), ((void *)D_011D3E40), 0, 0, 0, 1.0f);
    func_0011EE00((*(s32 *)D_005B3718), (*(s32 *)D_005B3708), ((void *)D_011D3EC0), 0, 0, 0, 1.0f);
    func_0011EE00((*(s32 *)D_005B3718), (*(s32 *)D_005B371C), ((void *)D_011D3F40), 0, 0, 0, 1.0f);
    func_0011EE00((*(s32 *)D_005B371C), (*(s32 *)D_005B3718), ((void *)D_011D3FC0), 0, 0, 0, 1.0f);
}
