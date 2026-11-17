/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CCB94C[];
extern char D_00CCB904[];
extern char D_00CCB90A[];
extern char D_00CCB8F0[];
extern char D_00CCB8FC[];
extern char D_00CCB8FE[];
extern char D_00CB4580[];
extern char D_00CB4620[];
extern char D_00CB4340[];
extern char D_00CB4344[];
extern u8 D_003EA7F6;

extern u8 func_00C37760(u8 a, s32 b);
extern void func_00C37900(u8 a);
extern char *func_00B2A420(u8 a);
extern void func_001C48E8(void *p, s32 v, s32 n);
extern void func_00C377F0(u8 a, void *b, s32 c, u16 d);
extern void func_00C37880(u8 a, void *b, s32 c);
extern void func_00C37610(u8 a, void *b);
extern void func_00C3B840(void *a);
extern void func_00272800(s32 a);
extern u8 func_00C37850(u8 a);
extern u16 func_00151EA0(s32 a);
extern void func_00BBBF40(s32 a, s32 b);
extern void func_002A9580(f32 a);
extern void func_00C3AC00(void *a);

void func_00C39780(void)
{
    u8 buf[8];
    char *s0;
    char *s1;
    char *s2;
    char *e;
    s32 i;
    s32 j;
    s32 a;
    s32 b;
    s32 v;

    s0 = *(char **)(D_00CB4580 + *(s32 *)(D_00CCB904 + *(u8 *)D_00CCB94C * 12) * 4);
    for (i = 0; i < *(u8 *)(s0 + 2); i++) {
        buf[i] = func_00C37760(*(u8 *)D_00CCB8FC, i);
    }
    func_00C37900(*(u8 *)D_00CCB8FC);
    for (j = 0; j < *(u8 *)(s0 + 2); j++) {
        s1 = func_00B2A420(buf[j]);
        func_001C48E8(*(void **)(s1 + 4), 0, 0x78);
        *(s32 *)(*(char **)s1 + 0x20) = 0;
        *(s32 *)(*(char **)s1 + 0x1C) = 0;
        *(s32 *)(*(char **)(*(char **)s1 + 4) + 0x38) = 0;
        if (j == 0) {
            func_00C37880(*(u8 *)D_00CCB8FC, s1, *(u8 *)(s0 + 2));
            func_00C37610(*(u8 *)D_00CCB8FC, s0);
            s2 = *(char **)s1;
            e = *(char **)(D_00CB4620 + *(s32 *)(D_00CCB8F0 + *(u8 *)D_00CCB94C * 12 + 0x1C) * 8);
            a = func_00151EA0((e[1] - e[0]) & 0xFFFF) & 0xFFFF;
            *(f32 *)(s2 + 0xE0) = (f32)(e[0] * 100) + (f32)(a * 100);
            a = func_00151EA0((e[3] - e[2]) & 0xFFFF) & 0xFFFF;
            *(f32 *)(s2 + 0xE8) = (f32)(e[2] * 100) + (f32)(a * 100);
            *(s32 *)(s2 + 0xE4) = 0;
            a = func_00151EA0((s16)(*(s16 *)(e + 6) - *(s16 *)(e + 4)) & 0xFFFF);
            b = (s16)(*(s16 *)(e + 4) + (s16)a);
            if (b < 0) {
                b = (s16)(b + 0x168);
            }
            if (b >= 0x169) {
                b = (s16)(b - 0x168);
            }
            *(s16 *)(s2 + 0x26) = b * 0xB6;
            *(s16 *)(s2 + 0x28) = b * 0xB6;
        } else {
            func_00C377F0(*(u8 *)D_00CCB8FC, s1, j, *(u16 *)(*(char **)(s0 + 4) + j * 20 + 0x10));
        }
    }
    func_00C3B840(s0);
    func_00272800(0x19);
    i = func_00C37850(*(u8 *)D_00CCB8FC);
    a = *(s32 *)(D_00CCB904 + *(u8 *)D_00CCB94C * 12);
    v = *(s8 *)(D_00CCB90A + *(u8 *)D_00CCB94C * 12);
    if (v < 0) {
        b = func_00151EA0(100) & 0xFFFF;
        b = (*(s32 *)(D_00CB4340 + a * 8) + b % *(u8 *)(D_00CB4344 + a * 8)) & 0xFF;
    } else {
        b = (v % *(u8 *)(D_00CB4344 + a * 8) + *(s32 *)(D_00CB4340 + a * 8)) & 0xFF;
    }
    func_00BBBF40(i, b);
    func_002A9580((f32)(u32)D_003EA7F6);
    func_00C3AC00(s0);
    *(u8 *)D_00CCB8FE = 1;
}
