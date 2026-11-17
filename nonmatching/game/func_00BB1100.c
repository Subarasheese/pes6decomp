/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB1100(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 14;
    if (at == 0) goto L_00BB11A0;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x180U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb1130U) goto L_00BB1130; if (t_ == 0xbb1138U) goto L_00BB1138; if (t_ == 0xbb1140U) goto L_00BB1140; if (t_ == 0xbb1148U) goto L_00BB1148; if (t_ == 0xbb1150U) goto L_00BB1150; if (t_ == 0xbb1158U) goto L_00BB1158; if (t_ == 0xbb1160U) goto L_00BB1160; if (t_ == 0xbb1168U) goto L_00BB1168; if (t_ == 0xbb1170U) goto L_00BB1170; if (t_ == 0xbb1178U) goto L_00BB1178; if (t_ == 0xbb1180U) goto L_00BB1180; if (t_ == 0xbb1188U) goto L_00BB1188; if (t_ == 0xbb1190U) goto L_00BB1190; if (t_ == 0xbb1198U) goto L_00BB1198; }
L_00BB1130:;
    v0 = 671; goto L_00BB11A4;
L_00BB1138:;
    v0 = 672; goto L_00BB11A4;
L_00BB1140:;
    v0 = 665; goto L_00BB11A4;
L_00BB1148:;
    v0 = 666; goto L_00BB11A4;
L_00BB1150:;
    v0 = 673; goto L_00BB11A4;
L_00BB1158:;
    v0 = 674; goto L_00BB11A4;
L_00BB1160:;
    v0 = 621; goto L_00BB11A4;
L_00BB1168:;
    v0 = 622; goto L_00BB11A4;
L_00BB1170:;
    v0 = 623; goto L_00BB11A4;
L_00BB1178:;
    v0 = 605; goto L_00BB11A4;
L_00BB1180:;
    v0 = 606; goto L_00BB11A4;
L_00BB1188:;
    v0 = 607; goto L_00BB11A4;
L_00BB1190:;
    v0 = 670; goto L_00BB11A4;
L_00BB1198:;
    v0 = 669; goto L_00BB11A4;
L_00BB11A0:;
    v0 = 0xffff;
L_00BB11A4:;
    return;
}
