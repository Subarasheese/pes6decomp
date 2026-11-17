/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_001454A0(void *);
extern s32 func_001454B0(void *);
extern u8 *Pes6Texture_GetPixels(void *);
extern void *func_00151600(s32, s32, s32, s32, s32, s32, s32);

void *func_0014C500(void *arg0, s32 arg1) {
    s32 w;
    s32 h;
    u8 *src;
    u8 *dst;
    void *res;
    s32 y;
    s32 x;

    w = func_001454B0(arg0);
    h = func_001454A0(arg0);
    src = Pes6Texture_GetPixels(arg0);
    res = func_00151600(0, arg1, 3, w, h, 0, 1);
    dst = Pes6Texture_GetPixels(res);
    for (y = 0; y < h; y++) {
        for (x = 0; x < w; x++) {
            *(u8 *)dst = (*(u8 *)dst & ~0x1F) | ((src[0] >> 3) & 0x1F);
            *(u16 *)dst = (*(u16 *)dst & ~0x3E0) | (((src[1] >> 3) & 0x1F) << 5);
            dst[1] = (dst[1] & ~0x7C) | (((src[2] >> 3) & 0x1F) << 2);
            dst[1] = (dst[1] & ~0x80) | ((src[3] != 0) << 7);
            src += 4;
            dst += 2;
        }
    }
    return res;
}
