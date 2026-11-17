/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BC1210(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa36U);
    at = (u64) v0 < (u64) (s64) 17;
    if (at == 0) goto L_00BC12C8;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x20a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc1240U) goto L_00BC1240; if (t_ == 0xbc1248U) goto L_00BC1248; if (t_ == 0xbc1250U) goto L_00BC1250; if (t_ == 0xbc1258U) goto L_00BC1258; if (t_ == 0xbc1260U) goto L_00BC1260; if (t_ == 0xbc1268U) goto L_00BC1268; if (t_ == 0xbc1270U) goto L_00BC1270; if (t_ == 0xbc1278U) goto L_00BC1278; if (t_ == 0xbc1280U) goto L_00BC1280; if (t_ == 0xbc1288U) goto L_00BC1288; if (t_ == 0xbc1290U) goto L_00BC1290; if (t_ == 0xbc1298U) goto L_00BC1298; if (t_ == 0xbc12a0U) goto L_00BC12A0; if (t_ == 0xbc12a8U) goto L_00BC12A8; if (t_ == 0xbc12b0U) goto L_00BC12B0; if (t_ == 0xbc12b8U) goto L_00BC12B8; if (t_ == 0xbc12c0U) goto L_00BC12C0; }
L_00BC1240:;
    v0 = 87; goto L_00BC12CC;
L_00BC1248:;
    v0 = 78; goto L_00BC12CC;
L_00BC1250:;
    v0 = 84; goto L_00BC12CC;
L_00BC1258:;
    v0 = 85; goto L_00BC12CC;
L_00BC1260:;
    v0 = 79; goto L_00BC12CC;
L_00BC1268:;
    v0 = 80; goto L_00BC12CC;
L_00BC1270:;
    v0 = 81; goto L_00BC12CC;
L_00BC1278:;
    v0 = 82; goto L_00BC12CC;
L_00BC1280:;
    v0 = 83; goto L_00BC12CC;
L_00BC1288:;
    v0 = 38; goto L_00BC12CC;
L_00BC1290:;
    v0 = 43; goto L_00BC12CC;
L_00BC1298:;
    v0 = 46; goto L_00BC12CC;
L_00BC12A0:;
    v0 = 47; goto L_00BC12CC;
L_00BC12A8:;
    v0 = 48; goto L_00BC12CC;
L_00BC12B0:;
    v0 = 40; goto L_00BC12CC;
L_00BC12B8:;
    v0 = 49; goto L_00BC12CC;
L_00BC12C0:;
    v0 = 86; goto L_00BC12CC;
L_00BC12C8:;
    v0 = 0xffff;
L_00BC12CC:;
    return;
}
