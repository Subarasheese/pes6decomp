/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void func_002871C0(void *);
extern void func_00270530(void *, f32 *);
extern char D_0058E5B0[];
extern char D_00592380[];
extern char D_00591E00[];
void func_0099FE40(void) {
    f32 v[3];
    s32 i;
    s32 off = 0;
    char *src = D_0058E5B0;
    func_002871C0(D_00592380);
    for (i = 0; i < 0x17; i++) {
        f32 *dst = (f32 *)(D_00591E00 + (off + 0xC) + 0x580);
        func_00270530(src, v);
        off += 0xC;
        src += 0x240;
        dst[0] = v[0];
        dst[1] = v[1];
        dst[2] = v[2];
    }
}
