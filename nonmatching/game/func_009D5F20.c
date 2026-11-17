/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_001C48E8(void *p, s32 v, s32 n);
extern void func_002AE670(s32 a);
extern void func_00A99360(void *p, s32 a);
extern void func_0027A600(void *p, s32 a);
extern f32 func_009B8A60(void *p);
extern void func_009D7080(void *p, s32 a);
extern void func_00AB3BB0(void);
extern s32 func_009BF460(void *p);
extern s32 func_00207D10(void *p);
extern void func_009BA3A0(void *p);
extern s32 func_009BA040(void *p);
extern s32 func_00207D80(void *p, s32 a);
extern s32 func_009CC680(void *p);
extern void func_009BD890(void *p, s32 a);
extern s32 func_0027E780(void *p);
extern s32 func_00284200(void *p, s32 a);
extern s32 func_009C1230(void *p, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6);
extern void func_009C3A40(void *p);
extern void func_009C3E50(void *p);
extern void func_009B9EF0(void *p);
extern s32 func_009B97D0(s32 a);
extern s32 func_00207E20(void *p);
extern void func_009B6FE0(void *p);
extern void func_009D7E00(void *p);
extern s32 func_00288670(s32 a);
extern s32 func_00BBB780(s32 a);
extern s32 func_00BBB8C0(s32 a);
extern void func_009BB600(void *p, s32 a, s32 b);
extern char D_005926DC[];
extern char D_005926E0[];
extern char D_005926D8[];
extern char D_00591E18[];
extern char D_00592980[];
extern char *D_003E7574;
extern char *D_003E74CC;

void func_009D5F20(char *s1)
{
    char buf[0x14];
    char *a0;
    char *o;
    f32 x, lim;
    s32 s0, r;
    u16 s2;
    u16 st;

    func_001C48E8(buf, 0, 0x14);
    func_002AE670(0x12);
    func_00A99360(s1, -0x3E8);
    st = *(u16 *)(s1 + 0x18);
    if (st == 0x81) goto C81;
    if (st == 0x80) goto C80;
    if (st == 4) goto C4;
    if (st == 3) goto C3;
    if (st == 2) goto C2;
    if (st == 1) goto C1;
    if (st != 0) goto L6204;
    func_0027A600(s1, 1);
    *(s16 *)(buf + 8) = *(s32 *)(s1 + 0xA4);
    *(s32 *)buf = *(s32 *)(s1 + 0x1C);
    *(u16 *)(buf + 0xA) = *(u16 *)(s1 + 0x28);
    *(u16 *)(buf + 0xC) = *(u16 *)(s1 + 0x2C);
    buf[0x10] = s1[0x50];
    *(u16 *)(s1 + 0x2C) = *(u16 *)(buf + 0xC);
    *(f32 *)(s1 + 0xF4) = func_009B8A60(s1);
    s1[0x4E] = D_005926DC[0];
    *(u16 *)(s1 + 0x28) = *(u16 *)(buf + 0xA);
    *(s32 *)(s1 + 0x1C) = *(s32 *)buf;
    *(s32 *)(s1 + 0x20) = *(s32 *)buf;
    s1[0x66] = 0;
    *(s32 *)(s1 + 0xE4) = 0;
    *(u16 *)(s1 + 0x18) = 1;
C1:
    func_009D7080(s1, 1);
    func_0027A600(s1, 1);
    a0 = *(char **)(s1 + 4);
    if (!(*(f32 *)(a0 + 0x38) <= 4.0f)) goto L632C;
    if (!(*(f32 *)D_005926D8 <= (f32)(u32)(u8)D_005926E0[0])) goto L632C;
    if (*(u16 *)(D_003E7574 + 0x84) != 0xB) goto L632C;
    s1[0x16] = 0x82;
    *(u16 *)(s1 + 0x18) = 0;
    goto L6200;
C2:
    func_00AB3BB0();
    *(u16 *)(s1 + 0x18) = 3;
C3:
    func_009D7080(s1, 1);
    o = *(char **)(s1 + 4);
    x = *(f32 *)(o + 0x38);
    lim = (f32)(s32)((u8)(*(char **)(o + 4))[2] << 1);
    if (x < lim) goto L6114;
    *(s32 *)(s1 + 0xE4) = 0;
    *(s32 *)(s1 + 0xF4) = 0;
    if (func_009BA040(s1)) goto L6200;
    *(u16 *)(s1 + 0x18) = 4;
L6114:
    if (func_009BF460(s1)) {
        func_009D7E00(s1);
        s1[0x48] = 1;
        s1[0x16] = 0x8F;
        *(u16 *)(s1 + 0x18) = 0x80;
    }
L6124:
    if (func_00207D10(*(char **)(s1 + 4)))
        func_009BA3A0(s1);
    goto L6200;
C4:
    func_009D7080(s1, 1);
    goto L6124;
C80:
    func_00AB3BB0();
    *(u16 *)(s1 + 0x18) = 0x81;
C81:
    func_009D7080(s1, 1);
    o = *(char **)(s1 + 4);
    x = *(f32 *)(o + 0x38);
    lim = (f32)(s32)((u8)(*(char **)(o + 4))[2] << 1);
    if (x < lim) goto L61B4;
    *(s32 *)(s1 + 0xE4) = 0;
    *(s32 *)(s1 + 0xF4) = 0;
    if (func_009CC680(s1)) goto L6200;
L61B4:
    a0 = *(char **)(s1 + 4);
    r = func_00207D80(a0, *(s32 *)(D_003E74CC + *(u16 *)(a0 + 0x30) * 4 + 0x2FD8) - 10);
    if (r) {
        if (func_009BA040(s1)) goto L6200;
    }
    if (func_00207D10(*(char **)(s1 + 4)))
        func_009BA3A0(s1);
L6200:
L6204:
    func_009BD890(s1, 1);
    o = *(char **)(s1 + 4);
    x = *(f32 *)(o + 0x38);
    lim = (f32)(s32)((u8)(*(char **)(o + 4))[1] << 1);
    if (x < lim) goto L6494;
    if (*(u16 *)(D_003E7574 + 0x84) == 9) goto L6430;
L624C:
    if (*(s32 *)(D_003E7574 + 0x50) < 0x3800) goto L6494;
    func_0027E780(s1);
    goto L626C;
L6430:
    r = func_00288670((u8)D_00592980[s1[0x12] * 26880 + s1[0x11] * 840 + 0x83] & 0x7F);
    /* index uses unsigned bytes */
    if (func_00BBB780((s16)(r - 0x28)) == 0) goto L624C;
L6494:
    r = func_00BBB8C0(0x1000);
    func_009BB600(s1, (u16)(r + 0x3E00), 0);
L626C:
    st = *(u16 *)(*(char **)(s1 + 4) + 0x30);
    s0 = 0;
    if (st == 0x26E || st == 0x3DD || st == 0x3C9) s0 = 1;
    s2 = (u16)func_0027E780(s1);
    r = func_00284200(s1, s2);
    r = func_009C1230(s1, s1[0x48] ? 0x18 : 0x14, s2, 0, r, 0, 0);
    if (r) {
        D_003E7574[0x65] = D_005926DC[0];
        if (s0) func_009C3A40(s1);
    }
    if (s0) {
        if ((u8)s1[0] == (u8)D_00591E18[0] || *(u16 *)(s1 + 0x18) < 3)
            func_009C3E50(s1);
        else
            func_009B9EF0(s1);
    }
    return;
L632C:
    r = func_009B97D0(*(u16 *)(a0 + 0x30));
    if ((s32)*(f32 *)(*(char **)(s1 + 4) + 0x38) < r)
        ;
    else
        *(f32 *)(s1 + 0xE4) = *(f32 *)(s1 + 0xE4) + *(f32 *)(s1 + 0xF4);
    if (!func_00207E20(*(char **)(s1 + 4))) goto L6200;
    func_009B6FE0(s1);
    if ((u8)s1[0] == (u8)D_00591E18[0]) {
        *(u16 *)(s1 + 0x18) = 2;
        goto L6200;
    }
    func_009D7E00(s1);
    s1[0x48] = 1;
    s1[0x16] = 0x8F;
    *(u16 *)(s1 + 0x18) = 0x80;
    func_0027A600(s1, 0);
    goto L6200;
}
