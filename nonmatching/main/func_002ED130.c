/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void Pes6Heap_Free(s32);
void Pes6Process_Destroy(s32, s32, s32, s32, s32, s32, s32, s32);
void Pes6Process_Unlink(s32);
void func_001BC360(s32, s32, s32, s32);
void func_001D6E40(s32, s32, s32, s32);
void func_001D7F10(s32, s32, s32, s32);
void func_001EDBA0(s32, s32, s32, s32);
void func_001EDD90(s32, s32, s32, s32);
void func_002DF960(s32, s32, s32, s32, s32, s32, s32, s32);
void func_002E33D0(s32, s32, s32, s32);
void func_002E4570(s32, s32, s32, s32);

void func_002ED130(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    s2 = 0;
    s0 = a0;
    s1 = s0;
L_002ED150:;
    a0 = (*(volatile s32 *) (u32) (s1 + 4)); func_001BC360(a0, a1, a2, a3);
    s2 = (s32) ((u32) s2 + 0x1U);
    (*(volatile u32 *) (u32) (s1 + 4)) = (u32) 0;
    v0 = s2 < 14;
    { s32 c_ = v0 != 0; s1 = (s32) ((u32) s1 + 0x4U); if (c_) goto L_002ED150; }
    v1 = (*(volatile s32 *) (u32) s0);
    v0 = (s32) 0x5f0000U;
    a4 = (s32) 0x5f0000U;
    a3 = (s32) 0x5f0000U;
    a2 = (s32) 0x5f0000U;
    a1 = (s32) 0x5f0000U;
    v0 = (s32) ((u32) v0 + 0xffff91a0U);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    a0 = (s32) 0x5f0000U;
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    v1 = (s32) 0x5f0000U;
    a5 = (*(volatile s32 *) (u32) s0);
    v0 = (s32) 0x5f0000U;
    a4 = (s32) ((u32) a4 + 0xffff91c0U);
    a3 = (s32) ((u32) a3 + 0xffff91e0U);
    a2 = (s32) ((u32) a2 + 0xffff9200U);
    a1 = (s32) ((u32) a1 + 0xffff9220U);
    a5 = (s32) ((u32) a5 << 2);
    a0 = (s32) ((u32) a0 + 0xffff9240U);
    a4 = (s32) ((u32) a4 + (u32) a5);
    v1 = (s32) ((u32) v1 + 0xffff9260U);
    (*(volatile u32 *) (u32) a4) = (u32) 0;
    v0 = (s32) ((u32) v0 + 0xffff9280U);
    a4 = (*(volatile s32 *) (u32) s0);
    a4 = (s32) ((u32) a4 << 2);
    a3 = (s32) ((u32) a3 + (u32) a4);
    (*(volatile u32 *) (u32) a3) = (u32) 0;
    a3 = (*(volatile s32 *) (u32) s0);
    a3 = (s32) ((u32) a3 << 2);
    a2 = (s32) ((u32) a2 + (u32) a3);
    (*(volatile u32 *) (u32) a2) = (u32) 0;
    a2 = (*(volatile s32 *) (u32) s0);
    a2 = (s32) ((u32) a2 << 2);
    a1 = (s32) ((u32) a1 + (u32) a2);
    (*(volatile u32 *) (u32) a1) = (u32) 0;
    a1 = (*(volatile s32 *) (u32) s0);
    a1 = (s32) ((u32) a1 << 2);
    a0 = (s32) ((u32) a0 + (u32) a1);
    (*(volatile u32 *) (u32) a0) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) s0);
    a0 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    (*(volatile u32 *) (u32) v1) = (u32) 0;
    v1 = (*(volatile s32 *) (u32) s0);
    v1 = (s32) ((u32) v1 << 2);
    v0 = (s32) ((u32) v0 + (u32) v1);
    (*(volatile u32 *) (u32) v0) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s0 + 84)); func_002E33D0(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 100)); func_002E4570(a0, a1, a2, a3);
    s2 = 0;
    s1 = s0;
L_002ED244:;
    a0 = (*(volatile s32 *) (u32) (s1 + 88)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    s2 = (s32) ((u32) s2 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x4U);
    v0 = s2 < 2;
    if (v0 != 0) goto L_002ED244;
    a0 = (*(volatile s32 *) (u32) (s0 + 96)); func_002DF960(a0, a1, a2, a3, a4, a5, a6, a7);
    s1 = 0;
    s2 = s0;
L_002ED270:;
    a0 = (*(volatile s32 *) (u32) (s2 + 120));
    if (a0 == 0) goto L_002ED288;
    func_001D6E40(a0, a1, a2, a3);
L_002ED288:;
    a0 = (*(volatile s32 *) (u32) (s2 + 108));
    if (a0 == 0) goto L_002ED2A0;
    func_001D7F10(a0, a1, a2, a3);
L_002ED2A0:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 3;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_002ED270; }
    a0 = (*(volatile s32 *) (u32) (s0 + 132));
    if (a0 == 0) { a0 = (*(volatile s32 *) (u32) (s0 + 144)); goto L_002ED2C8; }
    func_001D7F10(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 144));
L_002ED2C8:;
    if (a0 == 0) { a0 = (*(volatile s32 *) (u32) (s0 + 140)); goto L_002ED2DC; }
    func_001D6E40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 140));
L_002ED2DC:;
    func_001D6E40(a0, a1, a2, a3);
    a0 = (*(volatile s32 *) (u32) (s0 + 136)); func_001D7F10(a0, a1, a2, a3);
    s1 = 0;
    s2 = s0;
L_002ED2F4:;
    a1 = (*(volatile s32 *) (u32) (s2 + 152));
    if (a1 == 0) goto L_002ED310;
    a0 = (*(volatile s32 *) (u32) (s0 + 148)); func_001EDBA0(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s2 + 152)) = (u32) 0;
L_002ED310:;
    a0 = (*(volatile s32 *) (u32) (s0 + 148));
    if (a0 == 0) goto L_002ED328;
    func_001EDD90(a0, a1, a2, a3);
    (*(volatile u32 *) (u32) (s0 + 148)) = (u32) 0;
L_002ED328:;
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s1 < 20;
    { s32 c_ = v0 != 0; s2 = (s32) ((u32) s2 + 0x4U); if (c_) goto L_002ED2F4; }
    a0 = (*(volatile s32 *) (u32) (s0 + 30236)); Pes6Process_Unlink(a0);
    a0 = (*(volatile s32 *) (u32) (s0 + 30236)); Pes6Process_Destroy(a0, a1, a2, a3, a4, a5, a6, a7);
    a0 = s0; Pes6Heap_Free(a0);
    return;
}
