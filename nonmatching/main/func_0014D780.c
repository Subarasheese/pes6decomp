/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void *func_00145440(void *p);
extern s32 func_00145490(void *p);
extern void func_001C4730(void *d, void *s, s32 n);
extern char D_00376A70[];

void *func_0014D780(void *arg0, u8 *arg1) {
    u8 *dst;
    s32 i;
    s32 x;
    u8 *src;
    u8 b0, b1, b2, b3;

    if (arg0 == 0 || arg1 == 0) {
        return 0;
    }
    if (func_00145440(arg0) == arg1) {
        return 0;
    }
    dst = func_00145440(arg0);
    i = func_00145490(arg0);
    if (i == 0x14) {
        func_001C4730(dst, arg1, 0x40);
        return arg1;
    }
    if (i != 0x13) {
        return 0;
    }
    for (i = 0; i < 0x100; i += 8) {
        x = (i + 0) & 0xFF;
        src = arg1 + (((x + ((s32 *)D_00376A70)[(x % 32) / 8]) & 0xFF) * 4);
        b0 = src[0];
        b1 = src[1];
        b2 = src[2];
        b3 = src[3];
        dst[0] = b0;
        dst[1] = b1;
        dst[2] = b2;
        dst[3] = b3;
        dst += 4;
        x = (i + 1) & 0xFF;
        src = arg1 + (((x + ((s32 *)D_00376A70)[(x % 32) / 8]) & 0xFF) * 4);
        b0 = src[0];
        b1 = src[1];
        b2 = src[2];
        b3 = src[3];
        dst[0] = b0;
        dst[1] = b1;
        dst[2] = b2;
        dst[3] = b3;
        dst += 4;
        x = (i + 2) & 0xFF;
        src = arg1 + (((x + ((s32 *)D_00376A70)[(x % 32) / 8]) & 0xFF) * 4);
        b0 = src[0];
        b1 = src[1];
        b2 = src[2];
        b3 = src[3];
        dst[0] = b0;
        dst[1] = b1;
        dst[2] = b2;
        dst[3] = b3;
        dst += 4;
        x = (i + 3) & 0xFF;
        src = arg1 + (((x + ((s32 *)D_00376A70)[(x % 32) / 8]) & 0xFF) * 4);
        b0 = src[0];
        b1 = src[1];
        b2 = src[2];
        b3 = src[3];
        dst[0] = b0;
        dst[1] = b1;
        dst[2] = b2;
        dst[3] = b3;
        dst += 4;
        x = (i + 4) & 0xFF;
        src = arg1 + (((x + ((s32 *)D_00376A70)[(x % 32) / 8]) & 0xFF) * 4);
        b0 = src[0];
        b1 = src[1];
        b2 = src[2];
        b3 = src[3];
        dst[0] = b0;
        dst[1] = b1;
        dst[2] = b2;
        dst[3] = b3;
        dst += 4;
        x = (i + 5) & 0xFF;
        src = arg1 + (((x + ((s32 *)D_00376A70)[(x % 32) / 8]) & 0xFF) * 4);
        b0 = src[0];
        b1 = src[1];
        b2 = src[2];
        b3 = src[3];
        dst[0] = b0;
        dst[1] = b1;
        dst[2] = b2;
        dst[3] = b3;
        dst += 4;
        x = (i + 6) & 0xFF;
        src = arg1 + (((x + ((s32 *)D_00376A70)[(x % 32) / 8]) & 0xFF) * 4);
        b0 = src[0];
        b1 = src[1];
        b2 = src[2];
        b3 = src[3];
        dst[0] = b0;
        dst[1] = b1;
        dst[2] = b2;
        dst[3] = b3;
        dst += 4;
        x = (i + 7) & 0xFF;
        src = arg1 + (((x + ((s32 *)D_00376A70)[(x % 32) / 8]) & 0xFF) * 4);
        b0 = src[0];
        b1 = src[1];
        b2 = src[2];
        b3 = src[3];
        dst[0] = b0;
        dst[1] = b1;
        dst[2] = b2;
        dst[3] = b3;
        dst += 4;
    }
    return arg1;
}
