/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

char *Pes6Texture_GetClut(s32);
u8 *Pes6Texture_GetPixels(s32);
s32 func_001454A0(s32);
s32 func_001454B0(s32);
s32 func_00151600(M2C_UNK, s32, M2C_UNK, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK func_001C48E8(char *, M2C_UNK, M2C_UNK);
extern char D_00376A70[];

s32 func_0014B5A0(s32 arg0, s32 arg1) {
    s32 w;
    s32 h;
    u8 *src;
    u8 *p;
    u8 *dst;
    char *clut;
    char *nclut;
    char *e;
    s32 r;
    s32 i;
    s32 j;
    s32 v;
    s32 n;
    u8 a;
    u8 b;
    u8 c;
    u8 d;

    w = func_001454B0(arg0);
    h = func_001454A0(arg0);
    src = Pes6Texture_GetPixels(arg0);
    clut = Pes6Texture_GetClut(arg0);
    p = src;
    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            n = *p;
            p++;
            if (n >= 0x10) {
                return 0;
            }
        }
    }
    r = func_00151600(0, arg1, 1, w, h, 0, 1);
    dst = Pes6Texture_GetPixels(r);
    nclut = Pes6Texture_GetClut(r);
    func_001C48E8(nclut, 0, 0x40);
    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            if (j & 1) {
                *dst |= (*src * 0x10) & 0xFF;
                dst++;
            } else {
                *dst = *src;
            }
            src++;
        }
    }
    v = 0;
    do {
        n = (v + 0) & 0xFF;
        e = clut + (((n + *(s32 *)(D_00376A70 + (((n & 0x1F) >> 3) * 4))) & 0xFF) * 4);
        a = e[0];
        b = e[1];
        c = e[2];
        d = e[3];
        nclut[0] = a;
        nclut[1] = b;
        nclut[2] = c;
        nclut[3] = d;
        n = (v + 1) & 0xFF;
        e = clut + (((n + *(s32 *)(D_00376A70 + (((n & 0x1F) >> 3) * 4))) & 0xFF) * 4);
        a = e[0];
        b = e[1];
        c = e[2];
        d = e[3];
        nclut[4] = a;
        nclut[5] = b;
        nclut[6] = c;
        nclut[7] = d;
        n = (v + 2) & 0xFF;
        e = clut + (((n + *(s32 *)(D_00376A70 + (((n & 0x1F) >> 3) * 4))) & 0xFF) * 4);
        a = e[0];
        b = e[1];
        c = e[2];
        d = e[3];
        nclut[8] = a;
        nclut[9] = b;
        nclut[10] = c;
        nclut[11] = d;
        n = (v + 3) & 0xFF;
        e = clut + (((n + *(s32 *)(D_00376A70 + (((n & 0x1F) >> 3) * 4))) & 0xFF) * 4);
        a = e[0];
        b = e[1];
        c = e[2];
        d = e[3];
        nclut[12] = a;
        nclut[13] = b;
        nclut[14] = c;
        nclut[15] = d;
        n = (v + 4) & 0xFF;
        e = clut + (((n + *(s32 *)(D_00376A70 + (((n & 0x1F) >> 3) * 4))) & 0xFF) * 4);
        a = e[0];
        b = e[1];
        c = e[2];
        d = e[3];
        nclut[16] = a;
        nclut[17] = b;
        nclut[18] = c;
        nclut[19] = d;
        n = (v + 5) & 0xFF;
        e = clut + (((n + *(s32 *)(D_00376A70 + (((n & 0x1F) >> 3) * 4))) & 0xFF) * 4);
        a = e[0];
        b = e[1];
        c = e[2];
        d = e[3];
        nclut[20] = a;
        nclut[21] = b;
        nclut[22] = c;
        nclut[23] = d;
        n = (v + 6) & 0xFF;
        e = clut + (((n + *(s32 *)(D_00376A70 + (((n & 0x1F) >> 3) * 4))) & 0xFF) * 4);
        a = e[0];
        b = e[1];
        c = e[2];
        d = e[3];
        nclut[24] = a;
        nclut[25] = b;
        nclut[26] = c;
        nclut[27] = d;
        n = (v + 7) & 0xFF;
        e = clut + (((n + *(s32 *)(D_00376A70 + (((n & 0x1F) >> 3) * 4))) & 0xFF) * 4);
        a = e[0];
        b = e[1];
        c = e[2];
        d = e[3];
        nclut[28] = a;
        nclut[29] = b;
        nclut[30] = c;
        nclut[31] = d;
        nclut += 0x20;
        v += 8;
    } while (v < 0x10);
    return r;
}
