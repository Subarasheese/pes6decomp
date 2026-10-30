/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001A5C70();                            /* extern */
M2C_UNK func_0027C9C0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00909B50(s32, s32);                    /* extern */
extern char D_0092F010[];
extern char D_0092F014[];
extern char D_0092F018[];
extern char D_0092F01C[];
extern char D_0092F020[];
extern char D_0092F024[];
extern char D_0092F028[];
extern char D_0092F02C[];
extern char D_0092F030[];
extern char D_0092F034[];
extern char D_0092F038[];
extern char D_0092F03C[];
extern char D_0092F040[];

s32 func_0090DAF0(s32 arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;

    if ((arg0 & 0x2000) && ((*(s32 *)D_0092F030) != 0) && ((*(s32 *)D_0092F030) == (*(s32 *)D_0092F02C)) && ((*(s32 *)D_0092F030) != (*(s32 *)D_0092F028))) {
        func_0027C9C0(0, 1);
        temp_a1 = (*(s32 *)D_0092F028);
        temp_a0 = (*(s32 *)D_0092F02C);
        (*(s32 *)D_0092F028) = temp_a0;
        (*(s32 *)D_0092F02C) = temp_a1;
        func_00909B50(temp_a0, temp_a1);
    }
    if ((arg0 & 0x4000) && ((*(s32 *)D_0092F03C) != 0) && ((*(s32 *)D_0092F03C) == (*(s32 *)D_0092F038)) && ((*(s32 *)D_0092F03C) != (*(s32 *)D_0092F034))) {
        func_0027C9C0(5, 6);
        temp_a1_2 = (*(s32 *)D_0092F034);
        (*(s32 *)D_0092F034) = (*(s32 *)D_0092F038);
        (*(s32 *)D_0092F038) = temp_a1_2;
    }
    if ((arg0 & 0x8000) && ((*(s32 *)D_0092F018) != 0) && ((*(s32 *)D_0092F018) == (*(s32 *)D_0092F014)) && ((*(s32 *)D_0092F018) != (*(s32 *)D_0092F010))) {
        func_001A5C70();
        (*(s32 *)D_0092F010) = (*(s32 *)D_0092F014);
        (*(s32 *)D_0092F014) = 0;
    }
    if ((arg0 & 0x10000) && ((*(s32 *)D_0092F024) != 0) && ((*(s32 *)D_0092F024) == (*(s32 *)D_0092F020)) && ((*(s32 *)D_0092F024) != (*(s32 *)D_0092F01C))) {
        func_0027C9C0(2, 3);
        temp_a1_3 = (*(s32 *)D_0092F01C);
        (*(s32 *)D_0092F01C) = (*(s32 *)D_0092F020);
        (*(s32 *)D_0092F020) = temp_a1_3;
    }
    if (arg0 & 0xFC) {
        if ((*(u8 *)D_0092F040) & 4) {
            (*(u8 *)D_0092F040) &= 0xFB;
        }
        if (1 == 0) {
            return 0;
        }
        goto block_28;
    }
block_28:
    return 1;
}
