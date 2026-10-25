/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

void *func_0012D710(s32, s32, s32);
void func_001C48E8(void *, s32, s32);

void *func_001299B0(s32 count, s32 size) {
    s32 total = count * size;
    void *ptr = func_0012D710(1, 0x80, total);

    if (ptr != NULL) {
        func_001C48E8(ptr, 0, total);
    }
    return ptr;
}
