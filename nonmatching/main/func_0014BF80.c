/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_001454A0(void *);
extern u8 *func_00145460(void *);
extern s32 func_001454B0(void *);
extern void *func_00151600(s32, s32, s32, s32, s32, s32, s32);

void *func_0014BF80(void *arg0, s32 arg1) {
    s32 w;
    s32 h;
    s32 x;
    s32 y;
    u8 *src;
    u8 *dst;
    void *tex;

    w = func_001454B0(arg0);
    h = func_001454A0(arg0);
    src = func_00145460(arg0);
    tex = func_00151600(0, arg1, 4, w, h, 0, 1);
    dst = func_00145460(tex);
    for (y = 0; y < h; y++) {
        for (x = 0; x < w; x++) {
            dst[0] = (src[0] & 0x1F) * 8;
            dst[1] = ((*(u16 *)src >> 5) & 0x1F) * 8;
            dst[2] = ((src[1] >> 2) & 0x1F) * 8;
            dst[3] = ((src[1] >> 7) & 1) ? 0x80 : 0;
            src += 2;
            dst += 4;
        }
    }
    return tex;
}
