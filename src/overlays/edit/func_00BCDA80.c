/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00BC57E0(s32, s32, s32);
extern s32 func_00BC5DF0(s32, s32, s32);

void func_00BCDA80(s32 arg0, s32 arg1) {
    func_00BC57E0(func_00BC5DF0(arg0, arg1, 0) & 0xFFFF, arg0, 1);
}
