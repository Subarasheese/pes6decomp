/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 Pes6SaveData_GetUnavailableFlag(void);
s32 func_00223770(s32, s32, s32, s32);
s32 func_00223960(s32);
s32 func_00223AE0(void);

s32 func_0021F710(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0, s1 = 0;

    s1 = a0;
    s0 = s1 & 0xffff;
    if (s0 < 0) { v0 = s0 < 57; goto L_0021F740; }
    at = s0 < 57;
    if (at != 0) { v1 = s1 & 0xffff; goto L_0021F770; }
    v0 = s0 < 57;
L_0021F740:;
    if (v0 != 0) { v0 = s0 < 204; goto L_0021F758; }
    at = s0 < 64;
    if (at != 0) goto L_0021F76C;
    v0 = s0 < 204;
L_0021F758:;
    if (v0 != 0) { v0 = s0 < 64; goto L_0021F78C; }
    at = s0 < 221;
    if (at == 0) goto L_0021F788;
L_0021F76C:;
    v1 = s1 & 0xffff;
L_0021F770:;
    v0 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 + 0xfffff3aaU);
    v1 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s16 *) (u32) v0); goto L_0021F980;
L_0021F788:;
    v0 = s0 < 64;
L_0021F78C:;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + 0xfffffedaU); goto L_0021F804; }
    at = s0 < 204;
    if (at == 0) goto L_0021F800;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + 0xfffffedaU); goto L_0021F7E0; }
    at = s0 < 204;
    if (at == 0) goto L_0021F7DC;
    v0 = func_00223AE0();
    a0 = (s32) ((u32) s0 + 0xffffffc0U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 + (u32) v1); goto L_0021F7F8;
L_0021F7DC:;
    v0 = (s32) ((u32) s0 + 0xfffffedaU);
L_0021F7E0:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = 0; goto L_0021F7F8; }
    a0 = s1; v0 = func_00223960(a0);
    v0 = (*(volatile s32 *) (u32) v0);
L_0021F7F8:;
    v0 = (*(volatile s32 *) (u32) (v0 + 64)); goto L_0021F980;
L_0021F800:;
    v0 = (s32) ((u32) s0 + 0xfffffedaU);
L_0021F804:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { v0 = s0 < 275; goto L_0021F888; }
    v0 = s0 < 64;
    if (v0 != 0) { v0 = (s32) ((u32) s0 + 0xfffffedaU); goto L_0021F854; }
    at = s0 < 204;
    if (at == 0) goto L_0021F850;
    v0 = func_00223AE0();
    a0 = (s32) ((u32) s0 + 0xffffffc0U);
    v1 = (s32) ((u32) a0 << 2);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 1);
    v1 = (s32) ((u32) v1 + (u32) a0);
    v1 = (s32) ((u32) v1 << 3);
    s0 = (s32) ((u32) v0 + (u32) v1); goto L_0021F86C;
L_0021F850:;
    v0 = (s32) ((u32) s0 + 0xfffffedaU);
L_0021F854:;
    at = (u64) v0 < (u64) (s64) 2;
    if (at == 0) { s0 = 0; goto L_0021F86C; }
    a0 = s1; v0 = func_00223960(a0);
    s0 = (*(volatile s32 *) (u32) v0);
L_0021F86C:;
    a0 = s1; v0 = func_00223770(a0, a1, a2, a3);
    v1 = 3;
    if (v0 != v1) { v0 = (*(volatile s32 *) (u32) (s0 + 60)); goto L_0021F980; }
    v0 = (*(volatile s32 *) (u32) (s0 + 64)); goto L_0021F980;
L_0021F888:;
    if (v0 != 0) { v0 = s0 < 254; goto L_0021F8A8; }
    at = s0 < 280;
    if (at == 0) goto L_0021F8A4;
    v0 = 105; goto L_0021F980;
L_0021F8A4:;
    v0 = s0 < 254;
L_0021F8A8:;
    if (v0 != 0) { v0 = s0 < 270; goto L_0021F8C0; }
    at = s0 < 270;
    if (at != 0) { v1 = s1 & 0xffff; goto L_0021F920; }
    v0 = s0 < 270;
L_0021F8C0:;
    if (v0 != 0) { v0 = s0 < 274; goto L_0021F8D8; }
    at = s0 < 272;
    if (at != 0) goto L_0021F91C;
    v0 = s0 < 274;
L_0021F8D8:;
    if (v0 != 0) { v0 = s0 < 281; goto L_0021F8F0; }
    at = s0 < 281;
    if (at != 0) goto L_0021F91C;
    v0 = s0 < 281;
L_0021F8F0:;
    if (v0 != 0) { v0 = s0 < 272; goto L_0021F908; }
    at = s0 < 296;
    if (at != 0) goto L_0021F91C;
    v0 = s0 < 272;
L_0021F908:;
    if (v0 != 0) { v0 = s0 < 221; goto L_0021F940; }
    at = s0 < 274;
    if (at == 0) goto L_0021F93C;
L_0021F91C:;
    v1 = s1 & 0xffff;
L_0021F920:;
    v0 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 + 0xfffff3acU);
    v1 = (s32) ((u32) v1 << 4);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s16 *) (u32) v0);
    v0 = (s32) ((u32) v0 + 0x73U); goto L_0021F980;
L_0021F93C:;
    v0 = s0 < 221;
L_0021F940:;
    if (v0 != 0) { v0 = 458; goto L_0021F980; }
    at = s0 < 254;
    if (at == 0) goto L_0021F97C;
    v0 = Pes6SaveData_GetUnavailableFlag();
    if (v0 == 0) goto L_0021F96C;
    v0 = (s32) ((u32) s0 + 0x47U); goto L_0021F980;
L_0021F96C:;
    v0 = (s32) 0x3e0000U;
    v0 = (*(volatile s16 *) (u32) (v0 + 380));
    v0 = (s32) ((u32) v0 + 0x73U); goto L_0021F980;
L_0021F97C:;
    v0 = 458;
L_0021F980:;
    return v0;
}
