/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6Heap_Alloc(s32, s32, s32, s32);
s32 Pes6PauseEvSet_Start(s32, s32, s32);
void SD_call(s32);
void func_001A5BE0(s32);
void func_00262BC0(s32, s32);
s32 func_002640B0(void);
void func_0026AED0(s32, s32, s32, s32);
s32 func_0026B250(s32, s32, s32, s32);
void func_002CBAF0(s32, s32, s32, s32);
void func_0099C950(s32, s32, s32, s32);
void func_00C82F80(s32, s32, s32, s32);

void func_008FF2C0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    v0 = (s32) 0x3b0000U;
    v0 = (*(volatile u8 *) (u32) (v0 + -5742));
    { s32 c_ = v0 == 0; s0 = a0; if (c_) goto L_008FF2E4; }
    v0 = 0; goto L_008FF3DC;
L_008FF2E4:;
    func_0026AED0(a0, a1, a2, a3);
    a0 = 1;
    a1 = 36; v0 = Pes6Heap_Alloc(a0, a1, a2, a3);
    v1 = (s32) 0x3b0000U;
    a0 = (s32) 0x84020000U;
    (*(volatile u32 *) (u32) (v1 + -5680)) = (u32) v0;
    a0 = a0 | 0x8400; SD_call(a0);
    v0 = (s32) ((u32) s0 << 2);
    a0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v0 + (u32) s0);
    a0 = (s32) ((u32) a0 + 0x2801U);
    a1 = (s32) ((u32) v1 << 3);
    v0 = (s32) 0x3b0000U;
    a0 = (s32) ((u32) a0 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) (v0 + -5680));
    a0 = (*(volatile u8 *) (u32) a0);
    v0 = (s32) 0x3b0000U;
    (*(volatile u32 *) (u32) (v1 + 20)) = (u32) a0;
    v0 = (*(volatile s8 *) (u32) (v0 + -5776));
    v0 = (s32) ((u32) v0 + 0xfffffffbU);
    at = (u64) v0 < (u64) (s64) 6;
    if (at == 0) goto L_008FF36C;
    v0 = (s32) 0x3b0000U;
    v1 = 1;
    v0 = (*(volatile s32 *) (u32) (v0 + -5680));
    (*(volatile u32 *) (u32) (v0 + 8)) = (u32) v1; v0 = func_002640B0();
    a0 = v0;
    a1 = 5; func_00262BC0(a0, a1);
L_008FF36C:;
    a0 = (s32) 0x900000U;
    a1 = (s32) 0x900000U;
    a0 = (s32) ((u32) a0 + 0xffffefa0U);
    a1 = (s32) ((u32) a1 + 0xffffef10U);
    a2 = 0; v0 = Pes6PauseEvSet_Start(a0, a1, a2);
    v1 = (s32) 0x3b0000U;
    v1 = (*(volatile s32 *) (u32) (v1 + -5680));
    (*(volatile u32 *) (u32) (v1 + 16)) = (u32) v0; func_0099C950(a0, a1, a2, a3);
    func_00C82F80(a0, a1, a2, a3);
    v0 = func_0026B250(a0, a1, a2, a3);
    v1 = 3;
    if (v0 == v1) { a0 = 3; goto L_008FF3C8; }
    v0 = func_0026B250(a0, a1, a2, a3);
    v1 = 4;
    if (v0 != v1) { v0 = 0; goto L_008FF3DC; }
    a0 = 3;
L_008FF3C8:;
    func_001A5BE0(a0);
    a0 = 10; func_002CBAF0(a0, a1, a2, a3);
    v0 = 0;
L_008FF3DC:;
    return;
}
