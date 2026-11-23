/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00207BE0(s32);
s32 func_00207D10(s32);
s32 func_00207D80(s32, s32);
void func_00209A00(s32, s32, s32);

void func_00910100(s32 a0, s32 a1, s32 a2) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;
    volatile union { f32 f; s32 i; } f0 = { 0 };
    volatile union { f32 f; s32 i; } f1 = { 0 };
    s32 fcc = 0;

    s0 = a0;
    a0 = (*(volatile s32 *) (u32) (a0 + 4));
    v1 = (*(volatile u16 *) (u32) (a0 + 48));
    a1 = (u64) v1 < (u64) (s64) 1434;
    if (a1 != 0) { a1 = 1090; goto L_00910AE8; }
    a1 = (s32) 0x3b0000U;
    at = (s32) 0xfffe0000U;
    a1 = (*(volatile s32 *) (u32) (a1 + -852));
    at = at | 0xff1d;
    a1 = (s32) ((u32) a1 + (u32) at);
    at = (u64) a1 < (u64) (s64) 25;
    if (at == 0) { ; goto L_00910B48; }
    a2 = (s32) 0x930000U;
    a1 = (s32) ((u32) a1 << 2);
    a2 = (s32) ((u32) a2 + 0xffffe130U);
    a1 = (s32) ((u32) a1 + (u32) a2);
    a1 = (*(volatile s32 *) (u32) a1);
    { u32 t_ = (u32) a1; ; if (t_ == 0x910160U) goto L_00910160; if (t_ == 0x9102c4U) goto L_009102C4; if (t_ == 0x9102ccU) goto L_009102CC; if (t_ == 0x910470U) goto L_00910470; if (t_ == 0x9106e8U) goto L_009106E8; if (t_ == 0x910724U) goto L_00910724; if (t_ == 0x910818U) goto L_00910818; if (t_ == 0x910a54U) goto L_00910A54; if (t_ == 0x910b44U) goto L_00910B44; }
L_00910160:;
    v1 = (s32) ((u32) v1 + 0xfffffa66U);
    at = (u64) v1 < (u64) (s64) 28;
    if (at == 0) goto L_009102A8;
    a1 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + 0xffffe0c0U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x910160U) goto L_00910160; if (t_ == 0x91018cU) goto L_0091018C; if (t_ == 0x9101b8U) goto L_009101B8; if (t_ == 0x9101e0U) goto L_009101E0; if (t_ == 0x910208U) goto L_00910208; if (t_ == 0x910230U) goto L_00910230; if (t_ == 0x910258U) goto L_00910258; if (t_ == 0x910280U) goto L_00910280; if (t_ == 0x9102c4U) goto L_009102C4; if (t_ == 0x9102ccU) goto L_009102CC; if (t_ == 0x910470U) goto L_00910470; if (t_ == 0x9106e8U) goto L_009106E8; if (t_ == 0x910724U) goto L_00910724; if (t_ == 0x910818U) goto L_00910818; if (t_ == 0x910a54U) goto L_00910A54; if (t_ == 0x910b44U) goto L_00910B44; }
L_0091018C:;
    v1 = (s32) 0x43860000U;
    v1 = v1 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x41f00000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_009101B8:;
    v1 = (s32) 0x43870000U;
    v1 = v1 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00910B44;
L_009101E0:;
    v1 = (s32) 0x43870000U;
    v1 = v1 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00910B44;
L_00910208:;
    v1 = (s32) 0x43870000U;
    v1 = v1 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00910B44;
L_00910230:;
    v1 = (s32) 0x43870000U;
    v1 = v1 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00910B44;
L_00910258:;
    v1 = (s32) 0x43870000U;
    v1 = v1 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00910B44;
L_00910280:;
    v1 = (s32) 0x43870000U;
    v1 = v1 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00910B44;
L_009102A8:;
    v0 = func_00207D10(a0);
    if (v0 == 0) goto L_00910B44;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u32 *) (u32) (v1 + 56)) = (u32) 0; goto L_00910B44;
L_009102C4:;
    (*(volatile u32 *) (u32) (s0 + 228)) = (u32) 0; goto L_00910B44;
L_009102CC:;
    a1 = 1437;
    if (v1 == a1) { a1 = 64; goto L_00910434; }
    a1 = 1459;
    if (v1 == a1) { a1 = 64; goto L_00910418; }
    a1 = 1438;
    if (v1 == a1) goto L_00910414;
    a1 = 1436;
    if (v1 == a1) goto L_00910414;
    a1 = 1450;
    if (v1 == a1) { f1.f = (*(volatile f32 *) (u32) (a0 + 56)); goto L_009103F4; }
    a1 = 1448;
    if (v1 == a1) { f1.f = (*(volatile f32 *) (u32) (a0 + 56)); goto L_009103D0; }
    a1 = 1446;
    if (v1 == a1) { f1.f = (*(volatile f32 *) (u32) (a0 + 56)); goto L_009103B0; }
    a1 = 1442;
    if (v1 == a1) { f1.f = (*(volatile f32 *) (u32) (a0 + 56)); goto L_0091038C; }
    a1 = 1435;
    if (v1 == a1) { f1.f = (*(volatile f32 *) (u32) (a0 + 56)); goto L_0091036C; }
    a1 = 1434;
    if (v1 == a1) { f1.f = (*(volatile f32 *) (u32) (a0 + 56)); goto L_0091034C; }
    goto L_00910B44;
L_0091034C:;
    v1 = (s32) 0x42800000U;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00910B44;
L_0091036C:;
    v1 = (s32) 0x42800000U;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00910B44;
L_0091038C:;
    v1 = (s32) 0x42ba0000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x41f00000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_009103B0:;
    v1 = (s32) 0x422c0000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00910B44;
L_009103D0:;
    v1 = (s32) 0x42aa0000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x42280000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_009103F4:;
    v1 = (s32) 0x427c0000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00910B44;
L_00910414:;
    a1 = 64;
L_00910418:;
    v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00910B44;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u32 *) (u32) (v1 + 56)) = (u32) 0; goto L_00910B44;
L_00910434:;
    v0 = func_00207D80(a0, a1);
    if (v0 == 0) { a0 = (*(volatile s32 *) (u32) (s0 + 4)); goto L_00910450; }
    v0 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u32 *) (u32) (v0 + 56)) = (u32) 0;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
L_00910450:;
    a1 = 200; v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00910B44;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    a0 = (s32) 0x431a0000U;
    (*(volatile u32 *) (u32) (v1 + 56)) = (u32) a0; goto L_00910B44;
L_00910470:;
    a1 = 1434;
    if (v1 == a1) { a1 = 48; goto L_009106C0; }
    a1 = 1443;
    if (v1 == a1) goto L_00910698;
    a1 = 1459;
    if (v1 == a1) { a1 = 228; goto L_00910670; }
    a1 = 1458;
    if (v1 == a1) { a1 = 172; goto L_00910648; }
    a1 = 1457;
    if (v1 == a1) { a1 = 310; goto L_00910620; }
    a1 = 1456;
    if (v1 == a1) { a1 = 196; goto L_009105F8; }
    a1 = 1438;
    if (v1 == a1) { a1 = 270; goto L_009105D0; }
    a1 = 1461;
    if (v1 == a1) { a1 = 480; goto L_009105A8; }
    a1 = 1460;
    if (v1 == a1) { a1 = 80; goto L_00910580; }
    a1 = 1437;
    if (v1 == a1) { a1 = 290; goto L_00910558; }
    a1 = 1436;
    if (v1 == a1) { a1 = 130; goto L_00910530; }
    a1 = 1439;
    if (v1 == a1) { a1 = 184; goto L_00910508; }
    goto L_00910B44;
L_00910508:;
    v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00910B44;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (*(volatile u16 *) (u32) (a0 + 48));
    a2 = 30; func_00209A00(a0, a1, a2);
    goto L_00910B44;
L_00910530:;
    v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00910B44;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (*(volatile u16 *) (u32) (a0 + 48));
    a2 = 30; func_00209A00(a0, a1, a2);
    goto L_00910B44;
L_00910558:;
    v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00910B44;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (*(volatile u16 *) (u32) (a0 + 48));
    a2 = 20; func_00209A00(a0, a1, a2);
    goto L_00910B44;
L_00910580:;
    v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00910B44;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (*(volatile u16 *) (u32) (a0 + 48));
    a2 = 0; func_00209A00(a0, a1, a2);
    goto L_00910B44;
L_009105A8:;
    v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00910B44;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (*(volatile u16 *) (u32) (a0 + 48));
    a2 = 0; func_00209A00(a0, a1, a2);
    goto L_00910B44;
L_009105D0:;
    v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00910B44;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (*(volatile u16 *) (u32) (a0 + 48));
    a2 = 30; func_00209A00(a0, a1, a2);
    goto L_00910B44;
L_009105F8:;
    v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00910B44;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (*(volatile u16 *) (u32) (a0 + 48));
    a2 = 30; func_00209A00(a0, a1, a2);
    goto L_00910B44;
L_00910620:;
    v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00910B44;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (*(volatile u16 *) (u32) (a0 + 48));
    a2 = 20; func_00209A00(a0, a1, a2);
    goto L_00910B44;
L_00910648:;
    v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00910B44;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (*(volatile u16 *) (u32) (a0 + 48));
    a2 = 30; func_00209A00(a0, a1, a2);
    goto L_00910B44;
L_00910670:;
    v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00910B44;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (*(volatile u16 *) (u32) (a0 + 48));
    a2 = 28; func_00209A00(a0, a1, a2);
    goto L_00910B44;
L_00910698:;
    v0 = func_00207D10(a0);
    if (v0 == 0) goto L_00910B44;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (*(volatile u16 *) (u32) (a0 + 48));
    a2 = 0; func_00209A00(a0, a1, a2);
    goto L_00910B44;
L_009106C0:;
    v0 = func_00207D80(a0, a1);
    if (v0 == 0) goto L_00910B44;
    a0 = (*(volatile s32 *) (u32) (s0 + 4));
    a1 = (*(volatile u16 *) (u32) (a0 + 48));
    a2 = 24; func_00209A00(a0, a1, a2);
    goto L_00910B44;
L_009106E8:;
    a1 = 1445;
    if (v1 == a1) { v1 = (s32) 0x43860000U; goto L_009106FC; }
    goto L_00910B44;
L_009106FC:;
    v1 = v1 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x41f00000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_00910724:;
    a1 = 1447;
    if (v1 == a1) { f1.f = (*(volatile f32 *) (u32) (a0 + 56)); goto L_009107F8; }
    a1 = 1446;
    if (v1 == a1) { f1.f = (*(volatile f32 *) (u32) (a0 + 56)); goto L_009107D8; }
    a1 = 1445;
    if (v1 == a1) { f1.f = (*(volatile f32 *) (u32) (a0 + 56)); goto L_009107B4; }
    a1 = 1444;
    if (v1 == a1) { v1 = (s32) 0x43800000U; goto L_0091078C; }
    a1 = 1442;
    if (v1 == a1) { f1.f = (*(volatile f32 *) (u32) (a0 + 56)); goto L_00910768; }
    goto L_00910B44;
L_00910768:;
    v1 = (s32) 0x43010000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x41f00000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_0091078C:;
    v1 = v1 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x41f00000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_009107B4:;
    v1 = (s32) 0x43050000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x41800000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_009107D8:;
    v1 = (s32) 0x42880000U;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00910B44;
L_009107F8:;
    v1 = (s32) 0x43830000U;
    f0.i = (s32) v1;
    fcc = f1.f < f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00910B44;
L_00910818:;
    v1 = (s32) ((u32) v1 + 0xfffffa66U);
    at = (u64) v1 < (u64) (s64) 13;
    if (at == 0) goto L_00910B44;
    a1 = (s32) 0x930000U;
    v1 = (s32) ((u32) v1 << 2);
    a1 = (s32) ((u32) a1 + 0xffffe080U);
    v1 = (s32) ((u32) v1 + (u32) a1);
    v1 = (*(volatile s32 *) (u32) v1);
    { u32 t_ = (u32) v1; ; if (t_ == 0x910844U) goto L_00910844; if (t_ == 0x91086cU) goto L_0091086C; if (t_ == 0x910890U) goto L_00910890; if (t_ == 0x9108b8U) goto L_009108B8; if (t_ == 0x9108e0U) goto L_009108E0; if (t_ == 0x91090cU) goto L_0091090C; if (t_ == 0x910930U) goto L_00910930; if (t_ == 0x910958U) goto L_00910958; if (t_ == 0x910980U) goto L_00910980; if (t_ == 0x9109acU) goto L_009109AC; if (t_ == 0x9109d4U) goto L_009109D4; if (t_ == 0x9109fcU) goto L_009109FC; if (t_ == 0x910a28U) goto L_00910A28; }
L_00910844:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    v1 = (s32) 0x43010000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x41f00000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_0091086C:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    v1 = (s32) 0x43170000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00910B44;
L_00910890:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    v1 = (s32) 0x43090000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x41a00000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_009108B8:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    v1 = (s32) 0x43370000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x41f00000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_009108E0:;
    v1 = (s32) 0x43920000U;
    v1 = v1 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x42000000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_0091090C:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    v1 = (s32) 0x429e0000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00910B44;
L_00910930:;
    v1 = (s32) 0x43ef0000U;
    v1 = v1 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00910B44;
L_00910958:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    v1 = (s32) 0x43430000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x41f00000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_00910980:;
    v1 = (s32) 0x439a0000U;
    v1 = v1 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x41a00000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_009109AC:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    v1 = (s32) 0x432b0000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x41f00000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_009109D4:;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    v1 = (s32) 0x43630000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x41e00000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_009109FC:;
    v1 = (s32) 0x43a30000U;
    v1 = v1 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x41f00000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_00910A28:;
    v1 = (s32) 0x43900000U;
    v1 = v1 | 0x8000;
    f1.f = (*(volatile f32 *) (u32) (a0 + 56));
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x41a00000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_00910A54:;
    a1 = 1445;
    if (v1 == a1) { f1.f = (*(volatile f32 *) (u32) (a0 + 56)); goto L_00910AC8; }
    a1 = 1435;
    if (v1 == a1) { f1.f = (*(volatile f32 *) (u32) (a0 + 56)); goto L_00910AA4; }
    a1 = 1434;
    if (v1 == a1) { f1.f = (*(volatile f32 *) (u32) (a0 + 56)); goto L_00910A80; }
    goto L_00910B44;
L_00910A80:;
    v1 = (s32) 0x431f0000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x42a00000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_00910AA4:;
    v1 = (s32) 0x43370000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    v1 = (s32) 0x42880000U;
    (*(volatile u32 *) (u32) a1) = (u32) v1; goto L_00910B44;
L_00910AC8:;
    v1 = (s32) 0x43070000U;
    f0.i = (s32) v1;
    fcc = f1.f <= f0.f;
    { s32 c_ = fcc; a1 = (s32) ((u32) a0 + 0x38U); if (c_) goto L_00910B44; }
    (*(volatile u32 *) (u32) a1) = (u32) 0; goto L_00910B44;
L_00910AE8:;
    if (v1 == a1) goto L_00910B2C;
    a1 = 1033;
    if (v1 == a1) goto L_00910B1C;
    a1 = 1166;
    if (v1 == a1) goto L_00910B1C;
    a1 = 908;
    if (v1 == a1) goto L_00910B1C;
    goto L_00910B44;
L_00910B1C:;
    func_00207BE0(a0);
    goto L_00910B44;
L_00910B2C:;
    v0 = func_00207D10(a0);
    if (v0 == 0) goto L_00910B44;
    v1 = (*(volatile s32 *) (u32) (s0 + 4));
    (*(volatile u32 *) (u32) (v1 + 56)) = (u32) 0;
L_00910B44:;
L_00910B48:;
    return;
}
