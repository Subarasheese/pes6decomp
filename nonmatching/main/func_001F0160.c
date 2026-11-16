/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void *D_0052B220;

void *func_001F0160(s32 arg0) {
    void *node;
    s32 count;
    s32 i;
    u8 *p;

    for (node = D_0052B220; node != NULL; node = M2C_FIELD(node, void **, 0x10)) {
        count = M2C_FIELD(node, s32 *, 4);
        p = M2C_FIELD(node, u8 **, 8);
        for (i = 0; i < count; i++) {
            if (((arg0 >> 0x10) & 0xFFFF) == M2C_FIELD(M2C_FIELD(*(void **)p, void **, 4), u16 *, 4)) {
                return node;
            }
            p += 4;
        }
    }
    return NULL;
}
