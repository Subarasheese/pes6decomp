/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

void func_008D03C0(char *, s32, s32, s32, s32, s32, s32, s32);

/* forwards to func_008D03C0 with the object at +0x480 */
void func_008CB650(char *self, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    func_008D03C0(self + 0x480, a1, a2, a3, a4, a5, a6, a7);
}
