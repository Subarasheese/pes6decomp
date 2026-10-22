/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_00537AEC[];
void func_0020C570(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);

void func_0020C9E0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_0020C570(*(s32 *)D_00537AEC, arg0, arg1, arg2, arg3, arg4);
}
