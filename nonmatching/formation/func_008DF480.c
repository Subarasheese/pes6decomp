/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_008B9660(void);
void func_008CB650(s64, s64, s64, s64);
void func_008E5200(s64, s64, s64, s64, s64, s64, s64, s64);

void func_008DF480(s64 a0, s64 a1, s64 a2, s64 a3, s64 a4, s64 a5, s64 a6, s64 a7) {
    s64 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0;

    v1 = 2;
    s2 = a0;
    a0 = a1 & 0xff;
    s1 = a2;
    a1 = 10;
    { s32 c_ = a0 == v1; s0 = 9; if (c_) goto L_008DF544; }
    v0 = 1;
    if (a0 == v0) goto L_008DF51C;
    if (a0 == 0) { a1 = v1; goto L_008DF514; }
    v0 = 4;
    if (a0 == v0) { a1 = s0; goto L_008DF50C; }
    v0 = 3;
    if (a0 == v0) goto L_008DF4E4;
    v0 = 10; goto L_008DF550;
L_008DF4E4:;
    v0 = func_008B9660();
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    v0 = 8;
    if (v1 != v0) { s0 = 1; goto L_008DF504; }
    s0 = 0;
L_008DF504:;
    a1 = 0; goto L_008DF54C;
L_008DF50C:;
    s0 = 0; goto L_008DF54C;
L_008DF514:;
    s0 = 3; goto L_008DF54C;
L_008DF51C:;
    v0 = func_008B9660();
    v1 = (s64) ((u64) v0 << 48);
    v1 = v1 >> 48;
    v0 = 8;
    if (v1 != v0) { s0 = 2; goto L_008DF53C; }
    s0 = 0;
L_008DF53C:;
    a1 = 3; goto L_008DF54C;
L_008DF544:;
    s0 = 4;
    a1 = 6;
L_008DF54C:;
    v0 = 10;
L_008DF550:;
    if (a1 != v0) { a0 = (s32) ((u32) s2 + 0x129cU); goto L_008DF56C; }
    a1 = (*(volatile u8 *) (u32) (s2 + 5243));
    a0 = (s32) ((u32) s2 + 0x129cU); func_008E5200(a0, a1, a2, a3, a4, a5, a6, a7);
    goto L_008DF574;
L_008DF56C:;
    func_008E5200(a0, a1, a2, a3, a4, a5, a6, a7);
L_008DF574:;
    if (s1 != 0) { v0 = 9; goto L_008DF590; }
    v0 = 4;
    if (s0 == v0) goto L_008DF58C;
    s0 = 0;
L_008DF58C:;
    v0 = 9;
L_008DF590:;
    if (s0 != v0) { a0 = (s32) ((u32) s2 + 0xb0cU); goto L_008DF5AC; }
    a1 = (*(volatile u8 *) (u32) (s2 + 2833));
    a0 = (s32) ((u32) s2 + 0xb0cU); func_008CB650(a0, a1, a2, a3);
    goto L_008DF5B8;
L_008DF5AC:;
    a1 = s0; func_008CB650(a0, a1, a2, a3);
L_008DF5B8:;
    return;
}
