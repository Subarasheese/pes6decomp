/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002E9240(M2C_UNK);                     /* extern */
M2C_UNK func_002E9320();                            /* extern */
M2C_UNK func_002E9350();                            /* extern */
M2C_UNK func_0063A880();                            /* extern */
void *func_0063E160(M2C_UNK, M2C_UNK);              /* extern */
s32 func_00645860(M2C_UNK);                         /* extern */
M2C_UNK func_006483C0();                            /* extern */
M2C_UNK func_0064D6D0();                            /* extern */
s32 func_0064DFA0(M2C_UNK);                         /* extern */
M2C_UNK func_00655EE0(s32, M2C_UNK);                /* extern */
void *func_00B950E0();                              /* extern */
extern s16 D_003E9E38;
extern s16 D_003E9E3A;
extern s16 D_003E9E40;
extern s16 D_003E9E42;
extern char D_0065EF70[];
extern char D_0065EF78[];

void func_0064C660(s32 *arg0, s32 arg1) {
    if (func_0064DFA0(0) == 0) {
        func_0026E840(0x8C008005);
        if ((D_003E9E40 == D_003E9E38) && (D_003E9E42 == D_003E9E3A)) {
            M2C_FIELD(func_0063E160(0x23, 0), s8 *, 0xC) = 0xD;
        }
        func_00655EE0(func_00645860(0x11), 0);
        func_00655EE0(func_00645860(0x2A), 1);
        return;
    }
    func_00655EE0(func_00645860(0x21), 0);
    if ((arg1 == 0) || (arg1 == 2)) {
        func_006483C0();
        func_0064D6D0();
        func_002E9240(0);
        func_002E9350();
        func_002E9320();
        if ((D_003E9E40 == D_003E9E38) && (D_003E9E42 == D_003E9E3A)) {
            func_001C4730(func_0063E160(0x23, 0), (*(s32 *)D_0065EF70), 0x12F8);
        }
        func_0063A880();
    } else if (arg1 == 2) {
        func_001C4730(func_00B950E0(), (*(s32 *)D_0065EF78) + 0xC, 0x11C840);
    }
    *arg0 = 1;
}
