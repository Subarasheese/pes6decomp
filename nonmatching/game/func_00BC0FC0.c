/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BC0FC0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa36U);
    at = (u64) v0 < (u64) (s64) 15;
    if (at == 0) goto L_00BC1068;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x1fd0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbc0ff0U) goto L_00BC0FF0; if (t_ == 0xbc0ff8U) goto L_00BC0FF8; if (t_ == 0xbc1000U) goto L_00BC1000; if (t_ == 0xbc1008U) goto L_00BC1008; if (t_ == 0xbc1010U) goto L_00BC1010; if (t_ == 0xbc1018U) goto L_00BC1018; if (t_ == 0xbc1020U) goto L_00BC1020; if (t_ == 0xbc1028U) goto L_00BC1028; if (t_ == 0xbc1030U) goto L_00BC1030; if (t_ == 0xbc1038U) goto L_00BC1038; if (t_ == 0xbc1040U) goto L_00BC1040; if (t_ == 0xbc1048U) goto L_00BC1048; if (t_ == 0xbc1050U) goto L_00BC1050; if (t_ == 0xbc1058U) goto L_00BC1058; if (t_ == 0xbc1060U) goto L_00BC1060; }
L_00BC0FF0:;
    v0 = 12; goto L_00BC106C;
L_00BC0FF8:;
    v0 = 11; goto L_00BC106C;
L_00BC1000:;
    v0 = 14; goto L_00BC106C;
L_00BC1008:;
    v0 = 35; goto L_00BC106C;
L_00BC1010:;
    v0 = 36; goto L_00BC106C;
L_00BC1018:;
    v0 = 37; goto L_00BC106C;
L_00BC1020:;
    v0 = 0; goto L_00BC106C;
L_00BC1028:;
    v0 = 38; goto L_00BC106C;
L_00BC1030:;
    v0 = 41; goto L_00BC106C;
L_00BC1038:;
    v0 = 42; goto L_00BC106C;
L_00BC1040:;
    v0 = 43; goto L_00BC106C;
L_00BC1048:;
    v0 = 45; goto L_00BC106C;
L_00BC1050:;
    v0 = 44; goto L_00BC106C;
L_00BC1058:;
    v0 = 39; goto L_00BC106C;
L_00BC1060:;
    v0 = 15; goto L_00BC106C;
L_00BC1068:;
    v0 = 0xffff;
L_00BC106C:;
    return;
}
