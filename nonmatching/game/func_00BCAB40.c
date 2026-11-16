/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char *D_003E758C;
extern char D_00CBAA02[];

s32 func_00BCAB40(void) {
    s32 i;
    s32 found;
    u32 t;
    char *p;

    if (((*(u16 *)D_00CBAA02) - 0xA) < 0x46) {
        return 0x12C;
    }
    found = 0;
    p = D_003E758C + 0x2148;
    for (i = 0xA; i < 0x47; i++) {
        t = M2C_FIELD(p, u8 *, 0x34E);
        if (found == 0) {
            if (t != 1 && t != 2 && t != 3 && t != 8) {
                found = 1;
            }
        } else if (t == 1 || t == 2 || t == 3 || t == 8) {
            return i & 0xFFFF;
        }
        p += 0x354;
    }
    return 0x12C;
}
