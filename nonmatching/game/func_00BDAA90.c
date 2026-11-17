/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CBD558[];
extern char D_00CBCAD1[];
extern char D_00CBCC70[];
extern char D_00CBCD8B[];
extern char D_00CBCD8D[];
extern char D_00CBCD80[];
void func_001C48E8(void *, s32, s32);
void func_00B82670(void);
s32 func_00B2A420(s32);
s32 *func_00BDB260(s32);
void func_00BE2800(s32 *);
void func_00BDAFE0(s32 *);
void func_00B35470(s32);
void func_00BDAD20(s32);
void func_00B37370(void);

void func_00BDAA90(s32 *a0) {
    s32 n;
    s32 i;
    u32 t;
    s32 *p;
    s32 b;
    u32 u;
    f32 c;
    func_001C48E8(D_00CBD558, 0, 12);
    func_00B82670();
    *(u8 *)D_00CBD558 = 1;
    *(u8 *)(D_00CBD558 + 4) = **(u8 **)a0;
    *(u8 *)(D_00CBD558 + 1) = *(u8 *)(*(s32 *)(*a0 + 4) + 45);
    t = (u8)D_00CBCAD1 - 0x68;
    if (t == 1) n = 7;
    else if (t == 5) n = 3;
    else if ((u32)t < 8) n = 5;
    if (n >= 2) {
        for (i = 1; i < n; i++) {
            s32 base = *a0;
            b = *(u8 *)(base + *(u8 *)(base + 0x13) * 11 + i + 0x1B3);
            if (b == 255) {
                *(u8 *)D_00CBD558 = 2;
                func_00BE2800(a0);
                return;
            }
            *(u8 *)(D_00CBD558 + 4 + i) = b;
            p = func_00BDB260(func_00B2A420(b));
            *(f32 *)(D_00CBCC70 + 0x60 + (i - 1) * 4) = *(f32 *)((char *)p + 4);
            *(f32 *)(D_00CBCC70 + 0x80 + (i - 1) * 4) = *(f32 *)((char *)p + 8);
            c = 182.04445f * (f32)*(s16 *)((char *)p + 12);
            *(u16 *)(D_00CBCC70 + 0xA0 + (i - 1) * 2) = (u32)c;
            *(u16 *)(D_00CBCC70 + 0xF0 + (i - 1) * 2) = *(u16 *)((char *)p + 14);
            *(u16 *)(D_00CBCC70 + 0x100 + (i - 1) * 2) = *(u16 *)((char *)p + 16);
        }
    }
    *(u8 *)D_00CBCD8B = n - 1;
    *(u8 *)D_00CBCD8D = n - 1;
    *(u8 *)D_00CBCD80 = n - 1;
    func_00BDAFE0(a0);
    func_00B35470((s32)a0);
    for (i = 1; i < n; i++) {
        s32 q = func_00B2A420(*(u8 *)(D_00CBD558 + 4 + i));
        func_00BDAD20(q);
        func_00B35470(q);
    }
    func_00B37370();
}
