/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *Pes6Texture_GetClut(s32);
u8 *Pes6Texture_GetPixels(s32);
s32 func_001454A0(s32);
s32 func_001454B0();
s32 func_00151600(M2C_UNK, s32, M2C_UNK, s32, s32, M2C_UNK, M2C_UNK);

s32 func_0014C650(s32 arg0, s32 arg1) {
    u8 sp[4];
    s32 w, h, ret, half, y, x;
    u8 *src, *clut, *dst, *c;

    w = func_001454B0();
    h = func_001454A0(arg0);
    src = Pes6Texture_GetPixels(arg0);
    clut = Pes6Texture_GetClut(arg0);
    ret = func_00151600(0, arg1, 3, w, h, 0, 1);
    dst = Pes6Texture_GetPixels(ret);
    for (y = 0; y < h; y++) {
        half = w / 2;
        for (x = 0; x < half; x++) {
            c = clut + (*src & 0xF) * 4;
            sp[0] = c[0]; sp[1] = c[1]; sp[2] = c[2]; sp[3] = c[3];
            *(u8 *)dst = (*(u8 *)dst & ~0x1F) | ((sp[0] >> 3) & 0x1F);
            *(u16 *)dst = (*(u16 *)dst & ~0x3E0) | (((sp[1] >> 3) & 0x1F) << 5);
            dst[1] = (dst[1] & ~0x7C) | (((sp[2] >> 3) & 0x1F) << 2);
            dst[1] = (dst[1] & ~0x80) | ((sp[3] != 0) << 7);
            c = clut + ((*src++ >> 4) & 0xF) * 4;
            sp[0] = c[0]; sp[1] = c[1]; sp[2] = c[2]; sp[3] = c[3];
            dst[2] = (dst[2] & ~0x1F) | ((sp[0] >> 3) & 0x1F);
            *(u16 *)(dst + 2) = (*(u16 *)(dst + 2) & ~0x3E0) | (((sp[1] >> 3) & 0x1F) << 5);
            dst[3] = (dst[3] & ~0x7C) | (((sp[2] >> 3) & 0x1F) << 2);
            dst[3] = (dst[3] & ~0x80) | ((sp[3] != 0) << 7);
            dst += 4;
        }
    }
    return ret;
}
