/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Process_Create(s32, s32, s32, s32, s32);
void SD_call(s32);
void func_001BBC50(s32, s32, s32, s32);
void func_001BC210(void);
void func_001BC300(s32, s32, s32, s32);
s32 func_001BC3D0(s32, s32, s32, s32);
void func_002F5940(s32);
void func_002F5B30(s32, s32);
void func_002F5BF0(s32, s32, s32, s32);
void func_002F5E70(s32, s32, s32, s32);
void func_002F5FF0(s32, s32, s32, s32);
s32 func_002F6380(s32, s32, s32, s32);

void func_001B9E40(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    { s32 c_ = s1 == 0; s0 = a1; if (c_) goto L_001BA058; }
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 18336));
    if (a0 != 0) { a1 = s1; goto L_001BA048; }
    a0 = 23; v0 = func_002F6380(a0, a1, a2, a3);
    v1 = (s32) 0x520000U;
    a0 = (s32) 0x520000U;
    v1 = (*(volatile u8 *) (u32) (v1 + 18348));
    { s32 c_ = v1 == 0; (*(volatile u32 *) (u32) (a0 + 18336)) = (u32) v0; if (c_) goto L_001B9E98; }
    a0 = v0;
    v0 = (s32) 0x520000U;
    a1 = (*(volatile s32 *) (u32) (v0 + 18368)); func_002F5BF0(a0, a1, a2, a3);
L_001B9E98:;
    v0 = (s32) 0x520000U;
    v0 = (*(volatile u8 *) (u32) (v0 + 18347));
    if (v0 == 0) goto L_001B9EC4;
    v0 = (s32) 0x520000U;
    a1 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 18336));
    a1 = (s32) ((u32) a1 + 0x47b0U); func_002F5B30(a0, a1);
    v0 = (s32) 0x520000U;
    (*(volatile u8 *) (u32) (v0 + 18347)) = (u8) 0;
L_001B9EC4:;
    if (s0 == 0) goto L_001B9EE4;
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 18336));
    a1 = s1; func_002F5E70(a0, a1, a2, a3);
    goto L_001B9EF4;
L_001B9EE4:;
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 18336));
    a1 = s1; func_002F5FF0(a0, a1, a2, a3);
L_001B9EF4:;
    v0 = (s32) 0x520000U;
    a0 = (*(volatile s32 *) (u32) (v0 + 18336)); func_002F5940(a0);
    func_001BC300(a0, a1, a2, a3);
    func_001BC210();
    v0 = (s32) 0x520000U;
    a3 = (s32) 0x1c0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 18344));
    a1 = 0;
    a2 = 1;
    a3 = (s32) ((u32) a3 + 0xffffa310U); v0 = func_001BC3D0(a0, a1, a2, a3);
    v0 = (s32) 0x520000U;
    a1 = 1;
    a0 = (*(volatile u8 *) (u32) (v0 + 18344));
    a3 = (s32) 0x1c0000U;
    a2 = a1;
    a3 = (s32) ((u32) a3 + 0xffffa2e0U); v0 = func_001BC3D0(a0, a1, a2, a3);
    v0 = (s32) 0x520000U;
    v1 = 1;
    a0 = (*(volatile s32 *) (u32) (v0 + 18372));
    if (a0 != v1) { v0 = 2; goto L_001B9F80; }
    v0 = (s32) 0x520000U;
    a3 = (s32) 0x1c0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 18344));
    a1 = 5;
    a2 = 0;
    a3 = (s32) ((u32) a3 + 0xffffa290U); v0 = func_001BC3D0(a0, a1, a2, a3);
    goto L_001B9FE4;
L_001B9F80:;
    if (a0 != v0) goto L_001B9FAC;
    v0 = (s32) 0x520000U;
    a3 = (s32) 0x1c0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 18344));
    a1 = 6;
    a2 = 0;
    a3 = (s32) ((u32) a3 + 0xffffa290U); v0 = func_001BC3D0(a0, a1, a2, a3);
    goto L_001B9FE4;
L_001B9FAC:;
    v0 = (s32) 0x520000U;
    a3 = (s32) 0x1c0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 18344));
    a1 = 6;
    a2 = 0;
    a3 = (s32) ((u32) a3 + 0xffffa290U); v0 = func_001BC3D0(a0, a1, a2, a3);
    v0 = (s32) 0x520000U;
    a3 = (s32) 0x1c0000U;
    a0 = (*(volatile u8 *) (u32) (v0 + 18344));
    a1 = 13;
    a2 = 0;
    a3 = (s32) ((u32) a3 + 0xffffa290U); v0 = func_001BC3D0(a0, a1, a2, a3);
L_001B9FE4:;
    a0 = (s32) 0x1c0000U;
    a1 = (s32) 0x1c0000U;
    a2 = (s32) 0x1c0000U;
    a5 = (s32) 0x3d0000U;
    a0 = (s32) ((u32) a0 + 0xffffa100U);
    a1 = (s32) ((u32) a1 + 0xffffa120U);
    a2 = (s32) ((u32) a2 + 0xffffa070U);
    a3 = 0;
    a4 = 0;
    a5 = (s32) ((u32) a5 + 0x1690U); v0 = Pes6Process_Create(a0, a1, a2, a3, a4);
    v1 = (s32) 0x520000U;
    a0 = v0;
    (*(volatile u32 *) (u32) (v1 + 18340)) = (u32) v0; func_001BBC50(a0, a1, a2, a3);
    v0 = (s32) 0x520000U;
    v1 = (s32) 0x3a0000U;
    v0 = (*(volatile s32 *) (u32) (v0 + 18372));
    v1 = (s32) ((u32) v1 + 0xffff8458U);
    v0 = (s32) ((u32) v0 << 2);
    v0 = (s32) ((u32) v1 + (u32) v0);
    a0 = (*(volatile s32 *) (u32) v0); SD_call(a0);
    goto L_001BA050;
L_001BA048:;
    func_002F5FF0(a0, a1, a2, a3);
L_001BA050:;
    v1 = (s32) 0x520000U;
    (*(volatile u8 *) (u32) (v1 + 18346)) = (u8) 0;
L_001BA058:;
    return;
}
