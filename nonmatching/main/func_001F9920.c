/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void *func_00221210(u8 a);
extern s32 func_002243B0(u8 a, s32 b);
extern s8 func_00224420(u8 a, s32 b);
extern s32 func_00230410(u8 a);
extern s32 func_002623E0();
extern s32 func_002631D0();
extern s32 D_003E77B0;
extern char D_00591C09[];
extern char D_00592980[];

s32 func_001F9920(s32 arg0) {
    s32 v;
    s32 a1;
    s32 i;
    s32 s0;
    s16 k;
    char *p;
    u8 t;

    t = *(u8 *)D_00591C09;
    if (t == 5) {
        if (func_00230410(t) == 1) {
            a1 = arg0 & 0xFF;
            k = 0;
            s0 = a1 & 1;
            p = D_00592980 + a1 * 0x6900;
            do {
                *(s8 *)(p + 0x15) = func_00224420(*(u8 *)(s0 + D_003E77B0 + 0x2C), k & 0xFF);
                k = k + 1;
                p += 0x348;
            } while (k < 0x20);
            return 1;
        }
        v = func_002631D0();
        if (v == 6 || v == 5) {
            a1 = arg0 & 0xFF;
            p = D_00592980 + a1 * 0x6900;
            for (i = 0; (u32)i < 0x20; i++) {
                *(s8 *)(p + 0x15) = (a1 != 0) ? 4 : 0;
                p += 0x348;
            }
            return 1;
        }
        if (v == 2) {
            if (func_002623E0() == 0)
                return 0;
            k = 0;
            p = D_00592980 + (arg0 & 0xFF) * 0x6900;
            do {
                *(s8 *)(p + 0x15) = func_002623E0() - 1;
                k = k + 1;
                p += 0x348;
            } while (k < 0x20);
            return 1;
        }
        if (v == 4) {
            u32 j = 0;
            p = D_00592980 + (arg0 & 0xFF) * 0x6900;
            do {
                *(s8 *)(p + 0x15) = 2;
                j += 8;
                *(s8 *)(p + 0x35D) = 2;
                *(s8 *)(p + 0x6A5) = 2;
                *(s8 *)(p + 0x9ED) = 2;
                *(s8 *)(p + 0xD35) = 2;
                *(s8 *)(p + 0x107D) = 2;
                *(s8 *)(p + 0x13C5) = 2;
                *(s8 *)(p + 0x170D) = 2;
                p += 0x1A40;
            } while (j < 0x20);
            return 1;
        }
        return 0;
    }
    if (t == 14 || t == 4 || t == 2 || t == 1) {
        a1 = arg0 & 0xFF;
        k = 0;
        s0 = a1 & 1;
        p = D_00592980 + a1 * 0x6900;
        do {
            *(s8 *)(p + 0x15) = func_00224420(*(u8 *)(s0 + D_003E77B0 + 0x2C),
                func_002243B0(*(u8 *)(s0 + D_003E77B0 + 0x2C), k & 0xFF));
            k = k + 1;
            p += 0x348;
        } while (k < 0x20);
        return 1;
    }
    if (t == 7 || t == 8 || t == 0) {
        char *q = func_00221210(t);
        if ((arg0 & 0xFF) == 0)
            v = *(u8 *)(q + 3);
        else
            v = *(u8 *)(q + 4);
        v &= 0xFF;
        if (v == 0)
            return 0;
        {
            s16 c = v - 1;
            k = 0;
            p = D_00592980 + (arg0 & 0xFF) * 0x6900;
            do {
                *(s8 *)(p + 0x15) = c;
                *(s8 *)(p + 0x35D) = c;
                *(s8 *)(p + 0x6A5) = c;
                k = k + 8;
                *(s8 *)(p + 0x9ED) = c;
                *(s8 *)(p + 0xD35) = c;
                *(s8 *)(p + 0x107D) = c;
                *(s8 *)(p + 0x13C5) = c;
                *(s8 *)(p + 0x170D) = c;
                p += 0x1A40;
            } while (k < 0x20);
        }
        return 1;
    }
    return 0;
}
