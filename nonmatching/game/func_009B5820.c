/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

typedef union { u8 b; u16 h; s16 sh; u32 w; s32 sw; f32 f; u8 *p; } U;
extern void func_00BC8CB0(u32);
extern void func_009A3340();
extern void func_00BC6930(s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 *D_003E758C;
extern char D_00591C09[];
extern char D_005A3030[];
extern char D_005A3032[];
extern char D_00CBAA00[];

void func_009B5820(void) {
    s32 a4;
    s32 a6;
    s32 a5;
    s32 v0;
    u8 *P;
    s32 a7;

    if ((*(u8 *)D_00591C09) != 0xA) {
        a6 = 0;
        a4 = 0;
        do {
            a5 = 0;
            v0 = 0;
            ((U *)(D_003E758C + a4 + 0x348))->sh = 0x7FFF;
            ((U *)(D_003E758C + a4 + 0x350))->sh = 0;
            ((U *)(D_003E758C + a4 + 0x352))->sh = 0;
            do {
                a5 += 7;
                P = D_003E758C + a4 + v0;
                ((U *)(P + 0x14))->h = (((U *)(P + 0x14))->h & 0xF800) | 0x112;
                ((U *)(D_003E758C + a4 + v0 + 0x1c))->sw = 0;
                P = D_003E758C + a4 + v0;
                ((U *)(P + 0x14))->w = (((U *)(P + 0x14))->w & 0xFF001FFF) | 0x224000;
                ((U *)(D_003E758C + a4 + v0 + 0x20))->sw = 0;
                P = D_003E758C + a4 + v0;
                ((U *)(P + 0x38))->h = (((U *)(P + 0x38))->h & 0xF800) | 0x112;
                ((U *)(D_003E758C + a4 + v0 + 0x40))->sw = 0;
                P = D_003E758C + a4 + v0;
                ((U *)(P + 0x38))->w = (((U *)(P + 0x38))->w & 0xFF001FFF) | 0x224000;
                ((U *)(D_003E758C + a4 + v0 + 0x44))->sw = 0;
                P = D_003E758C + a4 + v0;
                ((U *)(P + 0x5c))->h = (((U *)(P + 0x5c))->h & 0xF800) | 0x112;
                ((U *)(D_003E758C + a4 + v0 + 0x64))->sw = 0;
                P = D_003E758C + a4 + v0;
                ((U *)(P + 0x5c))->w = (((U *)(P + 0x5c))->w & 0xFF001FFF) | 0x224000;
                ((U *)(D_003E758C + a4 + v0 + 0x68))->sw = 0;
                P = D_003E758C + a4 + v0;
                ((U *)(P + 0x80))->h = (((U *)(P + 0x80))->h & 0xF800) | 0x112;
                ((U *)(D_003E758C + a4 + v0 + 0x88))->sw = 0;
                P = D_003E758C + a4 + v0;
                ((U *)(P + 0x80))->w = (((U *)(P + 0x80))->w & 0xFF001FFF) | 0x224000;
                ((U *)(D_003E758C + a4 + v0 + 0x8c))->sw = 0;
                P = D_003E758C + a4 + v0;
                ((U *)(P + 0xa4))->h = (((U *)(P + 0xa4))->h & 0xF800) | 0x112;
                ((U *)(D_003E758C + a4 + v0 + 0xac))->sw = 0;
                P = D_003E758C + a4 + v0;
                ((U *)(P + 0xa4))->w = (((U *)(P + 0xa4))->w & 0xFF001FFF) | 0x224000;
                ((U *)(D_003E758C + a4 + v0 + 0xb0))->sw = 0;
                P = D_003E758C + a4 + v0;
                ((U *)(P + 0xc8))->h = (((U *)(P + 0xc8))->h & 0xF800) | 0x112;
                ((U *)(D_003E758C + a4 + v0 + 0xd0))->sw = 0;
                P = D_003E758C + a4 + v0;
                ((U *)(P + 0xc8))->w = (((U *)(P + 0xc8))->w & 0xFF001FFF) | 0x224000;
                ((U *)(D_003E758C + a4 + v0 + 0xd4))->sw = 0;
                P = D_003E758C + a4 + v0;
                ((U *)(P + 0xec))->h = (((U *)(P + 0xec))->h & 0xF800) | 0x112;
                ((U *)(D_003E758C + a4 + v0 + 0xf4))->sw = 0;
                P = D_003E758C + a4 + v0;
                ((U *)(P + 0xec))->w = (((U *)(P + 0xec))->w & 0xFF001FFF) | 0x224000;
                ((U *)(D_003E758C + a4 + v0 + 0xf8))->sw = 0;
                v0 += 0xFC;
            } while (a5 < 0x10);
            v0 = a5 * 0x24;
            a6 += 1;
            P = D_003E758C + a4 + v0;
            ((U *)(P + 0x14))->h = (((U *)(P + 0x14))->h & 0xF800) | 0x112;
            ((U *)(D_003E758C + a4 + v0 + 0x1c))->f = 0.0f;
            P = D_003E758C + a4 + v0;
            ((U *)(P + 0x14))->w = (((U *)(P + 0x14))->w & 0xFF001FFF) | 0x224000;
            ((U *)(D_003E758C + a4 + v0 + 0x20))->f = 0.0f;
            P = D_003E758C + a4 + v0;
            ((U *)(P + 0x38))->h = (((U *)(P + 0x38))->h & 0xF800) | 0x112;
            ((U *)(D_003E758C + a4 + v0 + 0x40))->f = 0.0f;
            P = D_003E758C + a4 + v0;
            ((U *)(P + 0x38))->w = (((U *)(P + 0x38))->w & 0xFF001FFF) | 0x224000;
            ((U *)(D_003E758C + a4 + v0 + 0x44))->f = 0.0f;
            a4 += 0x354;
        } while (a6 < 0x12C);
        (*(s16 *)D_005A3030) = 0;
        (*(s8 *)D_005A3032) = 0;
        (*(s16 *)D_00CBAA00) = 0;
        func_00BC6930(0x224000, -0x800, 0x112, 0x7FFF, a4, a6 < 0x12C, a6, D_003E758C + a4 - 0x354);
        func_00BC8CB0(0x7FFFFFFFU);
        func_009A3340();
    }
}
