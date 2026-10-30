/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001A5C70();                            /* extern */
M2C_UNK func_0027C9C0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_008F69F0(s32, s32);                    /* extern */
extern char D_00908380[];
extern char D_00908384[];
extern char D_00908388[];
extern char D_0090838C[];
extern char D_00908390[];
extern char D_00908394[];
extern char D_00908398[];
extern char D_0090839C[];
extern char D_009083A0[];
extern char D_009083A4[];
extern char D_009083A8[];
extern char D_009083AC[];
extern char D_009083B0[];

s32 func_008F84E0(s32 arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;

    if ((arg0 & 0x2000) && ((*(s32 *)D_009083A0) != 0) && ((*(s32 *)D_009083A0) == (*(s32 *)D_0090839C)) && ((*(s32 *)D_009083A0) != (*(s32 *)D_00908398))) {
        func_0027C9C0(0, 1);
        temp_a1 = (*(s32 *)D_0090839C);
        (*(s32 *)D_0090839C) = (*(s32 *)D_00908398);
        (*(s32 *)D_00908398) = temp_a1;
        func_008F69F0(temp_a1 & 0xFF, temp_a1);
    }
    if ((arg0 & 0x4000) && ((*(s32 *)D_009083AC) != 0) && ((*(s32 *)D_009083AC) == (*(s32 *)D_009083A8)) && ((*(s32 *)D_009083AC) != (*(s32 *)D_009083A4))) {
        func_0027C9C0(5, 6);
        temp_a1_2 = (*(s32 *)D_009083A4);
        (*(s32 *)D_009083A4) = (*(s32 *)D_009083A8);
        (*(s32 *)D_009083A8) = temp_a1_2;
    }
    if ((arg0 & 0x8000) && ((*(s32 *)D_00908388) != 0) && ((*(s32 *)D_00908388) == (*(s32 *)D_00908384)) && ((*(s32 *)D_00908388) != (*(s32 *)D_00908380))) {
        func_001A5C70();
        (*(s32 *)D_00908380) = (*(s32 *)D_00908384);
        (*(s32 *)D_00908384) = 0;
    }
    if ((arg0 & 0x10000) && ((*(s32 *)D_00908394) != 0) && ((*(s32 *)D_00908394) == (*(s32 *)D_00908390)) && ((*(s32 *)D_00908394) != (*(s32 *)D_0090838C))) {
        func_0027C9C0(2, 3);
        temp_a1_3 = (*(s32 *)D_0090838C);
        (*(s32 *)D_0090838C) = (*(s32 *)D_00908390);
        (*(s32 *)D_00908390) = temp_a1_3;
    }
    if (arg0 & 0x3F) {
        if ((*(u8 *)D_009083B0) & 4) {
            (*(u8 *)D_009083B0) &= 0xFB;
        }
        if (1 == 0) {
            return 0;
        }
        goto block_28;
    }
block_28:
    return 1;
}
