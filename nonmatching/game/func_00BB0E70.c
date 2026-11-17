/* compiler: ee-gcc-2.9-G0 */
/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is
 * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */
#include "pes6/m2c.h"


void func_00BB0E70(s32 a0) {
    s32 at = 0, v0 = 0, v1 = 0;

    v0 = a0 & 0xffff;
    v0 = (s32) ((u32) v0 + 0xfffffa66U);
    at = (u64) v0 < (u64) (s64) 27;
    if (at == 0) goto L_00BB0F78;
    v1 = (s32) 0xcb0000U;
    v0 = (s32) ((u32) v0 << 2);
    v1 = (s32) ((u32) v1 + 0x90U);
    v0 = (s32) ((u32) v0 + (u32) v1);
    v0 = (*(volatile s32 *) (u32) v0);
    { u32 t_ = (u32) v0; ; if (t_ == 0xbb0ea0U) goto L_00BB0EA0; if (t_ == 0xbb0ea8U) goto L_00BB0EA8; if (t_ == 0xbb0eb0U) goto L_00BB0EB0; if (t_ == 0xbb0eb8U) goto L_00BB0EB8; if (t_ == 0xbb0ec0U) goto L_00BB0EC0; if (t_ == 0xbb0ec8U) goto L_00BB0EC8; if (t_ == 0xbb0ed0U) goto L_00BB0ED0; if (t_ == 0xbb0ed8U) goto L_00BB0ED8; if (t_ == 0xbb0ee0U) goto L_00BB0EE0; if (t_ == 0xbb0ee8U) goto L_00BB0EE8; if (t_ == 0xbb0ef0U) goto L_00BB0EF0; if (t_ == 0xbb0ef8U) goto L_00BB0EF8; if (t_ == 0xbb0f00U) goto L_00BB0F00; if (t_ == 0xbb0f08U) goto L_00BB0F08; if (t_ == 0xbb0f10U) goto L_00BB0F10; if (t_ == 0xbb0f18U) goto L_00BB0F18; if (t_ == 0xbb0f20U) goto L_00BB0F20; if (t_ == 0xbb0f28U) goto L_00BB0F28; if (t_ == 0xbb0f30U) goto L_00BB0F30; if (t_ == 0xbb0f38U) goto L_00BB0F38; if (t_ == 0xbb0f40U) goto L_00BB0F40; if (t_ == 0xbb0f48U) goto L_00BB0F48; if (t_ == 0xbb0f50U) goto L_00BB0F50; if (t_ == 0xbb0f58U) goto L_00BB0F58; if (t_ == 0xbb0f60U) goto L_00BB0F60; if (t_ == 0xbb0f68U) goto L_00BB0F68; if (t_ == 0xbb0f70U) goto L_00BB0F70; }
L_00BB0EA0:;
    v0 = 87; goto L_00BB0F7C;
L_00BB0EA8:;
    v0 = 88; goto L_00BB0F7C;
L_00BB0EB0:;
    v0 = 83; goto L_00BB0F7C;
L_00BB0EB8:;
    v0 = 86; goto L_00BB0F7C;
L_00BB0EC0:;
    v0 = 84; goto L_00BB0F7C;
L_00BB0EC8:;
    v0 = 85; goto L_00BB0F7C;
L_00BB0ED0:;
    v0 = 7; goto L_00BB0F7C;
L_00BB0ED8:;
    v0 = 8; goto L_00BB0F7C;
L_00BB0EE0:;
    v0 = 5; goto L_00BB0F7C;
L_00BB0EE8:;
    v0 = 6; goto L_00BB0F7C;
L_00BB0EF0:;
    v0 = 3; goto L_00BB0F7C;
L_00BB0EF8:;
    v0 = 4; goto L_00BB0F7C;
L_00BB0F00:;
    v0 = 94; goto L_00BB0F7C;
L_00BB0F08:;
    v0 = 95; goto L_00BB0F7C;
L_00BB0F10:;
    v0 = 98; goto L_00BB0F7C;
L_00BB0F18:;
    v0 = 99; goto L_00BB0F7C;
L_00BB0F20:;
    v0 = 96; goto L_00BB0F7C;
L_00BB0F28:;
    v0 = 97; goto L_00BB0F7C;
L_00BB0F30:;
    v0 = 437; goto L_00BB0F7C;
L_00BB0F38:;
    v0 = 438; goto L_00BB0F7C;
L_00BB0F40:;
    v0 = 434; goto L_00BB0F7C;
L_00BB0F48:;
    v0 = 431; goto L_00BB0F7C;
L_00BB0F50:;
    v0 = 432; goto L_00BB0F7C;
L_00BB0F58:;
    v0 = 435; goto L_00BB0F7C;
L_00BB0F60:;
    v0 = 436; goto L_00BB0F7C;
L_00BB0F68:;
    v0 = 430; goto L_00BB0F7C;
L_00BB0F70:;
    v0 = 433; goto L_00BB0F7C;
L_00BB0F78:;
    v0 = 0xffff;
L_00BB0F7C:;
    return;
}
