/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00CCAD70[];
extern char D_00CCADF4[];
extern char D_0058E5C2[];
extern char D_005926FE[];
extern char D_00CB35A8[];
extern char D_00CB35E8[];
extern char D_00591F24[];
extern char D_00CBBE00[];
extern char D_005922E8[];
extern char *D_003E7A08;
extern char *D_003E7574;
extern void func_00C18720(void);
extern s32 func_00C18EE0(void);
extern s32 func_00996180(void);
extern s32 func_00996160(void);
extern void func_001C48E8(void *a, s32 b, s32 c);
extern s32 func_00BFE400(void);
extern s32 func_00C01090(s32 a);
extern s32 func_00C00D60(void);
extern s32 func_00C00B00(void);
extern s32 func_00C15C50(s32 a, s32 b, void *c, void *d);
extern void func_00C13AB0(void *a, s32 b, void *c);
extern s32 func_00C15B00(void *a, void *b);
extern s32 func_00C158B0(s32 a, void *b, void *c);
extern s32 func_00C18EC0(void);
extern s32 func_00C15660(void *a);
extern s32 func_00C16080(void *a, s32 b, void *c);

void func_00C163B0(void)
{
    struct { u8 b60[0x20]; u8 b80[0x30]; f32 bB0[4]; } fr;
    char *base = D_00CCAD70;
    s32 s0, i, j, k, n, r, found, a1;
    u32 idx;
    u32 *src;
    u32 *dst;

    func_00C18720();
    s0 = func_00C18EE0();
    if (s0 != 0 && func_00996180() != 0) {
        u32 t = *(u8 *)(D_003E7A08 + 8);
        src = (u32 *)(D_003E7A08 + 4);
        if (t == 0xFF) idx = 1; else idx = t % 23;
        dst = (u32 *)(base + 4 + ((u32)*(u8 *)(D_0058E5C2 + idx * 576) << 6));
        for (i = 8; i > 0; i--) {
            u32 x = src[0];
            u32 y = src[1];
            dst[0] = x;
            src += 2;
            dst[1] = y;
            dst += 2;
        }
    } else if (func_00996160() != 0) {
        func_001C48E8(base + 4, 0, 0x80);
    }

    if (s0 == 0) {
        if (func_00C18EC0() != 0) {
            r = func_00C15660(fr.bB0);
            if (r != 0) func_00C13AB0(D_00CCADF4, r, fr.bB0);
            *(u8 *)base = 1;
        }
    }

    if (*(u8 *)base != 0 && func_00BFE400() != 0) {
        *(u8 *)base = 0;
        for (i = 0; i < 0x2E; i++) {
            fr.b80[i] = func_00C01090(i) != 0;
        }
        if (*(u8 *)D_005926FE == 4) {
            s0 = 0xFF;
            for (i = 0; i < 0x2E; i++) {
                for (j = 0; j < 5; j++) {
                    if (i == *(u8 *)(D_00CB35A8 + j)) {
                        found = 0;
                        for (k = 0; k < 8; k++) {
                            if (*(u8 *)(D_00CB35E8 + k) == i) { found = 1; break; }
                        }
                        if (found) s0 = func_00C00D60() & 0xFF;
                        else s0 = func_00C00B00() & 0xFF;
                        goto done1;
                    }
                }
            }
        done1: ;
        }
        if (*(u8 *)D_005926FE == 4) {
            a1 = 0xFF;
            for (i = 0; i < 0x2E; i++) {
                for (j = 0; j < 5; j++) {
                    if (i == *(u8 *)(D_00CB35A8 + j)) {
                        found = 0;
                        for (k = 0; k < 8; k++) {
                            if (*(u8 *)(D_00CB35E8 + k) == i) { found = 1; break; }
                        }
                        if (found) a1 = func_00C00B00() & 0xFF;
                        else a1 = func_00C00D60() & 0xFF;
                        goto done2;
                    }
                }
            }
        done2: ;
            r = func_00C15C50(s0, a1, fr.b80, fr.bB0);
            if (r != 0) func_00C13AB0(D_00CCADF4, r, fr.bB0);
        }
        n = func_00C15B00(fr.b80, fr.b60);
        for (i = 0; i < n; i++) {
            r = func_00C158B0(fr.b60[i], fr.b80, fr.bB0);
            if (r != 0) func_00C13AB0(D_00CCADF4, r, fr.bB0);
        }
        if (func_00C01090(0x29) != 0) {
            fr.bB0[0] = *(f32 *)(D_003E7574 + 0x10);
            fr.bB0[1] = *(f32 *)(D_003E7574 + 0x14);
            fr.bB0[2] = *(f32 *)(D_003E7574 + 0x18);
            func_00C13AB0(D_00CCADF4, 9, fr.bB0);
        }
        if (*(u8 *)D_005922E8 != 0) {
            fr.bB0[0] = *(f32 *)(D_003E7574 + 0x10);
            fr.bB0[1] = *(f32 *)(D_003E7574 + 0x14);
            fr.bB0[2] = *(f32 *)(D_003E7574 + 0x18);
            func_00C13AB0(D_00CCADF4, 10, fr.bB0);
        }
    }

    if (*(u8 *)D_00591F24 == 8) {
        u32 b = *(u8 *)D_00CBBE00;
        if (*(u8 *)(base + 1) != b) {
            *(u8 *)(base + 1) = b;
            if (b != 0xFF) {
                r = func_00C16080(D_003E7A08 + 4, b, fr.bB0);
                if (r != 0) func_00C13AB0(D_00CCADF4, r, fr.bB0);
            }
        }
    }
}
