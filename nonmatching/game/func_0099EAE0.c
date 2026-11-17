/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_0099E7D0(s32, s32, s32, s32, f32, f32, f32, f32);
void func_00B29EE0(s32, s32, s32, s32);

void func_0099EAE0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, f32 fa12, f32 fa13, f32 fa14, f32 fa15) {
    s32 at = 0, v0 = 0, v1 = 0, t4 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };
    volatile union { f32 f; s32 i; } f14 = { fa14 };
    volatile union { f32 f; s32 i; } f15 = { fa15 };

    a1 = (s32) 0x590000U;
    a2 = 0;
    a1 = (s32) ((u32) a1 + 0x2800U);
    s0 = a0;
    a0 = (*(volatile u8 *) (u32) a0);
L_0099EB00:;
    v1 = (*(volatile u8 *) (u32) (a1 + 16));
    if (a0 != v1) { a2 = (s32) ((u32) a2 + 0x1U); goto L_0099ED04; }
    a0 = (s32) ((u32) a2 << 2);
    v1 = (s32) 0x590000U;
    a0 = (s32) ((u32) a0 + (u32) a2);
    v1 = (s32) ((u32) v1 + 0x2800U);
    a0 = (s32) ((u32) a0 << 3);
    a0 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u8 *) (u32) a0);
    (*(volatile u8 *) (u32) (s0 + 71)) = (u8) v1;
    v1 = (*(volatile u8 *) (u32) a0);
    at = v1 < 8;
    if (at == 0) { a0 = 2; goto L_0099ED74; }
    a1 = (*(volatile u8 *) (u32) (s0 + 71));
    a2 = (s32) 0xcb0000U;
    a0 = (s32) 0xcb0000U;
    a2 = (s32) ((u32) a2 + 0x62b8U);
    a0 = (s32) ((u32) a0 + 0x62b0U);
    a3 = (s32) ((u32) a1 << 1);
    v1 = a1 < 8;
    a3 = (s32) ((u32) a3 + (u32) a1);
    a3 = (s32) ((u32) a3 << 3);
    a0 = (s32) ((u32) a0 + (u32) a3);
    a2 = (s32) ((u32) a2 + (u32) a3);
    a4 = (*(volatile s32 *) (u32) a0);
    { s32 c_ = v1 != 0; a3 = (*(volatile s32 *) (u32) a2); if (c_) goto L_0099EB7C; }
    v1 = 0; goto L_0099EB90;
L_0099EB7C:;
    v1 = (s32) 0xcb0000U;
    a0 = (s32) ((u32) a1 << 2);
    v1 = (s32) ((u32) v1 + 0x6390U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u16 *) (u32) v1);
L_0099EB90:;
    a2 = v1 & 0xffff;
    a0 = a1 & 0xff;
    v1 = a0 < 8;
    if (v1 != 0) goto L_0099EBAC;
    v1 = 0; goto L_0099EBC0;
L_0099EBAC:;
    v1 = (s32) 0xcb0000U;
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + 0x6370U);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (*(volatile u16 *) (u32) v1);
L_0099EBC0:;
    a0 = v1 & 0xffff;
    a5 = a1 & 0xff;
    v1 = a5 < 8;
    if (v1 != 0) goto L_0099EBDC;
    v1 = 0; goto L_0099EBF0;
L_0099EBDC:;
    v1 = (s32) 0xcb0000U;
    a5 = (s32) ((u32) a5 << 2);
    v1 = (s32) ((u32) v1 + 0x6392U);
    v1 = (s32) ((u32) v1 + (u32) a5);
    v1 = (*(volatile u8 *) (u32) v1);
L_0099EBF0:;
    a5 = a1 & 0xff;
    a1 = a5 < 8;
    { s32 c_ = a1 != 0; v1 = v1 & 0xff; if (c_) goto L_0099EC08; }
    a1 = 0; goto L_0099EC1C;
L_0099EC08:;
    a1 = (s32) 0xcb0000U;
    a5 = (s32) ((u32) a5 << 2);
    a1 = (s32) ((u32) a1 + 0x6393U);
    a1 = (s32) ((u32) a1 + (u32) a5);
    a1 = (*(volatile u8 *) (u32) a1);
L_0099EC1C:;
    a5 = (s32) 0x590000U;
    a5 = (*(volatile u8 *) (u32) (a5 + 7641));
    { s32 c_ = a5 <= 0; a1 = a1 & 0xff; if (c_) goto L_0099EC30; }
    a4 = 0;
L_0099EC30:;
    (*(volatile u32 *) (u32) (s0 + 176)) = (u32) a3;
    a6 = (*(volatile s32 *) (u32) (s0 + 176));
    a5 = a6 & 0xf0;
    a5 = a5 & 0xffff;
    if (a5 == 0) { a5 = a1 & 0xff; goto L_0099ED2C; }
L_0099EC48:;
    a7 = (*(volatile s32 *) (u32) (s0 + 176));
    t4 = a2 & 0xffff;
    a5 = (s32) 0x590000U;
    a2 = (s32) 0x590000U;
    a6 = 0x8000;
    a7 = a7 & 0xf0;
    a7 = a7 & 0xffff;
    (*(volatile u32 *) (u32) (a5 + 7804)) = (u32) a7;
    (*(volatile u32 *) (u32) (s0 + 180)) = (u32) a4;
    (*(volatile u16 *) (u32) (s0 + 252)) = (u16) a0;
    a0 = (*(volatile u16 *) (u32) (a2 + 10058));
    if (a0 == a6) { a0 = (s32) ((u32) t4 + 0x4000U); goto L_0099EC94; }
    if (a0 == 0) { a0 = (s32) ((u32) t4 + 0xffffc000U); goto L_0099EC8C; }
    (*(volatile u16 *) (u32) (s0 + 254)) = (u16) t4; goto L_0099EC9C;
L_0099EC8C:;
    t4 = a0 & 0xffff; goto L_0099EC98;
L_0099EC94:;
    t4 = a0 & 0xffff;
L_0099EC98:;
    (*(volatile u16 *) (u32) (s0 + 254)) = (u16) t4;
L_0099EC9C:;
    a0 = a3 & 0x100;
    (*(volatile u8 *) (u32) (s0 + 257)) = (u8) v1;
    { s32 c_ = a0 != 0; (*(volatile u8 *) (u32) (s0 + 36)) = (u8) 0; if (c_) goto L_0099ED3C; }
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7633));
    if (v1 != 0) goto L_0099ED50;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7634));
    if (v1 != 0) goto L_0099ED50;
L_0099ECCC:;
    v1 = (s32) 0x590000U;
    a0 = 12;
    v1 = (*(volatile u8 *) (u32) (v1 + 10051));
    if (v1 != a0) goto L_0099ED10;
    v1 = (s32) 0x590000U;
    a0 = 16384;
    v1 = (*(volatile u16 *) (u32) (v1 + 10058));
    if (v1 != a0) goto L_0099ED10;
    a0 = s0; func_0099E7D0(a0, a1, a2, a3, f12.f, f13.f, f14.f, f15.f);
    goto L_0099ED10;
L_0099ED04:;
    v1 = a2 < 8;
    { s32 c_ = v1 != 0; a1 = (s32) ((u32) a1 + 0x28U); if (c_) goto L_0099EB00; }
L_0099ED10:;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile u8 *) (u32) (v1 + 7177));
    v1 = 5;
    if (a0 == v1) goto L_0099EDB0;
L_0099ED24:;
    goto L_0099EDC8;
L_0099ED2C:;
    a5 = a5 & 0xf0;
    a5 = a6 | a5;
    (*(volatile u32 *) (u32) (s0 + 176)) = (u32) a5; goto L_0099EC48;
L_0099ED3C:;
    v1 = (*(volatile s32 *) (u32) (s0 + 176));
    v1 = v1 & 0xf0;
    (*(volatile u32 *) (u32) (s0 + 176)) = (u32) v1;
    (*(volatile u32 *) (u32) (s0 + 180)) = (u32) 0; goto L_0099ED10;
L_0099ED50:;
    v1 = (s32) 0x590000U;
    (*(volatile u32 *) (u32) (v1 + 7804)) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) (s0 + 176));
    v1 = v1 & 0xf0;
    (*(volatile u32 *) (u32) (s0 + 176)) = (u32) v1;
    v1 = (*(volatile s32 *) (u32) (s0 + 180));
    v1 = v1 & 0xf0;
    (*(volatile u32 *) (u32) (s0 + 180)) = (u32) v1; goto L_0099ECCC;
L_0099ED74:;
    v1 = (s32) 0x590000U;
    (*(volatile u8 *) (u32) (s0 + 36)) = (u8) a0;
    v1 = (*(volatile u8 *) (u32) (v1 + 7633));
    if (v1 != 0) goto L_0099ED98;
    v1 = (s32) 0x590000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 7634));
    if (v1 == 0) goto L_0099ED10;
L_0099ED98:;
    a0 = (s32) 0x590000U;
    v1 = (s32) 0x590000U;
    a0 = (*(volatile s32 *) (u32) (a0 + 7700));
    a0 = (s32) ((u32) a0 + 0x1U);
    (*(volatile u32 *) (u32) (v1 + 7700)) = (u32) a0; goto L_0099ED10;
L_0099EDB0:;
    a0 = (s32) 0x5e0000U;
    a1 = s0;
    a0 = (s32) ((u32) a0 + 0x3810U); func_00B29EE0(a0, a1, a2, a3);
    goto L_0099ED24;
L_0099EDC8:;
    return;
}
