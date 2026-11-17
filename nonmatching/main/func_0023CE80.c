/* compiler: ee-gcc-2.9 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

s32 func_0023D190(s32, s32);
s32 memcpy(s32, s32, s32);

s32 func_0023CE80(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 v0 = 0, v1 = 0, s0 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0, s7 = 0, fp = 0;
    s32 hi = 0, lo = 0;
    s64 frame[70];
    s32 sp = (s32) (u32) frame;

    v0 = 139;
    fp = a0;
    s5 = a2;
    s4 = a3;
    { s64 m_ = (s64) (s32) a1 * (s64) (s32) v0; lo = (s32) m_; hi = (s32) (m_ >> 32); a3 = lo; }
    a2 = (s32) 0x590000U;
    a2 = (s32) ((u32) a2 + 0x1a90U);
    s3 = 0;
    s0 = (s32) ((u32) sp + 0xa0U);
    v0 = (s32) ((u32) a1 << 4);
    s1 = (s32) ((u32) a2 + (u32) a3);
    a0 = (s32) ((u32) v0 - (u32) a1);
    v1 = (s32) ((u32) a0 << 3);
    v0 = (s32) 0x590000U;
    v1 = (s32) ((u32) v1 - (u32) a0);
    v0 = (s32) ((u32) v0 + 0x2980U);
    v1 = (s32) ((u32) v1 << 8);
    s6 = (s32) ((u32) v0 + (u32) v1);
L_0023CEF4:;
    v0 = 1;
    if (s5 == v0) goto L_0023CF18;
    if (s5 == 0) goto L_0023CF10;
    goto L_0023CF20;
L_0023CF10:;
    s2 = s3; goto L_0023CF20;
L_0023CF18:;
    s2 = (*(volatile u8 *) (u32) (s1 + 7));
L_0023CF20:;
    v0 = 1;
    if (s4 == v0) goto L_0023CF60;
    if (s4 == 0) goto L_0023CF40;
    goto L_0023CF80;
L_0023CF40:;
    v0 = (s32) ((u32) s2 << 4);
    v1 = (s32) ((u32) v0 - (u32) s2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) s6 + (u32) v0);
    s7 = (s32) ((u32) v0 + 0x94U); goto L_0023CF80;
L_0023CF60:;
    v0 = (s32) ((u32) s2 << 4);
    v1 = (s32) ((u32) v0 - (u32) s2);
    v0 = (s32) ((u32) v1 << 3);
    v0 = (s32) ((u32) v0 - (u32) v1);
    v0 = (s32) ((u32) v0 << 3);
    v0 = (s32) ((u32) s6 + (u32) v0);
    s7 = (s32) ((u32) v0 + 0x68U);
L_0023CF80:;
    a0 = s0;
    a1 = s7;
    a2 = 36; v0 = memcpy(a0, a1, a2);
    s3 = (s32) ((u32) s3 + 0x1U);
    s1 = (s32) ((u32) s1 + 0x1U);
    v0 = s3 < 11;
    { s32 c_ = v0 != 0; s0 = (s32) ((u32) s0 + 0x24U); if (c_) goto L_0023CEF4; }
    a0 = fp;
    a1 = (s32) ((u32) sp + 0xa0U); v0 = func_0023D190(a0, a1);
    return v0;
}
