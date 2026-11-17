/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 Pes6Texture_GetClut(s32);                             /* extern */
u8 *Pes6Texture_GetPixels(s32);                             /* extern */
s32 func_001454A0(s32);                             /* extern */
s32 func_001454B0();                                /* extern */
s32 func_00151600(M2C_UNK, s32, M2C_UNK, s32, s32, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_00376A70[];

s32 func_0014CFD0(s32 arg0, s32 arg1) {
    s32 w;
    s32 h;
    s32 clut;
    s32 res;
    s32 y;
    s32 x;
    u8 *src;
    u8 *dst;
    u8 *e;
    u8 p;
    u8 b0;
    u8 b1;
    u8 b2;
    u8 b3;

    w = func_001454B0();
    h = func_001454A0(arg0);
    src = Pes6Texture_GetPixels(arg0);
    clut = Pes6Texture_GetClut(arg0);
    res = func_00151600(0, arg1, 4, w, h, 0, 1);
    dst = Pes6Texture_GetPixels(res);
    for (y = 0; y < h; y++) {
        x = 0;
        if (w > 0) {
            if (w >= 9) {
                do {
                    p = src[0];
                    e = (u8 *) (clut + (((p + D_00376A70[(p & 0x1F) >> 3]) & 0xFF) * 4));
                    b0 = e[0];
                    b1 = e[1];
                    b2 = e[2];
                    b3 = e[3];
                    dst[0] = b0;
                    dst[1] = b1;
                    dst[2] = b2;
                    dst[3] = b3;
                    p = src[1];
                    e = (u8 *) (clut + (((p + D_00376A70[(p & 0x1F) >> 3]) & 0xFF) * 4));
                    b0 = e[0];
                    b1 = e[1];
                    b2 = e[2];
                    b3 = e[3];
                    dst[4] = b0;
                    dst[5] = b1;
                    dst[6] = b2;
                    dst[7] = b3;
                    p = src[2];
                    e = (u8 *) (clut + (((p + D_00376A70[(p & 0x1F) >> 3]) & 0xFF) * 4));
                    b0 = e[0];
                    b1 = e[1];
                    b2 = e[2];
                    b3 = e[3];
                    dst[8] = b0;
                    dst[9] = b1;
                    dst[10] = b2;
                    dst[11] = b3;
                    p = src[3];
                    e = (u8 *) (clut + (((p + D_00376A70[(p & 0x1F) >> 3]) & 0xFF) * 4));
                    b0 = e[0];
                    b1 = e[1];
                    b2 = e[2];
                    b3 = e[3];
                    dst[12] = b0;
                    dst[13] = b1;
                    dst[14] = b2;
                    dst[15] = b3;
                    p = src[4];
                    e = (u8 *) (clut + (((p + D_00376A70[(p & 0x1F) >> 3]) & 0xFF) * 4));
                    b0 = e[0];
                    b1 = e[1];
                    b2 = e[2];
                    b3 = e[3];
                    dst[16] = b0;
                    dst[17] = b1;
                    dst[18] = b2;
                    dst[19] = b3;
                    p = src[5];
                    e = (u8 *) (clut + (((p + D_00376A70[(p & 0x1F) >> 3]) & 0xFF) * 4));
                    b0 = e[0];
                    b1 = e[1];
                    b2 = e[2];
                    b3 = e[3];
                    dst[20] = b0;
                    dst[21] = b1;
                    dst[22] = b2;
                    dst[23] = b3;
                    p = src[6];
                    e = (u8 *) (clut + (((p + D_00376A70[(p & 0x1F) >> 3]) & 0xFF) * 4));
                    b0 = e[0];
                    b1 = e[1];
                    b2 = e[2];
                    b3 = e[3];
                    dst[24] = b0;
                    dst[25] = b1;
                    dst[26] = b2;
                    dst[27] = b3;
                    p = src[7];
                    e = (u8 *) (clut + (((p + D_00376A70[(p & 0x1F) >> 3]) & 0xFF) * 4));
                    b0 = e[0];
                    b1 = e[1];
                    b2 = e[2];
                    b3 = e[3];
                    dst[28] = b0;
                    dst[29] = b1;
                    dst[30] = b2;
                    dst[31] = b3;

                    src += 8;
                    dst += 32;
                    x += 8;
                } while (x < w - 8);
            }
            if (x < w) {
                do {
                    p = *src++;
                    e = (u8 *) (clut + (((p + D_00376A70[(p & 0x1F) >> 3]) & 0xFF) * 4));
                    b0 = e[0];
                    b1 = e[1];
                    b2 = e[2];
                    b3 = e[3];
                    dst[0] = b0;
                    dst[1] = b1;
                    dst[2] = b2;
                    dst[3] = b3;
                    dst += 4;
                    x++;
                } while (x < w);
            }
        }
    }
    return res;
}
