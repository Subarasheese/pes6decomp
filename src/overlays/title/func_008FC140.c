/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern char D_00902168[];
extern void func_00900500(void *, char *);
s32 func_008FC140(void *a, void *b, u32 off, u32 align) {
    u32 r = ((M2C_FIELD(b, u32 *, 8) + align - 1) / align) * align;
    u32 e = r + off;
    if (M2C_FIELD(b, u32 *, 0) + M2C_FIELD(b, u32 *, 4) >= e) {
        M2C_FIELD(b, u32 *, 8) = e;
        return r;
    }
    func_00900500(a, D_00902168);
    return 0;
}
