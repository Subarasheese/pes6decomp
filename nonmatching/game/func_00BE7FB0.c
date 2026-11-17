/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_009B3070(s64, s64);
s64 func_009B3480(s64, s64, s64, s64, f32, f32);
s64 func_00B2A420(s64);
void func_00B35E10(s64, s64, s64);
s64 func_00BF6270(void);

void func_00BE7FB0(s64 a0, s64 a1, s64 a2, s64 a3, f32 fa12, f32 fa13) {
    s64 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;
    volatile union { f32 f; s32 i; } f12 = { fa12 };
    volatile union { f32 f; s32 i; } f13 = { fa13 };

    s2 = a0;
    v0 = func_00BF6270();
    a0 = v0; v0 = func_00B2A420(a0);
    s1 = v0;
    v0 = (*(volatile s32 *) (u32) v0);
    a0 = s1;
    a1 = (s32) ((u32) v0 + 0x6cU);
    a2 = (s32) ((u32) v0 + 0x70U); func_00B35E10(a0, a1, a2);
    a0 = (*(volatile s32 *) (u32) s1);
    f13.f = (*(volatile f32 *) (u32) (a0 + 112));
    f12.f = (*(volatile f32 *) (u32) (a0 + 108)); v0 = func_009B3480(a0, a1, a2, a3, f12.f, f13.f);
    v1 = (*(volatile s32 *) (u32) s1);
    (*(volatile u16 *) (u32) (v1 + 44)) = (u16) v0;
    v0 = (*(volatile s32 *) (u32) s1);
    a1 = (*(volatile u16 *) (u32) (v0 + 44));
    a0 = (*(volatile u16 *) (u32) (v0 + 38)); v0 = func_009B3070(a0, a1);
    a3 = v0 & 0xffff;
    a0 = (s32) 0x10000U;
    v0 = (*(volatile s32 *) (u32) s1);
    v1 = 0x8001;
    a2 = (*(volatile u16 *) (u32) (v0 + 38));
    a1 = (*(volatile u16 *) (u32) (v0 + 44));
    v0 = (*(volatile s32 *) (u32) (v0 + 4));
    a1 = (s32) ((u32) a2 - (u32) a1);
    a0 = (s32) ((u32) a1 + (u32) a0);
    a0 = a0 & 0xffff;
    v1 = a0 < v1;
    v0 = (*(volatile u8 *) (u32) (v0 + 45));
    v0 = (s32) ((u32) v0 + (u32) v1);
    { s32 c_ = v0 >= 0; a0 = v0 & 0x1; if (c_) goto L_00BE805C; }
    if (a0 == 0) goto L_00BE805C;
    a0 = (s32) ((u32) a0 + 0xfffffffeU);
L_00BE805C:;
    v0 = a3 & 0xffff;
    at = v0 < 16384;
    if (at == 0) { v1 = (*(volatile s32 *) (u32) s2); goto L_00BE8128; }
    v1 = (*(volatile s32 *) (u32) s2);
    v0 = 1459;
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 == v0) goto L_00BE8118;
    v0 = 1445;
    if (v1 == v0) goto L_00BE8108;
    v0 = 1439;
    if (v1 == v0) goto L_00BE80F8;
    v0 = 1454;
    if (v1 == v0) goto L_00BE80E8;
    v0 = 1444;
    if (v1 == v0) goto L_00BE80D8;
    v0 = 1434;
    if (v1 == v0) goto L_00BE80C8;
    v0 = s0; goto L_00BE81E0;
L_00BE80C8:;
    if (a0 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 1435); goto L_00BE81DC; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1436); goto L_00BE81DC;
L_00BE80D8:;
    if (a0 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 1446); goto L_00BE81DC; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1447); goto L_00BE81DC;
L_00BE80E8:;
    if (a0 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 1455); goto L_00BE81DC; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1456); goto L_00BE81DC;
L_00BE80F8:;
    if (a0 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 1442); goto L_00BE81DC; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1443); goto L_00BE81DC;
L_00BE8108:;
    if (a0 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 1450); goto L_00BE81DC; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1451); goto L_00BE81DC;
L_00BE8118:;
    if (a0 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 1460); goto L_00BE81DC; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1461); goto L_00BE81DC;
L_00BE8128:;
    v0 = 1459;
    v1 = (*(volatile s32 *) (u32) (v1 + 4));
    v1 = (*(volatile u16 *) (u32) (v1 + 48));
    if (v1 == v0) goto L_00BE81D0;
    v0 = 1445;
    if (v1 == v0) goto L_00BE81C0;
    v0 = 1439;
    if (v1 == v0) goto L_00BE81B0;
    v0 = 1454;
    if (v1 == v0) goto L_00BE81A0;
    v0 = 1444;
    if (v1 == v0) goto L_00BE8190;
    v0 = 1434;
    if (v1 == v0) goto L_00BE8180;
    goto L_00BE81DC;
L_00BE8180:;
    if (a0 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 1437); goto L_00BE81DC; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1438); goto L_00BE81DC;
L_00BE8190:;
    if (a0 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 1448); goto L_00BE81DC; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1449); goto L_00BE81DC;
L_00BE81A0:;
    if (a0 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 1457); goto L_00BE81DC; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1458); goto L_00BE81DC;
L_00BE81B0:;
    if (a0 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 1440); goto L_00BE81DC; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1441); goto L_00BE81DC;
L_00BE81C0:;
    if (a0 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 1452); goto L_00BE81DC; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1453); goto L_00BE81DC;
L_00BE81D0:;
    if (a0 == 0) { s0 = (s64) ((u64) 0 + (u64) (s64) 1462); goto L_00BE81DC; }
    s0 = (s64) ((u64) 0 + (u64) (s64) 1463);
L_00BE81DC:;
    v0 = s0;
L_00BE81E0:;
    return;
}
