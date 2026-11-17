/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern char D_00592980[];
extern char D_00C9A710[];
extern char D_0058E5B0[];

void func_00B7F710(void) {
    u8 i;
    u8 mode;
    u8 slot;
    u8 *e;
    u8 *d;
    u8 *p;
    s32 k;
    u8 *q;
    u8 *ent;
    mode = 3;



    for (i = 0; i < 0x17; i++) {
        u8 id;
        e = (u8 *)D_0058E5B0 + i * 576;
        if (i != 0) {
            if (*(u8 *)(D_00592980 + e[0x12] * 26880 + e[0x11] * 840 + 0xD4) == 0) {
                return;
            }
        }
        id = e[0];
        if (((1 << id) & *(s32 *)(D_00C9A710 + 4)) == 0) {
            mode = 2;
        } else if (id == 0) {
            mode = 0;
        } else {
            p = (u8 *)D_00C9A710;
            for (k = 0; k < 2; k++) {
                if (id == p[0x13]) {
                    mode = 1;
                    slot = k * 2;
                    break;
                }
                if (id == p[0x18]) {
                    mode = 1;
                    slot = k * 2 + 1;
                    break;
                }
                p += 8;
            }
        }
        if (mode == 2) {
            u8 *o = *(u8 **)(e + 4);
            u8 *r = (u8 *)D_00C9A710 + i * 8;
            *(u16 *)(r + 0x154) = *(u16 *)(o + 0x30);
            *(f32 *)(r + 0x158) = (f32)(s32)(*(u8 *)(*(char **)o + 0x201));
        } else if (mode == 1) {
            u8 *o;
            ent = (u8 *)D_00C9A710 + slot * 56;
            ent[0x74] = e[0x16];
            *(u16 *)(ent + 0x76) = *(u16 *)(e + 0x18);
            ent[0x84] = e[0x4E];
            ent[0x85] = e[0x4F];
            ent[0x86] = e[0x50];
            *(s32 *)(ent + 0x78) = *(s32 *)(e + 0x1C);
            *(s32 *)(ent + 0x7C) = *(s32 *)(e + 0x20);
            *(u16 *)(ent + 0x80) = *(u16 *)(e + 0x26);
            *(u16 *)(ent + 0x82) = *(u16 *)(e + 0x28);
            *(f32 *)(ent + 0x88) = *(f32 *)(e + 0xE0);
            o = *(u8 **)(e + 4);
            *(f32 *)(ent + 0x8C) = *(f32 *)(e + 0xE4);
            *(f32 *)(ent + 0x90) = *(f32 *)(e + 0xE8);
            *(f32 *)(ent + 0x94) = *(f32 *)(e + 0xF0);
            *(f32 *)(ent + 0x98) = *(f32 *)(e + 0xF4);
            *(f32 *)(ent + 0x9C) = *(f32 *)(e + 0xF8);
            *(u16 *)(ent + 0xA0) = *(u16 *)(o + 0x30);
            *(f32 *)(ent + 0xA4) = *(f32 *)(o + 0x38);
            ent[0xA8] = o[0x2D];
            ent[0xA9] = e[0x66];
        } else if (mode == 0) {
            u8 *o = *(u8 **)(e + 4);
            u8 *b = (u8 *)D_00C9A710;
            b[0x3C] = e[0x16];
            *(u16 *)(b + 0x3E) = *(u16 *)(e + 0x18);
            *(s32 *)(b + 0x40) = *(s32 *)(e + 0x1C);
            *(s32 *)(b + 0x44) = *(s32 *)(e + 0x20);
            *(u16 *)(b + 0x48) = *(u16 *)(e + 0x26);
            *(u16 *)(b + 0x4A) = *(u16 *)(e + 0x28);
            b[0x4C] = e[0x4E];
            b[0x4D] = e[0x4F];
            b[0x4E] = e[0x50];
            *(f32 *)(b + 0x50) = *(f32 *)(e + 0xE0);
            *(f32 *)(b + 0x54) = *(f32 *)(e + 0xE4);
            *(f32 *)(b + 0x58) = *(f32 *)(e + 0xE8);
            *(f32 *)(b + 0x5C) = *(f32 *)(e + 0xF0);
            *(f32 *)(b + 0x60) = *(f32 *)(e + 0xF4);
            *(f32 *)(b + 0x64) = *(f32 *)(e + 0xF8);
            *(u16 *)(b + 0x68) = *(u16 *)(o + 0x30);
            *(f32 *)(b + 0x6C) = *(f32 *)(o + 0x38);
            b[0x70] = o[0x2D];
            b[0x71] = e[0x66];
        }
    }
}
