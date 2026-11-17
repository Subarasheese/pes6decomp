/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

void *Pes6Texture_GetClut(s32);
u8 *Pes6Texture_GetPixels(s32);
s32 func_001454A0(s32);
s32 func_001454B0();
s32 func_00151600(M2C_UNK, s32, M2C_UNK, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK Pes6Heap_Free(s32, s32, s32);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);

s32 func_0014C0A0(s32 arg0, s32 arg1) {
    s32 w, h, img, i, j, k, n;
    u8 *src, *dst, *pal, *q;

    w = func_001454B0();
    h = func_001454A0(arg0);
    src = Pes6Texture_GetPixels(arg0);
    img = func_00151600(0, arg1, 1, w, h, 0, 1);
    dst = Pes6Texture_GetPixels(img);
    pal = Pes6Texture_GetClut(img);
    func_001C48E8(pal, 0, 0x40);
    n = 0;
    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            k = 0;
            q = pal;
            while (k < n) {
                if (src[0] == q[0] && src[1] == q[1] && src[2] == q[2] && src[3] == q[3]) break;
                k++;
                q += 4;
            }
            if (k == n) {
                if (n == 0x10) {
                    Pes6Heap_Free(img, i, j);
                    return 0;
                }
                { u8 c0 = src[0], c1 = src[1], c2 = src[2], c3 = src[3]; u8 *d = q; d[0] = c0; d[1] = c1; d[2] = c2; d[3] = c3; }
                n++;
            }
            if (j & 1) {
                *dst |= (k << 4) & 0xFF;
                dst++;
            } else {
                *dst = k;
            }
            src += 4;
        }
    }
    return img;
}
