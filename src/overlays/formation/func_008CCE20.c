/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_008CB190(s32, s32);
extern void func_008D0430(void *, s32);

void func_008CCE20(int arg0, int arg1) {
    func_008CB190(arg0, arg1);
    func_008D0430((void *)(arg0 + 0x480), (u32) * (u8 *)(arg0 + 3));
}
