/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00229A70(void);
extern s32 func_002308F0(void);
extern char D_003A9B70[];
extern char D_003A9B71[];
extern char D_003A9B72[];
extern char D_003A9B73[];
extern s16 D_003E79CC;
extern s16 D_003EA670;
extern s8 D_003EA674;
extern s8 D_003EA678;
extern char D_00908418[];
extern char D_00908C90[];

s32 func_008F9C10(void) {
    s32 var_v1;
    u8 temp_a0;

    D_003EA678 = 0;
    if ((*(u8 *)D_003A9B70) != 1) {
        temp_a0 = *(u8 *)0x3A9B71;
        if (temp_a0 != 0xFF) {
            (*(u8 *)D_003A9B72) = temp_a0;
            var_v1 = (*(s32 *)D_00908418) & ~0x80;
        } else {
            (*(u8 *)D_003A9B72) = func_002308F0();
            var_v1 = (*(s32 *)D_00908418) | 0x80;
        }
        (*(s32 *)D_00908418) = var_v1;
        switch ((*(u8 *)D_003A9B72)) {                       /* irregular */
        case 0x27:
            D_003EA674 = 0xC;
            D_003E79CC = 8;
            D_003EA670 = 6;
block_83:
            return 1;
        case 0x26:
            D_003EA674 = 0xD;
            D_003E79CC = 5;
            D_003EA670 = 5;
            goto block_83;
        case 0x4:
            D_003EA670 = 4;
            D_003EA674 = 3;
            D_003E79CC = 2;
            goto block_83;
        case 0x3:
            D_003EA670 = 3;
            D_003EA674 = 2;
            D_003E79CC = 2;
            goto block_83;
        case 0x2:
            D_003EA674 = 1;
            D_003E79CC = 2;
            D_003EA670 = 2;
            goto block_83;
        case 0x3A:
            D_003EA674 = 0x14;
            D_003E79CC = 9;
            D_003EA670 = 0;
            goto block_83;
        case 0xC:
        case 0xB:
        case 0xE:
        case 0xD:
            D_003EA674 = 7;
            D_003E79CC = 1;
            D_003EA670 = 8;
            goto block_83;
        case 0x39:
        case 0x2D:
        case 0x9:
        case 0x0:
            D_003E79CC = 0;
            D_003EA674 = 5;
            D_003EA670 = 7;
            goto block_83;
        case 0x6:
        case 0x8:
        case 0x5:
            D_003EA670 = 0;
            D_003EA674 = 6;
            D_003E79CC = 2;
            goto block_83;
        case 0xA:
        case 0x1:
            D_003EA674 = 4;
            D_003E79CC = 2;
            D_003EA670 = 1;
            goto block_83;
        case 0x1C:
            if ((*(u8 *)D_003A9B71) == 0xFF) {
                (*(u8 *)D_003A9B73) = func_00229A70();
            }
            D_003EA674 = 0xB;
            D_003E79CC = 3;
            D_003EA670 = 9;
            goto block_83;
        case 0x1D:
            if ((*(u8 *)D_003A9B71) == 0xFF) {
                (*(u8 *)D_003A9B73) = func_00229A70();
            }
            D_003E79CC = 2;
            D_003EA674 = 9;
            D_003EA670 = 9;
            goto block_83;
        case 0x20:
            if ((*(u8 *)D_003A9B71) == 0xFF) {
                (*(u8 *)D_003A9B73) = func_00229A70();
            }
            D_003E79CC = 4;
            D_003EA674 = 0xA;
            D_003EA670 = 0xA;
            goto block_83;
        case 0x21:
            if ((*(u8 *)D_003A9B71) == 0xFF) {
                (*(u8 *)D_003A9B73) = func_00229A70();
            }
            D_003EA674 = 8;
            D_003E79CC = 2;
            D_003EA670 = 0xA;
            goto block_83;
        case 0x11:
        case 0xF:
            D_003EA670 = 0;
            D_003EA674 = 0x11;
            D_003E79CC = 7;
            goto block_83;
        case 0x13:
        case 0x12:
            D_003EA670 = 0;
            D_003EA674 = 0xE;
            D_003E79CC = 6;
            goto block_83;
        case 0x15:
        case 0x14:
            D_003EA670 = 0;
            D_003EA674 = 0x13;
            D_003E79CC = 6;
            goto block_83;
        case 0x17:
        case 0x16:
            D_003EA670 = 0;
            D_003EA674 = 0x10;
            D_003E79CC = 6;
            goto block_83;
        case 0x19:
        case 0x18:
            D_003EA670 = 0;
            D_003EA674 = 0xF;
            D_003E79CC = 6;
            goto block_83;
        case 0x1B:
        case 0x1A:
            D_003EA670 = 0;
            D_003EA674 = 0x12;
            D_003E79CC = 6;
            goto block_83;
        default:
            return 0;
        }
    } else {
        D_003EA674 = 0;
        D_003E79CC = 0xA;
        D_003EA670 = 0;
        (*(u8 *)D_00908C90) = (*(u8 *)D_003A9B71);
        return 1;
    }
}
