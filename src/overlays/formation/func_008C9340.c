/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

void func_008D21F0(char *, s32);

/* forwards to func_008D21F0 with the object at +0x35C */
void func_008C9340(char *self, s32 a1) {
    func_008D21F0(self + 0x35C, a1);
}
