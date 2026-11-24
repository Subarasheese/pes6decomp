/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

void func_008D78B0(char *, s32, s32, s32);

/* forwards to func_008D78B0 with the object at +0x13C */
void func_008E0530(char *self, s32 a1, s32 a2, s32 a3) {
    func_008D78B0(self + 0x13C, a1, a2, a3);
}
