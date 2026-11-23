/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"

void func_00624B70(s32);
s32 func_00639B50(void);
s32 func_0063AAF0(s32, s32, s32, s32);
s32 func_00648030(void);

s32 func_0063C390(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 at = 0, v0 = 0, v1 = 0, s0 = 0;

    s0 = a0;
    at = (u64) s0 < (u64) (s64) 74;
    if (at == 0) { a3 = 0; goto L_0063C718; }
    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) s0 << 2);
    v1 = (s32) ((u32) v1 + 0xffffb1c0U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0x63c3c8U) goto L_0063C3C8; if (t_ == 0x63c408U) goto L_0063C408; if (t_ == 0x63c448U) goto L_0063C448; if (t_ == 0x63c488U) goto L_0063C488; if (t_ == 0x63c4c8U) goto L_0063C4C8; if (t_ == 0x63c508U) goto L_0063C508; if (t_ == 0x63c548U) goto L_0063C548; if (t_ == 0x63c588U) goto L_0063C588; if (t_ == 0x63c5c8U) goto L_0063C5C8; if (t_ == 0x63c608U) goto L_0063C608; if (t_ == 0x63c648U) goto L_0063C648; if (t_ == 0x63c688U) goto L_0063C688; if (t_ == 0x63c714U) goto L_0063C714; if (t_ == 0x63c7a8U) goto L_0063C7A8; if (t_ == 0x63c840U) goto L_0063C840; if (t_ == 0x63c880U) goto L_0063C880; if (t_ == 0x63c8e8U) goto L_0063C8E8; if (t_ == 0x63c8f8U) goto L_0063C8F8; if (t_ == 0x63c908U) goto L_0063C908; if (t_ == 0x63c918U) goto L_0063C918; if (t_ == 0x63c958U) goto L_0063C958; if (t_ == 0x63c968U) goto L_0063C968; }
L_0063C3C8:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -29876));
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C3E4; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C3E4:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C400; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C400:;
    v0 = (s32) ((u32) v0 + 0x4U); goto L_0063C984;
L_0063C408:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -29872));
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C424; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C424:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C440; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C440:;
    v0 = (s32) ((u32) v0 + 0x4U); goto L_0063C984;
L_0063C448:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -29868));
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C464; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C464:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C480; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C480:;
    v0 = (s32) ((u32) v0 + 0x4U); goto L_0063C984;
L_0063C488:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -29884));
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C4A4; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C4A4:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C4C0; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C4C0:;
    v0 = (s32) ((u32) v0 + 0x4U); goto L_0063C984;
L_0063C4C8:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -29860));
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C4E4; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C4E4:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C500; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C500:;
    v0 = (s32) ((u32) v0 + 0x4U); goto L_0063C984;
L_0063C508:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -29856));
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C524; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C524:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C540; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C540:;
    v0 = (s32) ((u32) v0 + 0x4U); goto L_0063C984;
L_0063C548:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -29852));
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C564; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C564:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C580; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C580:;
    v0 = (s32) ((u32) v0 + 0x4U); goto L_0063C984;
L_0063C588:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -29848));
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C5A4; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C5A4:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C5C0; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C5C0:;
    v0 = (s32) ((u32) v0 + 0x4U); goto L_0063C984;
L_0063C5C8:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -29880));
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C5E4; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C5E4:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C600; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C600:;
    v0 = (s32) ((u32) v0 + 0x4U); goto L_0063C984;
L_0063C608:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -29840));
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C624; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C624:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C640; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C640:;
    v0 = (s32) ((u32) v0 + 0x4U); goto L_0063C984;
L_0063C648:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -29844));
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C664; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C664:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C680; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C680:;
    v0 = (s32) ((u32) v0 + 0x4U); goto L_0063C984;
L_0063C688:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -29868));
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C6A4; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C6A4:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C6C0; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C6C0:;
    v1 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0x4U);
    v1 = (*(volatile s32 *) (u32) (v1 + -29848));
    a0 = (s32) ((u32) v1 + 0x3ffU);
    { s32 c_ = a0 >= 0; v1 = (s32) a0 >> 10; if (c_) goto L_0063C6E0; }
    v1 = (s32) ((u32) a0 + 0x3ffU);
    v1 = (s32) v1 >> 10;
L_0063C6E0:;
    v1 = (s32) ((u32) v1 << 10);
    v1 = (s32) ((u32) v1 + 0x7fffU);
    a0 = (s32) ((u32) v1 + 0x7001U);
    { s32 c_ = a0 >= 0; v1 = (s32) a0 >> 10; if (c_) goto L_0063C6FC; }
    v1 = (s32) ((u32) a0 + 0x3ffU);
    v1 = (s32) v1 >> 10;
L_0063C6FC:;
    v1 = (s32) ((u32) v1 + 0x4U);
    at = v0 < v1;
    if (at == 0) { v1 = 62; goto L_0063C988; }
    v0 = v1; goto L_0063C984;
L_0063C714:;
    a3 = 0;
L_0063C718:;
    v1 = (s32) 0x660000U;
    a0 = (s32) ((u32) a3 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8b40U);
    v0 = 0;
    a2 = (s32) ((u32) v1 + (u32) a0);
    a1 = -1;
L_0063C730:;
    v1 = a3 < 13;
    if (v1 != 0) goto L_0063C748;
    v1 = a1; goto L_0063C780;
L_0063C748:;
    v1 = (*(volatile s32 *) (u32) a2);
    a0 = (s32) ((u32) v1 + 0x3ffU);
    { s32 c_ = a0 >= 0; v1 = (s32) a0 >> 10; if (c_) goto L_0063C760; }
    v1 = (s32) ((u32) a0 + 0x3ffU);
    v1 = (s32) v1 >> 10;
L_0063C760:;
    v1 = (s32) ((u32) v1 << 10);
    v1 = (s32) ((u32) v1 + 0x7fffU);
    a0 = (s32) ((u32) v1 + 0x7001U);
    { s32 c_ = a0 >= 0; v1 = (s32) a0 >> 10; if (c_) goto L_0063C77C; }
    v1 = (s32) ((u32) a0 + 0x3ffU);
    v1 = (s32) v1 >> 10;
L_0063C77C:;
    v1 = (s32) ((u32) v1 + 0x4U);
L_0063C780:;
    at = v0 < v1;
    if (at == 0) goto L_0063C790;
    v0 = v1;
L_0063C790:;
    a3 = (s32) ((u32) a3 + 0x1U);
    v1 = a3 < 13;
    { s32 c_ = v1 != 0; a2 = (s32) ((u32) a2 + 0x4U); if (c_) goto L_0063C730; }
    goto L_0063C984;
L_0063C7A8:;
    a2 = 0;
    v1 = (s32) 0x660000U;
    a0 = (s32) ((u32) a2 << 2);
    v1 = (s32) ((u32) v1 + 0xffff8b40U);
    v0 = 0;
    a3 = (s32) ((u32) v1 + (u32) a0);
    a1 = -1;
L_0063C7C4:;
    if (a2 == 0) goto L_0063C828;
    v1 = a2 < 13;
    if (v1 != 0) goto L_0063C7E0;
    v1 = a1; goto L_0063C818;
L_0063C7E0:;
    v1 = (*(volatile s32 *) (u32) a3);
    a0 = (s32) ((u32) v1 + 0x3ffU);
    { s32 c_ = a0 >= 0; v1 = (s32) a0 >> 10; if (c_) goto L_0063C7F8; }
    v1 = (s32) ((u32) a0 + 0x3ffU);
    v1 = (s32) v1 >> 10;
L_0063C7F8:;
    v1 = (s32) ((u32) v1 << 10);
    v1 = (s32) ((u32) v1 + 0x7fffU);
    a0 = (s32) ((u32) v1 + 0x7001U);
    { s32 c_ = a0 >= 0; v1 = (s32) a0 >> 10; if (c_) goto L_0063C814; }
    v1 = (s32) ((u32) a0 + 0x3ffU);
    v1 = (s32) v1 >> 10;
L_0063C814:;
    v1 = (s32) ((u32) v1 + 0x4U);
L_0063C818:;
    at = v0 < v1;
    if (at == 0) goto L_0063C828;
    v0 = v1;
L_0063C828:;
    a2 = (s32) ((u32) a2 + 0x1U);
    v1 = a2 < 13;
    { s32 c_ = v1 != 0; a3 = (s32) ((u32) a3 + 0x4U); if (c_) goto L_0063C7C4; }
    goto L_0063C984;
L_0063C840:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -29888));
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C85C; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C85C:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C878; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C878:;
    v0 = (s32) ((u32) v0 + 0x4U); goto L_0063C984;
L_0063C880:;
    v0 = func_0063AAF0(a0, a1, a2, a3);
    v1 = v0 < 13;
    if (v1 != 0) { v1 = (s32) ((u32) v0 << 2); goto L_0063C89C; }
    v0 = -1; goto L_0063C8E0;
L_0063C89C:;
    v0 = (s32) 0x660000U;
    v0 = (s32) ((u32) v0 + 0xffff8b40U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C8C0; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C8C0:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C8DC; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C8DC:;
    v0 = (s32) ((u32) v0 + 0x4U);
L_0063C8E0:;
    goto L_0063C984;
L_0063C8E8:;
    func_00624B70(a0);
    goto L_0063C984;
L_0063C8F8:;
    func_00624B70(a0);
    goto L_0063C984;
L_0063C908:;
    func_00624B70(a0);
    goto L_0063C984;
L_0063C918:;
    v0 = (s32) 0x660000U;
    v0 = (*(volatile s32 *) (u32) (v0 + -29888));
    v1 = (s32) ((u32) v0 + 0x3ffU);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C934; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C934:;
    v0 = (s32) ((u32) v0 << 10);
    v0 = (s32) ((u32) v0 + 0x7fffU);
    v1 = (s32) ((u32) v0 + 0x7001U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 10; if (c_) goto L_0063C950; }
    v0 = (s32) ((u32) v1 + 0x3ffU);
    v0 = (s32) v0 >> 10;
L_0063C950:;
    v0 = (s32) ((u32) v0 + 0x4U); goto L_0063C984;
L_0063C958:;
    v0 = func_00639B50();
    goto L_0063C984;
L_0063C968:;
    v0 = func_00648030();
    { s32 c_ = v0 >= 0; v1 = (s32) v0 >> 10; if (c_) goto L_0063C980; }
    v0 = (s32) ((u32) v0 + 0x3ffU);
    v1 = (s32) v0 >> 10;
L_0063C980:;
    v0 = v1;
L_0063C984:;
    v1 = 62;
L_0063C988:;
    if (s0 == v1) { v1 = (s32) ((u32) s0 + 0xffffffbaU); goto L_0063CA04; }
    v1 = 63;
    if (s0 == v1) goto L_0063CA00;
    v1 = 64;
    if (s0 == v1) goto L_0063CA00;
    v1 = 65;
    if (s0 == v1) goto L_0063CA00;
    v1 = 66;
    if (s0 == v1) goto L_0063CA00;
    v1 = 67;
    if (s0 == v1) goto L_0063CA00;
    v1 = 68;
    if (s0 == v1) goto L_0063CA00;
    v1 = 69;
    if (s0 == v1) goto L_0063CA00;
    v1 = 72;
    if (s0 == v1) goto L_0063CA00;
    v1 = 73;
    if (s0 == v1) goto L_0063CA00;
    v0 = (s32) ((u32) v0 + 0xffffffc0U);
L_0063CA00:;
    v1 = (s32) ((u32) s0 + 0xffffffbaU);
L_0063CA04:;
    at = (u64) v1 < (u64) (s64) 2;
    if (at == 0) { ; goto L_0063CA2C; }
    v1 = (s32) ((u32) v0 + 0x3U);
    { s32 c_ = v1 >= 0; v0 = (s32) v1 >> 2; if (c_) goto L_0063CA24; }
    v0 = (s32) ((u32) v1 + 0x3U);
    v0 = (s32) v0 >> 2;
L_0063CA24:;
    v0 = (s32) ((u32) v0 << 2);
L_0063CA2C:;
    return v0;
}
