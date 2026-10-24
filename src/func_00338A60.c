/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001C4730(void *, void *, s32);

s32 func_00338A60(void *dst, void *src) {
    if (dst == NULL || src == NULL) {
        return 0;
    }
    func_001C4730((u8 *)dst + 0x3C, (u8 *)src + 0x3C, 0x20);
    return 1;
}
