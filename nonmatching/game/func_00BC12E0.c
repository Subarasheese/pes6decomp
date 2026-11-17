/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BC12E0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa36U);
    at = (u64) v0 < (u64) (s64) 16;
    if (at == 0) goto L_00BC1390;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x20f0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc1310U) goto L_00BC1310; if (t_ == 0xbc1318U) goto L_00BC1318; if (t_ == 0xbc1320U) goto L_00BC1320; if (t_ == 0xbc1328U) goto L_00BC1328; if (t_ == 0xbc1330U) goto L_00BC1330; if (t_ == 0xbc1338U) goto L_00BC1338; if (t_ == 0xbc1340U) goto L_00BC1340; if (t_ == 0xbc1348U) goto L_00BC1348; if (t_ == 0xbc1350U) goto L_00BC1350; if (t_ == 0xbc1358U) goto L_00BC1358; if (t_ == 0xbc1360U) goto L_00BC1360; if (t_ == 0xbc1368U) goto L_00BC1368; if (t_ == 0xbc1370U) goto L_00BC1370; if (t_ == 0xbc1378U) goto L_00BC1378; if (t_ == 0xbc1380U) goto L_00BC1380; if (t_ == 0xbc1388U) goto L_00BC1388; }
L_00BC1310:;
    v0 = 16; goto L_00BC1394;
L_00BC1318:;
    v0 = 34; goto L_00BC1394;
L_00BC1320:;
    v0 = 36; goto L_00BC1394;
L_00BC1328:;
    v0 = 37; goto L_00BC1394;
L_00BC1330:;
    v0 = 0; goto L_00BC1394;
L_00BC1338:;
    v0 = 38; goto L_00BC1394;
L_00BC1340:;
    v0 = 42; goto L_00BC1394;
L_00BC1348:;
    v0 = 43; goto L_00BC1394;
L_00BC1350:;
    v0 = 45; goto L_00BC1394;
L_00BC1358:;
    v0 = 44; goto L_00BC1394;
L_00BC1360:;
    v0 = 39; goto L_00BC1394;
L_00BC1368:;
    v0 = 22; goto L_00BC1394;
L_00BC1370:;
    v0 = 14; goto L_00BC1394;
L_00BC1378:;
    v0 = 15; goto L_00BC1394;
L_00BC1380:;
    v0 = 13; goto L_00BC1394;
L_00BC1388:;
    v0 = 10; goto L_00BC1394;
L_00BC1390:;
    v0 = 0xffff;
L_00BC1394:;
    return;
}
