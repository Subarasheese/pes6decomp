/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_009A1D50(s32, s32);                        /* extern */
extern char D_00591A90[];
extern char D_00591E00[];

void func_009A1580(void) {
    s32 i;
    s32 s5;
    s32 k;
    s32 j;
    char *fp;
    char *row;

    for (i = 0; i < 2; i++) {
        fp = D_00591E00 + i;
        s5 = *(u8 *)(fp + 0xF8);
        if (s5 < s5 + *(u8 *)(fp + 0xF6)) {
            row = D_00591A90 + ((u8) i * 0x8B);
            do {
                if (func_009A1D50(i, s5) != 0) {
                    s5 += 1;
                } else {
                    k = s5;
                    if (k < 6) {
                        if (6 - k >= 9) {
                            s8 *p = (s8 *)(row + k * 8);
                            do {
                                s8 *src;
                                s8 *dst;
                                src = p + 0x5A;
                                dst = p + 0x52;
                                for (j = 4; j > 0; j--) {
                                    s8 b0 = src[0];
                                    s8 b1 = src[1];
                                    src += 2;
                                    dst[0] = b0;
                                    dst[1] = b1;
                                    dst += 2;
                                }
                                src = p + 0x62;
                                dst = p + 0x5A;
                                for (j = 4; j > 0; j--) {
                                    s8 b0 = src[0];
                                    s8 b1 = src[1];
                                    src += 2;
                                    dst[0] = b0;
                                    dst[1] = b1;
                                    dst += 2;
                                }
                                src = p + 0x6A;
                                dst = p + 0x62;
                                for (j = 4; j > 0; j--) {
                                    s8 b0 = src[0];
                                    s8 b1 = src[1];
                                    src += 2;
                                    dst[0] = b0;
                                    dst[1] = b1;
                                    dst += 2;
                                }
                                src = p + 0x72;
                                dst = p + 0x6A;
                                for (j = 4; j > 0; j--) {
                                    s8 b0 = src[0];
                                    s8 b1 = src[1];
                                    src += 2;
                                    dst[0] = b0;
                                    dst[1] = b1;
                                    dst += 2;
                                }
                                src = p + 0x7A;
                                dst = p + 0x72;
                                for (j = 4; j > 0; j--) {
                                    s8 b0 = src[0];
                                    s8 b1 = src[1];
                                    src += 2;
                                    dst[0] = b0;
                                    dst[1] = b1;
                                    dst += 2;
                                }
                                src = p + 0x82;
                                dst = p + 0x7A;
                                for (j = 4; j > 0; j--) {
                                    s8 b0 = src[0];
                                    s8 b1 = src[1];
                                    src += 2;
                                    dst[0] = b0;
                                    dst[1] = b1;
                                    dst += 2;
                                }
                                src = p + 0x8A;
                                dst = p + 0x82;
                                for (j = 4; j > 0; j--) {
                                    s8 b0 = src[0];
                                    s8 b1 = src[1];
                                    src += 2;
                                    dst[0] = b0;
                                    dst[1] = b1;
                                    dst += 2;
                                }
                                src = p + 0x92;
                                dst = p + 0x8A;
                                for (j = 4; j > 0; j--) {
                                    s8 b0 = src[0];
                                    s8 b1 = src[1];
                                    src += 2;
                                    dst[0] = b0;
                                    dst[1] = b1;
                                    dst += 2;
                                }
                                k += 8;
                                p += 0x40;
                            } while (k < -2);
                        }
                        for (; k < 6; k++) {
                            s8 *src = (s8 *)(row + 0x5A + k * 8);
                            s8 *dst = (s8 *)(row + 0x52 + k * 8);
                            for (j = 4; j > 0; j--) {
                                s8 b0 = src[0];
                                s8 b1 = src[1];
                                src += 2;
                                dst[0] = b0;
                                dst[1] = b1;
                                dst += 2;
                            }
                        }
                    }
                    *(u8 *)(row + 0x82) = 0xFF;
                    *(u8 *)(row + 0x83) = 0xFF;
                    *(u8 *)(row + 0x84) = 0xFF;
                    *(u8 *)(row + 0x85) = 0xFF;
                    *(u8 *)(row + 0x86) = 0;
                    *(u8 *)(fp + 0xF6) = *(u8 *)(fp + 0xF6) - 1;
                }
            } while (s5 < *(u8 *)(fp + 0xF8) + *(u8 *)(fp + 0xF6));
        }
    }
}
