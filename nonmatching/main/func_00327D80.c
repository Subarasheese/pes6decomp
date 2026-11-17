/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void func_001C48E8(void *p, s32 v, s32 n);
extern s32 func_002216F0(u16 id, s32 k);
extern char D_00592980[];

s32 func_00327D80(char *arg0) {
    s32 i, j, k;
    char *e;
    char *found = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 32; j++) {
            e = arg0 + i * 0x400 + j * 0x20 + 0xC8;
            func_001C48E8(e, 0, 0x20);
            *(u16 *)e = *(u16 *)(D_00592980 + i * 0x6900 + j * 0x348 + 0x46);
            if (*(u16 *)e != 0) {
                *(u8 *)(e + 0x10) = 0xFF;
                *(s32 *)(e + 0x18) = 1;
                *(u8 *)(e + 0x11) = 0xEE;
                *(s16 *)(e + 8) = 0xFF;
                *(s16 *)(e + 0xE) = 0xFF;
                *(s16 *)(e + 0xA) = 0xFF;
                *(s16 *)(e + 0xC) = 0;
                *(s16 *)(e + 6) = 0xFF;
            }
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 32; j++) {
            u16 id = *(u16 *)(D_00592980 + i * 0x6900 + j * 0x348 + 0x46);
            s32 ok = 0;
            for (k = 0; k < 32; k++) {
                u16 cur = *(u16 *)(arg0 + i * 0x400 + k * 0x20 + 0xC8);
                if (cur == id && id != 0) {
                    ok = 1;
                    found = arg0 + i * 0x400 + k * 0x20 + 0xC8;
                    break;
                }
            }
            if (ok) {
                *(s32 *)(found + 0x1C) &= 0xFF7FFFFF;
                if (func_002216F0(*(u16 *)found, 2) != 0) {
                    *(s32 *)(found + 0x1C) |= 0x800000;
                }
            }
        }
    }
    return 1;
}
