/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s64 func_00226240(void);
s64 func_00226710(void);
s64 func_0094C7B0(s64, s64, s64, s64);
s64 func_0099B4B0(s64, s64, s64, s64);

s64 func_0022F940(s64 a0, s64 a1, s64 a2, s64 a3) {
    s64 at = 0, v0 = 0, v1 = 0;
    s64 gp = 0x3ef370;

    v1 = a0 & 0xff;
    v0 = 14;
    if (v1 == v0) goto L_0022FB68;
    v0 = 4;
    if (v1 == v0) { v0 = (*(volatile s32 *) (u32) (gp + -31680)); goto L_0022FAB4; }
    v0 = 2;
    if (v1 == v0) goto L_0022F9F0;
    v0 = 1;
    if (v1 == v0) goto L_0022F980;
    v0 = -1; goto L_0022FCA8;
L_0022F980:;
    v0 = func_00226710();
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0xfffffff5U);
    at = (u64) v0 < (u64) (s64) 17;
    if (at == 0) { v0 = -1; goto L_0022FCB4; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff85b0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x22f9b8U) goto L_0022F9B8; if (t_ == 0x22f9c0U) goto L_0022F9C0; if (t_ == 0x22f9c8U) goto L_0022F9C8; if (t_ == 0x22f9d0U) goto L_0022F9D0; if (t_ == 0x22f9d8U) goto L_0022F9D8; if (t_ == 0x22f9e0U) goto L_0022F9E0; if (t_ == 0x22f9e8U) goto L_0022F9E8; }
L_0022F9B8:;
    v0 = 160; goto L_0022FCB4;
L_0022F9C0:;
    v0 = 161; goto L_0022FCB4;
L_0022F9C8:;
    v0 = 156; goto L_0022FCB4;
L_0022F9D0:;
    v0 = 162; goto L_0022FCB4;
L_0022F9D8:;
    v0 = 158; goto L_0022FCB4;
L_0022F9E0:;
    v0 = 157; goto L_0022FCB4;
L_0022F9E8:;
    v0 = 159; goto L_0022FCB4;
L_0022F9F0:;
    v0 = func_00226710();
    v1 = v0 & 0xff;
    v0 = 58;
    if (v1 == v0) { v0 = 150; goto L_0022FCB4; }
    v0 = 8;
    if (v1 == v0) { v0 = 149; goto L_0022FCB4; }
    v0 = 7;
    if (v1 == v0) goto L_0022FAA8;
    v0 = 6;
    if (v1 == v0) goto L_0022FAA8;
    v0 = 5;
    if (v1 == v0) goto L_0022FAA8;
    v0 = 4;
    if (v1 == v0) { v0 = 146; goto L_0022FCB4; }
    v0 = 3;
    if (v1 == v0) { v0 = 145; goto L_0022FCB4; }
    v0 = 2;
    if (v1 == v0) { v0 = 144; goto L_0022FCB4; }
    v0 = 10;
    if (v1 == v0) { v0 = 147; goto L_0022FCB4; }
    v0 = 1;
    if (v1 == v0) goto L_0022FA9C;
    v0 = 9;
    if (v1 == v0) { v0 = 148; goto L_0022FCB4; }
    if (v1 == 0) goto L_0022FA90;
    goto L_0022FCB0;
L_0022FA90:;
    v0 = 148;
    goto L_0022FCB4;
L_0022FA9C:;
    v0 = 147;
    goto L_0022FCB4;
L_0022FAA8:;
    v0 = 149;
    goto L_0022FCB4;
L_0022FAB4:;
    v0 = (*(volatile u32 *) (u32) (v0 + 32));
    v0 = v0 & 0x4;
    if (v0 == 0) goto L_0022FACC;
    v0 = 171; goto L_0022FCB4;
L_0022FACC:;
    v0 = func_00226710();
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0xffffffe4U);
    at = (u64) v0 < (u64) (s64) 12;
    if (at == 0) { v0 = 167; goto L_0022FCB4; }
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8580U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x22f9b8U) goto L_0022F9B8; if (t_ == 0x22f9c0U) goto L_0022F9C0; if (t_ == 0x22f9c8U) goto L_0022F9C8; if (t_ == 0x22f9d0U) goto L_0022F9D0; if (t_ == 0x22f9d8U) goto L_0022F9D8; if (t_ == 0x22f9e0U) goto L_0022F9E0; if (t_ == 0x22f9e8U) goto L_0022F9E8; if (t_ == 0x22fb04U) goto L_0022FB04; if (t_ == 0x22fb0cU) goto L_0022FB0C; if (t_ == 0x22fb14U) goto L_0022FB14; if (t_ == 0x22fb1cU) goto L_0022FB1C; if (t_ == 0x22fb3cU) goto L_0022FB3C; if (t_ == 0x22fb44U) goto L_0022FB44; if (t_ == 0x22fb4cU) goto L_0022FB4C; if (t_ == 0x22fb54U) goto L_0022FB54; }
L_0022FB04:;
    v0 = 165; goto L_0022FCB4;
L_0022FB0C:;
    v0 = 164; goto L_0022FCB4;
L_0022FB14:;
    v0 = 168; goto L_0022FCB4;
L_0022FB1C:;
    v0 = func_0099B4B0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { v0 = 163; goto L_0022FB34; }
    v0 = 168;
L_0022FB34:;
    goto L_0022FCB4;
L_0022FB3C:;
    v0 = 167; goto L_0022FCB4;
L_0022FB44:;
    v0 = 166; goto L_0022FCB4;
L_0022FB4C:;
    v0 = 169; goto L_0022FCB4;
L_0022FB54:;
    v0 = 170; goto L_0022FCB4;
    v0 = 167;
    goto L_0022FCB4;
L_0022FB68:;
    v0 = func_0094C7B0(a0, a1, a2, a3);
    if (v0 != 0) goto L_0022FB8C;
    v0 = (*(volatile s32 *) (u32) (gp + -31680));
    v0 = (*(volatile u32 *) (u32) (v0 + 32));
    v0 = v0 & 0x100;
    if (v0 == 0) goto L_0022FBD8;
L_0022FB8C:;
    v0 = func_0094C7B0(a0, a1, a2, a3);
    v1 = 1;
    if (v0 != v1) { v1 = (*(volatile s32 *) (u32) (gp + -31680)); goto L_0022FBB8; }
    v0 = (*(volatile s32 *) (u32) (gp + -31680));
    v0 = (*(volatile u32 *) (u32) (v0 + 32));
    v0 = v0 & 0x100;
    if (v0 == 0) goto L_0022FBD8;
    v1 = (*(volatile s32 *) (u32) (gp + -31680));
L_0022FBB8:;
    v0 = (s32) 0x4000000U;
    v1 = (*(volatile u32 *) (u32) (v1 + 32));
    v0 = v1 & v0;
    if (v0 == 0) goto L_0022FC14;
    v0 = v1 & 0x8;
    if (v0 != 0) goto L_0022FC14;
L_0022FBD8:;
    v0 = func_00226240();
    v1 = v0 & 0xff;
    v0 = 4;
    if (v1 == v0) { v0 = 154; goto L_0022FCB4; }
    v0 = func_00226710();
    v1 = v0 & 0xff;
    v0 = 41;
    if (v1 != v0) { v0 = 174; goto L_0022FCB4; }
    v0 = 154;
    goto L_0022FCB4;
L_0022FC14:;
    v0 = func_00226710();
    v0 = v0 & 0xff;
    v0 = (s32) ((u32) v0 + 0xffffffd8U);
    at = (u64) v0 < (u64) (s64) 18;
    if (at == 0) goto L_0022FC84;
    v1 = (s32) 0x3e0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8530U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x22fc4cU) goto L_0022FC4C; if (t_ == 0x22fc54U) goto L_0022FC54; if (t_ == 0x22fc5cU) goto L_0022FC5C; if (t_ == 0x22fc64U) goto L_0022FC64; if (t_ == 0x22fc6cU) goto L_0022FC6C; if (t_ == 0x22fc74U) goto L_0022FC74; if (t_ == 0x22fc7cU) goto L_0022FC7C; }
L_0022FC4C:;
    v0 = 151; goto L_0022FCB4;
L_0022FC54:;
    v0 = 155; goto L_0022FCB4;
L_0022FC5C:;
    v0 = 152; goto L_0022FCB4;
L_0022FC64:;
    v0 = 153; goto L_0022FCB4;
L_0022FC6C:;
    v0 = 172; goto L_0022FCB4;
L_0022FC74:;
    v0 = 175; goto L_0022FCB4;
L_0022FC7C:;
    v0 = 173; goto L_0022FCB4;
L_0022FC84:;
    v0 = func_00226240();
    v1 = v0 & 0xff;
    v0 = 4;
    if (v1 != v0) { v0 = 174; goto L_0022FCA0; }
    v0 = 154;
L_0022FCA0:;
    goto L_0022FCB4;
L_0022FCA8:;
    goto L_0022FCB4;
L_0022FCB0:;
    v0 = -1;
L_0022FCB4:;
    return v0;
}
