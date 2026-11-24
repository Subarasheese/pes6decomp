/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

void func_008D1CC0(char *, s32, s32, s32);

/* forwards to func_008D1CC0 with the object at +0x480 */
void func_008CAA00(char *self, s32 a1, s32 a2, s32 a3) {
    func_008D1CC0(self + 0x480, a1, a2, a3);
}
