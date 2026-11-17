/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00C9A91D[];
extern char D_0058E7F0[];
extern char D_00592980[];
extern char D_00C9A710[];
extern char D_00591A90[];
extern char D_0058E5B0[];
extern char D_00C9A720[];
extern char D_00C9A721[];
extern char D_00591A96[];
extern char D_00591B21[];

void func_001AAF40(s32, s32);
void func_00BF93A0(s32);
s32 func_00BF9A40(void);
void func_001A5A20(s32, s32, void *);
void func_00287590(void *, s32);
void func_0026EEA0(void *);
void func_001ABA60(s32);
void func_002CA1A0(void *);
void func_0026EDE0(s32, s32);
void func_001A6570(void);
void func_001A96D0(void);
void func_001A70C0(void);
void func_001B10C0(s32);
s32 func_0017F900(void);
void func_001AB5E0(void);
void func_001AC5A0(void);
void func_001AC470(void);
s32 func_00C5A620(s32);
s32 func_00C5A6D0(s32);
void func_001AFBF0(s32, s32);
void func_001B43B0(s32, s32);
void func_00B7E420(void);

s32 func_00B7DEA0(void) {
    s32 i;
    u8 *p;
    u8 *q;
    u8 *obj;
    u8 *s3;
    u8 a, b;
    u8 *tbl;
    s32 *w;
    s32 k;
    s32 st = *(u8 *)D_00C9A91D;

    if (st == 3) {
        func_00B7E420();
        *(u8 *)D_00C9A91D = 0;
        return 1;
    }
    if (st == 2) {
        if (func_0017F900() != 0) {
            func_001AB5E0();
            func_001AC5A0();
            func_001AC470();
            for (i = 0; i < 2; i++) {
                p = (u8 *)D_00C9A710 + i * 8;
                if (p[0x18] != 0xFF) {
                    s3 = (u8 *)D_0058E5B0 + p[0x18] * 0x240;
                    func_001AFBF0(**(s32 **)(s3 + 4), func_00C5A620(s3[0]));
                    func_001B43B0(**(s32 **)(s3 + 4), func_00C5A6D0(s3[0]));
                }
            }
            (*(u8 *)D_00C9A91D)++;
        }
        return 0;
    }
    if (st == 1) {
        if (func_00BF9A40() == 0) {
            w = (s32 *)D_00C9A710;
            for (i = 0, p = (u8 *)D_00C9A710; i < 2; i++, p += 8, w++) {
                if (p[0x12] != 0xFF) {
                    u8 t;
                    s32 idx;
                    tbl = (u8 *)D_00591A90 + p[0x12] * 0x8B;
                    if (p[0x19] != 0xFF) {
                        for (k = 0; k < 0x20; k++) {
                            if (tbl[7 + k] == p[0x19]) { a = k; break; }
                        }
                        for (k = 0; k < 0x20; k++) {
                            if (tbl[7 + k] == p[0x16]) { b = k; break; }
                        }
                        t = tbl[7 + a];
                        tbl[7 + a] = tbl[7 + b];
                        tbl[7 + b] = t;
                        idx = (p[0x18] == 0xFF) ? 1 : p[0x18] % 23;
                        obj = (u8 *)D_0058E5B0 + idx * 0x240;
                        obj[0x11] = tbl[7 + (obj[0] - 1) % 11];
                    }
                    if (p[0x18] != 0xFF) {
                        idx = p[0x18] % 23;
                        obj = (u8 *)D_0058E5B0 + idx * 0x240;
                        if (p[0x13] == 0xC || p[0x13] == 1) {
                            s3 = (u8 *)D_0058E5B0 + p[0x18] * 0x240;
                            func_001A5A20(**(s32 **)(s3 + 4), p[0x18], tbl + b);
                            func_00287590(s3, 1);
                        }
                        func_0026EEA0(obj);
                        func_001ABA60(**(s32 **)(obj + 4));
                        func_002CA1A0(obj);
                    }
                    {
                        s32 v = *(s32 *)(p + 8 + 0 );
                        (void)v;
                    }
                    if (w[2] == 7 || w[2] == 8) {
                        func_00BF93A0(5);
                    }
                }
            }
            *(u8 *)D_00591A96 = *(u8 *)D_00C9A720;
            *(u8 *)D_00591B21 = *(u8 *)D_00C9A721;
            func_0026EDE0(*(u8 *)D_00C9A721, *(u8 *)D_00C9A720);
            func_001A6570();
            func_001A96D0();
            func_001A70C0();
            for (i = 0; i < 2; i++) {
                p = (u8 *)D_00C9A710 + i * 8;
                if (p[0x12] != 0xFF) {
                    if (p[0x13] == 0xC || p[0x13] == 1) {
                        s32 idx = (p[0x18] == 0xFF) ? 1 : p[0x18] % 23;
                        obj = (u8 *)D_0058E5B0 + idx * 0x240;
                        func_001B10C0(**(s32 **)(obj + 4));
                    }
                }
            }
            (*(u8 *)D_00C9A91D)++;
        }
        return 0;
    }
    if (st != 0) {
        *(u8 *)D_00C9A91D = 0;
    }
    for (i = 1; i < 0x17; i++) {
        p = (u8 *)D_0058E7F0 + (i - 1) * 0x240;
        q = (u8 *)D_00592980 + p[0x12] * 105 * 256 + p[0x11] * 105 * 8;
        if (q[0xD4] != 0 || q[0xF8] != 0) {
            func_001AAF40(**(s32 **)(p + 4), 0);
        }
    }
    func_00BF93A0(7);
    (*(u8 *)D_00C9A91D)++;
    return 0;
}
