/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0030E6C0(u8);
extern s32 func_0030EA70(void);
extern s32 func_00333740(s32, s32);
extern void func_0030F790(s32 *, s32 *);
extern void func_003414D0(u8 *, s32, s32);
extern void func_00339470(s32 **, s32, s32, s32);
extern void func_0030DCC0(f32 *, f32 *, s32);
extern void func_0030DC60(f32 *, s32);
extern void func_003101E0(s32 *, s32);
extern s32 func_00340900(f32, f32);
extern s32 func_003258F0(s32, s32);
extern s32 func_003390D0(f32);
extern void func_003394B0(s32, s32, s32, s32 *);
extern s32 func_003395B0(s32);
extern void func_0032A340(u16, u32 *);
extern void func_00313A80(void *, s32, void *);
extern void func_003139F0(void *, s32);
extern void func_00313B30(void *, s32, s32);
extern s32 func_00313AF0(void *, s32);
extern s32 func_00333440(s32, void *, s32);
extern s32 func_00326070(s32);
extern s32 func_00340C80(f32);
extern void func_00338930(void *);
extern void func_00338940(s32);
extern void func_00338640(s32, s32);
extern char D_003B7300[], D_003B7304[], D_003B7308[], D_003B730C[], D_003B7310[];
extern char D_003B7320[], D_003B7324[], D_003B7328[], D_003B732C[], D_003B7330[];

s32 func_0032D340(void *arg0) {
    s32 big[20];
    s32 tabA[5];
    s32 tabB[5];
    s32 sp100;
    s32 spE0;
    s32 spF0;
    s32 spD0, spC0, spB0, spA0;
    u8 *s7 = *(u8 **)((u8 *)arg0 + 0x40);
    u8 *s2 = *(u8 **)((u8 *)arg0 + 0x3C);
    s32 s4 = *(s32 *)((u8 *)arg0 + 0x44);
    s32 s0 = *(s32 *)((u8 *)arg0 + 0x48);
    u8 *fp = s7 + 0x74;
    u8 *sp150 = (u8 *)big;
    s32 *fr = big + 10;
    s32 s3, s6, s1, s0b, a2, i;

    tabA[0] = *(s32 *)D_003B7300;
    tabA[1] = *(s32 *)D_003B7304;
    tabA[2] = *(s32 *)D_003B7308;
    tabA[3] = *(s32 *)D_003B730C;
    tabA[4] = *(s32 *)D_003B7310;
    tabB[0] = *(s32 *)D_003B7320;
    tabB[1] = *(s32 *)D_003B7324;
    tabB[2] = *(s32 *)D_003B7328;
    tabB[3] = *(s32 *)D_003B732C;
    tabB[4] = *(s32 *)D_003B7330;
    sp100 = *(s32 *)((u8 *)arg0 + 0x4C);
    spE0 = (s32)(s7 + 0x3A8);
    spF0 = *(s32 *)((u8 *)arg0 + 0x50);
    if (s7[0x78] != 0xFF) {
        s3 = func_0030E6C0(s7[0x78]);
        spD0 = func_0030EA70();
        s6 = func_00333740(s0, s3);
        func_0030F790(&fr[0], &fr[1]);
        func_003414D0((u8 *)&fr[9] + 3, 2, 0xFF);
        func_00339470((s32 **)&fr[7], s4, s3, 0);
        func_00339470((s32 **)&fr[6], s4, s3, 1);
        func_0030DCC0((f32 *)&fr[4], (f32 *)&fr[3], fp[4]);
        func_0030DC60((f32 *)&fr[2], fp[0x20]);
        func_003101E0(&fr[9], s3 & 0xFF);
        s1 = func_00340900(*(f32 *)&fr[4], *(f32 *)&fr[3]);
        s0b = func_003258F0(sp100, s3);
        spC0 = func_003390D0(*(f32 *)&fr[2]);
        func_003394B0(s4, 0, s7[0x60], &fr[5]);
        spB0 = func_003395B0(s4);
        spA0 = func_003395B0(s4) - fr[5];
        func_0032A340(*(u16 *)(fp + 0x26), (u32 *)&fr[8]);
        func_00313A80(sp150, 0x4F, sp150 + 0x18);
        func_003139F0(sp150, s3 & 0xFF);

        a2 = *(s32 *)s2 != 0;
        if (a2 != 0) a2 = s2[0x2C] == 0;
        func_00313B30(sp150, 0, a2);
        a2 = *(s32 *)(s2 + 0x34) != 0;
        if (a2 != 0) a2 = func_00340C80(20.0f) < spB0;
        func_00313B30(sp150, 1, a2);
        a2 = *(s32 *)(s2 + 0x38) != 0;
        if (a2 != 0) {
            a2 = 1;
            if (!(*(f32 *)&fr[4] < -6732.5f)) a2 = 0;
        }
        func_00313B30(sp150, 2, a2);
        func_00313B30(sp150, 3, *(s32 *)(s2 + 0x40));
        func_00313B30(sp150, 4, *(s32 *)(s2 + 0x50));
        func_00313B30(sp150, 5, *(s32 *)(s2 + 0x54) == 3);
        func_00313B30(sp150, 6, *(s32 *)(s2 + 0x54) == 4);
        func_00313B30(sp150, 7, *(s32 *)(s2 + 0x54) == 7);
        {
            s32 r = 0, c = 0, d;
            if (*(s32 *)fp == 1) {
                d = 0;
                if ((u32)fr[8] < 6U && ((1 << (u32)fr[8]) & 0x23)) d = 1;
                if (d != 0) c = 1;
            }
            if (c != 0 && *(s32 *)(s2 + 0x48) != 0) r = 1;
            func_00313B30(sp150, 8, r);
        }
        func_00313B30(sp150, 9, *(s32 *)(s2 + 0x64));
        func_00313B30(sp150, 0xA, *(s32 *)(s2 + 0x68));
        func_00313B30(sp150, 0xB, *(s32 *)(s2 + 0x6C));
        a2 = *(s32 *)(s2 + 0x78) != 0;
        if (a2 != 0) a2 = s3 == 0;
        func_00313B30(sp150, 0xC, a2);
        a2 = *(s32 *)(s2 + 0x78) != 0;
        if (a2 != 0) a2 = s3 == 1;
        func_00313B30(sp150, 0xD, a2);
        func_00313B30(sp150, 0xE, *(s32 *)(s2 + 0x78));
        func_00313B30(sp150, 0xF, s1 & ((*(s32 *)(s7 + 0x44) >= 4) & ((s32)s7[0x48] >= 3)));
        a2 = *(s32 *)(s2 + 0x60) != 0;
        if (a2 != 0) a2 = s2[0x2F] == 0;
        if (a2 != 0) a2 = s1 != 0;
        func_00313B30(sp150, 0x10, a2);
        func_00313B30(sp150, 0x11, s0b == 0x2C);
        func_00313B30(sp150, 0x12, s0b == 0x28);
        func_00313B30(sp150, 0x13, s0b == 0x1B);
        func_00313B30(sp150, 0x14, s0b == 0x27);
        func_00313B30(sp150, 0x15, s0b == 0x31);
        func_00313B30(sp150, 0x16, s0b == 0x13);
        func_00313B30(sp150, 0x17, s0b == 9);
        func_00313B30(sp150, 0x18, s0b == 0x1A);
        func_00313B30(sp150, 0x19, s0b == 1);
        func_00313B30(sp150, 0x1A, s0b == 0x33);
        func_00313B30(sp150, 0x1B, s0b == 6);
        func_00313B30(sp150, 0x1D, s0b == 0x12);
        func_00313B30(sp150, 0x1E, s0b == 0x2D);
        func_00313B30(sp150, 0x1F, s0b == 0x21);
        func_00313B30(sp150, 0x20, s0b == 0x24);
        func_00313B30(sp150, 0x21, s0b == 0x37);
        func_00313B30(sp150, 0x22, s0b == 0xD6);
        a2 = spA0 >= func_00340C80(3.0f);
        if (a2 != 0) a2 = s6 != 0xD;
        func_00313B30(sp150, 0x23, a2);
        func_00313B30(sp150, 0x24, s6 >= 0xF);
        func_00313B30(sp150, 0x25, s1 & ((s6 == 0x10) & (spD0 == 0x59)));
        func_00313B30(sp150, 0x29, ((s32 *)fr[7])[1] >= func_00340C80(6.0f));
        a2 = ((s32 *)fr[7])[0] == 2;
        if (a2 != 0) a2 = *(s32 *)(spF0 + s3 * 8 + 0x14) != (s32)0x8F8F8F8F;
        if (a2 != 0) {
            s32 t = *(s32 *)(spF0 + s3 * 8 + 0x14) - spB0;
            a2 = t < func_00340C80(40.0f);
        }
        func_00313B30(sp150, 0x2A, a2);
        func_00313B30(sp150, 0x2B, s3 == ((u8 *)&fr[9])[3]);
        func_00313B30(sp150, 0x2C, s3 == (((u8 *)&fr[9])[3] ^ 1));
        func_00313B30(sp150, 0x2D, ((s32 *)fr[7])[0] == 3);
        func_00313B30(sp150, 0x2E, s6 >= 0x12);
        func_00313B30(sp150, 0x2F, func_00326070(sp100));
        a2 = 0;
        if (fr[s3 ^ 1] < fr[s3] && s1 != 0) a2 = 1;
        func_00313B30(sp150, 0x30, a2);
        func_00313B30(sp150, 0x31, fr[s3] >= 0x46);
        func_00313B30(sp150, 0x32, fr[s3] >= 0x37);
        func_00313B30(sp150, 0x33, s6 < 0xD);
        func_00313B30(sp150, 0x34, s1 & ((spD0 >= 0x4C) & (s6 == 0xB)));
        a2 = s6 < 9;
        if (a2 != 0) a2 = s1 != 0;
        func_00313B30(sp150, 0x35, a2);
        a2 = *(s32 *)(spE0 + s3 * 4 + 8) >= 5;
        if (a2 != 0) a2 = s1 != 0;
        func_00313B30(sp150, 0x36, a2);
        func_00313B30(sp150, 0x37, ((s32 *)fr[7])[1] >= func_00340C80(6.0f));
        func_00313B30(sp150, 0x38, ((s32 *)fr[7])[0] == 2);
        func_00313B30(sp150, 0x39, ((s32 *)fr[7])[0] == 3);
        func_00313B30(sp150, 0x3A, ((s32 *)fr[6])[0] == 4);
        func_00313B30(sp150, 0x3C, ((s32 *)fr[7])[0] == 4);
        a2 = fr[s3] < fr[s3 ^ 1];
        if (a2 != 0) a2 = s1 != 0;
        func_00313B30(sp150, 0x3D, a2);
        func_00313B30(sp150, 0x3E, (spD0 >= 0x15) & (((s32 *)fr[7])[1] >= func_00340C80(5.0f)));
        func_00313B30(sp150, 0x3F, (((s32 *)fr[7])[0] == 2) & (spC0 == 2));
        func_00313B30(sp150, 0x40, (((s32 *)fr[7])[0] == 3) & (spC0 == 3));
        func_00313B30(sp150, 0x41, (((s32 *)fr[7])[0] == 4) & (spC0 == 4));
        for (i = 0; i < 5; i++) {
            if (func_00313AF0(sp150, tabB[i]) != 0 &&
                func_00333440(tabA[i], sp150, 1) != 0) {
                s2[0x2C + i] = 1;
                func_00338940(0x80000011);
                func_00338940(0x8000000C);
                func_00338940(0x8000000F);
                func_00338940(0x80000010);
                func_00338640(0x80000011, 5);
                func_00338640(0x8000000C, 5);
                break;
            }
        }
    }
    func_00338930(arg0);
    return 1;
}
