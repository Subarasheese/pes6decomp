/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

void func_008D4A70(char *, s32, s32, s32);

/* forwards to func_008D4A70 with the object at +0x4 */
void func_008E2A00(char *self, s32 a1, s32 a2, s32 a3) {
    func_008D4A70(self + 0x4, a1, a2, a3);
}
