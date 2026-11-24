/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

void func_008E8EC0(char *, s32);

/* forwards to func_008E8EC0 with the object at +0x4 */
void func_008E8180(char *self, s32 a1) {
    func_008E8EC0(self + 0x4, a1);
}
