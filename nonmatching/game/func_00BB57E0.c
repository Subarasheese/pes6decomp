/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB57E0(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = (s32) ((u32) a0 + 0xfffffe9aU);
    at = (u64) v0 < (u64) (s64) 34;
    if (at == 0) goto L_00BB590C;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x7a0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb580cU) goto L_00BB580C; if (t_ == 0xbb5814U) goto L_00BB5814; if (t_ == 0xbb581cU) goto L_00BB581C; if (t_ == 0xbb5824U) goto L_00BB5824; if (t_ == 0xbb582cU) goto L_00BB582C; if (t_ == 0xbb5834U) goto L_00BB5834; if (t_ == 0xbb583cU) goto L_00BB583C; if (t_ == 0xbb5844U) goto L_00BB5844; if (t_ == 0xbb584cU) goto L_00BB584C; if (t_ == 0xbb5854U) goto L_00BB5854; if (t_ == 0xbb585cU) goto L_00BB585C; if (t_ == 0xbb5864U) goto L_00BB5864; if (t_ == 0xbb586cU) goto L_00BB586C; if (t_ == 0xbb5874U) goto L_00BB5874; if (t_ == 0xbb587cU) goto L_00BB587C; if (t_ == 0xbb5884U) goto L_00BB5884; if (t_ == 0xbb588cU) goto L_00BB588C; if (t_ == 0xbb5894U) goto L_00BB5894; if (t_ == 0xbb589cU) goto L_00BB589C; if (t_ == 0xbb58a4U) goto L_00BB58A4; if (t_ == 0xbb58acU) goto L_00BB58AC; if (t_ == 0xbb58b4U) goto L_00BB58B4; if (t_ == 0xbb58bcU) goto L_00BB58BC; if (t_ == 0xbb58c4U) goto L_00BB58C4; if (t_ == 0xbb58ccU) goto L_00BB58CC; if (t_ == 0xbb58d4U) goto L_00BB58D4; if (t_ == 0xbb58dcU) goto L_00BB58DC; if (t_ == 0xbb58e4U) goto L_00BB58E4; if (t_ == 0xbb58ecU) goto L_00BB58EC; if (t_ == 0xbb58f4U) goto L_00BB58F4; if (t_ == 0xbb58fcU) goto L_00BB58FC; if (t_ == 0xbb5904U) goto L_00BB5904; if (t_ == 0xbb590cU) goto L_00BB590C; }
L_00BB580C:;
    v0 = 1434; goto L_00BB5910;
L_00BB5814:;
    v0 = 1435; goto L_00BB5910;
L_00BB581C:;
    v0 = 1436; goto L_00BB5910;
L_00BB5824:;
    v0 = 1437; goto L_00BB5910;
L_00BB582C:;
    v0 = 1438; goto L_00BB5910;
L_00BB5834:;
    v0 = 1439; goto L_00BB5910;
L_00BB583C:;
    v0 = 1440; goto L_00BB5910;
L_00BB5844:;
    v0 = 1441; goto L_00BB5910;
L_00BB584C:;
    v0 = 1442; goto L_00BB5910;
L_00BB5854:;
    v0 = 1443; goto L_00BB5910;
L_00BB585C:;
    v0 = 1444; goto L_00BB5910;
L_00BB5864:;
    v0 = 1445; goto L_00BB5910;
L_00BB586C:;
    v0 = 1446; goto L_00BB5910;
L_00BB5874:;
    v0 = 1447; goto L_00BB5910;
L_00BB587C:;
    v0 = 1448; goto L_00BB5910;
L_00BB5884:;
    v0 = 1449; goto L_00BB5910;
L_00BB588C:;
    v0 = 1450; goto L_00BB5910;
L_00BB5894:;
    v0 = 1451; goto L_00BB5910;
L_00BB589C:;
    v0 = 1452; goto L_00BB5910;
L_00BB58A4:;
    v0 = 1453; goto L_00BB5910;
L_00BB58AC:;
    v0 = 1454; goto L_00BB5910;
L_00BB58B4:;
    v0 = 1455; goto L_00BB5910;
L_00BB58BC:;
    v0 = 1456; goto L_00BB5910;
L_00BB58C4:;
    v0 = 1457; goto L_00BB5910;
L_00BB58CC:;
    v0 = 1458; goto L_00BB5910;
L_00BB58D4:;
    v0 = 1459; goto L_00BB5910;
L_00BB58DC:;
    v0 = 1460; goto L_00BB5910;
L_00BB58E4:;
    v0 = 1461; goto L_00BB5910;
L_00BB58EC:;
    v0 = 1462; goto L_00BB5910;
L_00BB58F4:;
    v0 = 1463; goto L_00BB5910;
L_00BB58FC:;
    v0 = 1464; goto L_00BB5910;
L_00BB5904:;
    v0 = 1465; goto L_00BB5910;
L_00BB590C:;
    v0 = 0xffff;
L_00BB5910:;
    return;
}
