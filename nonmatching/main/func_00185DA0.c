/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00184570(M2C_UNK);                     /* extern */
M2C_UNK func_001845E0(M2C_UNK, s32);                /* extern */
M2C_UNK func_00185030();                            /* extern */
M2C_UNK func_00185050(s32);                         /* extern */
M2C_UNK func_0018ABE0(M2C_UNK, s32);                /* extern */
M2C_UNK func_0018B6A0(s32);                         /* extern */
M2C_UNK func_0018C090(s32);                         /* extern */
M2C_UNK func_0018DFF0();                            /* extern */
M2C_UNK func_0018E080(s32);                         /* extern */
M2C_UNK func_0018EE70(s32);                         /* extern */
M2C_UNK func_00190510();                            /* extern */
M2C_UNK func_00190590(s32);                         /* extern */
M2C_UNK func_00192060(s32);                         /* extern */
M2C_UNK func_00193990(s32);                         /* extern */
M2C_UNK func_00195A20(s32);                         /* extern */
M2C_UNK func_001982E0(s32);                         /* extern */
M2C_UNK func_0019A080(s32);                         /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
M2C_UNK func_0019C020(s32);                         /* extern */
M2C_UNK func_0019C6C0(s32);                         /* extern */
M2C_UNK func_0019DA90(s32);                         /* extern */
extern char D_0051FF4D[];
extern char D_0051FFC8[];
extern char D_0051FFD8[];

void func_00185DA0(void) {
    if ((*(u8 *)D_0051FF4D) == 0) {
        if ((*(s32 *)D_0051FFC8) & 0x100) {
            func_0018DFF0();
        }
        if ((*(s32 *)D_0051FFC8) & 0x200) {
            func_00190510();
        }
        if ((*(s32 *)D_0051FFC8) & 0x20) {
            func_00185030();
        }
        if ((*(s32 *)D_0051FFC8) & 0x10000) {
            func_00184570(0x10000);
        }
        return;
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 0x100) {
        func_0018E080((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 0x200) {
        func_00190590((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 0x10) {
        func_0018EE70((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 8) {
        func_001982E0((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 2) {
        func_00195A20((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 4) {
        func_00193990((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 1) {
        func_00192060((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 0x20) {
        func_00185050((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 0x10000) {
        func_001845E0(0x10000, (*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 0x80) {
        func_0018C090((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 0x400) {
        func_0018B6A0((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 0x800) {
        func_0019B160((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 0x1000) {
        func_0019A080((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 0x2000) {
        func_0019C6C0((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 0x4000) {
        func_0019C020((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 0x8000) {
        func_0019DA90((*(s32 *)D_0051FFC8));
    }
    if ((*(s32 *)D_0051FFC8) & (*(s32 *)D_0051FFD8) & 0x20000) {
        func_0018ABE0(0x20000, (*(s32 *)D_0051FFC8));
    }
}
