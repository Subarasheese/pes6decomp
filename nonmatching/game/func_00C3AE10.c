/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CCB904[];
extern char D_00CB4580[];
extern char D_00CCB94C[];
extern char D_00CCB8FC[];
extern char D_00CCB8FD[];
extern char D_00CCB8FE[];
extern char D_00CCB8F0[];
extern char D_0058E5B0[];
extern char D_00591BE4[];
extern char D_003B91B0[];
extern char D_00CB4340[];
extern char D_00CB4344[];
extern u8 D_003EA7F6;

extern void func_00C37900(u32 a);
extern u8 func_00C379B0(void);
extern s32 *func_00B2A420(s32 i);
extern void func_001C48E8(s32 a, s32 b, s32 c);
extern void func_00209A00(s32 a, s32 b, s32 c);
extern void func_00C3BC50(s32 a);
extern void func_00C3B840(s32 a);
extern void func_00C3B250(s32 a);
extern void func_001A58E0(s32 a, s32 b);
extern s32 func_009E1C90(s32 a);
extern s32 func_00C37850(s32 a);
extern s32 func_00207AC0(u32 a, s32 b, s32 c, f32 f);
extern void func_002BB820(s32 a, s32 b);
extern void func_002BB870(s32 a, s32 b);
extern void func_002BBF20(void *a);
extern void func_00272800(s32 a);
extern s32 func_00151EA0(s32 a);
extern void func_00BBBF40(s32 a, s32 b);
extern void func_002A9580(f32 f);
extern void func_00C3AC00(s32 a);

void func_00C3AE10(void)
{
    s32 s2;
    s32 i;
    s32 *p;
    s32 *q;
    u8 *e;
    s32 idx;

    s2 = ((s32 *)D_00CB4580)[((s32 *)D_00CCB904)[*(u8 *)D_00CCB94C * 3]];
    func_00C37900(*(u8 *)D_00CCB8FC);
    *(u8 *)D_00CCB8FC = func_00C379B0();
    for (i = 0; i < 0x17; i++) {
        p = func_00B2A420(i);
        func_001C48E8(p[1], 0, 0x78);
        q = (s32 *)p[0];
        *(u8 *)(q[1] + 0x2C) = 0;
        q = (s32 *)p[0];
        *(s16 *)((u8 *)q + 0x28) = 0;
        q = (s32 *)p[0];
        *(s16 *)((u8 *)q + 0x26) = 0;
        q = (s32 *)p[0];
        q[8] = 0;
        q = (s32 *)p[0];
        q[7] = 0;
        q = (s32 *)p[0];
        func_00209A00(q[1], 0, 0);
        q = (s32 *)p[0];
        if (*((u8 *)q + 0x16) != 0x2E) {
            *((u8 *)q + 0x16) = 0x2E;
        }
    }
    func_00C3BC50(s2);
    func_00C3B840(s2);
    func_00C3B250(s2);
    for (i = 0; i < 0x17; i++) {
        s32 *b = (s32 *)(D_0058E5B0 + i * 0x240);
        s32 *v;
        b[0xE4 / 4] = 0;
        v = (s32 *)b[1];
        func_001A58E0(v[0], *((u8 *)v + 0x2C));
    }
    idx = *(u8 *)D_00CCB94C * 12;
    if (*(s8 *)(D_00CCB904 + 4 + idx) < 0) {
        *(s8 *)(D_00CCB904 + 4 + idx) = 0;
    }
    idx = *(u8 *)D_00CCB94C * 12;
    if (*(s8 *)(D_00CCB904 + 5 + idx) < 0) {
        *(s8 *)(D_00CCB904 + 5 + idx) = 0x64;
    }
    if ((func_009E1C90(5) & 0xFF) == 1 && *(u8 *)D_00CCB8FD > 0) {
        s32 a0;
        s32 r;
        s32 *pp;
        s32 cnt;
        if (func_00C37850(*(u8 *)D_00CCB8FC) == 0xFF) {
            a0 = 1;
        } else {
            a0 = func_00C37850(*(u8 *)D_00CCB8FC) % 0x17;
        }
        pp = (s32 *)((s32 *)(D_0058E5B0 + a0 * 0x240))[1];
        idx = *(u8 *)D_00CCB94C * 12;
        cnt = *(s8 *)(D_00CCB904 + 4 + idx) * 100;
        r = func_00207AC0(*(u16 *)((u8 *)pp + 0x30), cnt, 1, *(f32 *)((u8 *)pp + 0x28));
        {
            s32 m = *(s32 *)D_00CCB8F0;
            if (m == 4 || m == 3 || m == 2 || m == 1) {
                if ((s32)(*(u8 *)D_00591BE4 << 1) < r) {
                    func_002BB820(*(u8 *)D_00CCB8FD, 0x1D);
                    func_002BB870(*(u8 *)D_00CCB8FD, 0x46);
                    func_002BBF20(D_003B91B0);
                    *(u8 *)D_00CCB8FE = 0;
                    return;
                }
            }
        }
    }
    {
        s32 s1;
        s32 a0;
        s32 v3;
        s32 a1;
        func_00272800(0x19);
        s1 = func_00C37850(*(u8 *)D_00CCB8FC) & 0xFF;
        idx = *(u8 *)D_00CCB94C * 12;
        a0 = *(s32 *)(D_00CCB904 + idx);
        v3 = *(s8 *)(D_00CCB904 + 6 + idx);
        if (v3 < 0) {
            s32 t = func_00151EA0(0x64) & 0xFFFF;
            a1 = (*(s32 *)(D_00CB4340 + a0 * 8) + t % *(u8 *)(D_00CB4344 + a0 * 8)) & 0xFF;
        } else {
            a1 = (*(s32 *)(D_00CB4340 + a0 * 8) + v3 % *(u8 *)(D_00CB4344 + a0 * 8)) & 0xFF;
        }
        func_00BBBF40(s1, a1);
        func_002A9580((f32)(u32)D_003EA7F6);
        func_00C3AC00(s2);
        *(u8 *)D_00CCB8FE = 1;
    }
}
