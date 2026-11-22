/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_001CDA50(s32);
extern char D_003B4C50[];
extern char D_003B4C90[];
extern char D_003B4CD0[];
extern char D_003B4D10[];
extern char D_003B4D50[];
extern char D_003B4C10[];
extern char D_003B4D90[];
extern char D_003B4C54[];
extern char D_003B4C94[];
extern char D_003B4CD4[];
extern char D_003B4D14[];
extern char D_003B4D54[];
extern char D_003B4C14[];
extern char D_003B4D94[];
extern s32 D_003E9E7C;

int func_002FC2B0(int arg0)

{
    u32 uVar1;
    int *piVar2;

    uVar1 = func_001CDA50(0);
    switch (uVar1) {
    case 0:
        D_003E9E7C = 0;
        piVar2 = (int *)D_003B4C50;
        do {
            if ((arg0 == *piVar2) && (piVar2[1] != 0x80)) {
                return *(int *)(D_003E9E7C * 0x40 + (u32)D_003B4C54);
            }
            piVar2 = piVar2 + 0x10;
            D_003E9E7C = D_003E9E7C + 1;
        } while (D_003E9E7C == 0);
        break;
    case 1:
        D_003E9E7C = 0;
        piVar2 = (int *)D_003B4C90;
        do {
            if ((arg0 == *piVar2) && (piVar2[1] != 0x80)) {
                return *(int *)(D_003E9E7C * 0x40 + (u32)D_003B4C94);
            }
            piVar2 = piVar2 + 0x10;
            D_003E9E7C = D_003E9E7C + 1;
        } while (D_003E9E7C == 0);
        break;
    case 2:
        D_003E9E7C = 0;
        piVar2 = (int *)D_003B4CD0;
        do {
            if ((arg0 == *piVar2) && (piVar2[1] != 0x80)) {
                return *(int *)(D_003E9E7C * 0x40 + (u32)D_003B4CD4);
            }
            piVar2 = piVar2 + 0x10;
            D_003E9E7C = D_003E9E7C + 1;
        } while (D_003E9E7C == 0);
        break;
    case 3:
        D_003E9E7C = 0;
        piVar2 = (int *)D_003B4D10;
        do {
            if ((arg0 == *piVar2) && (piVar2[1] != 0x80)) {
                return *(int *)(D_003E9E7C * 0x40 + (u32)D_003B4D14);
            }
            piVar2 = piVar2 + 0x10;
            D_003E9E7C = D_003E9E7C + 1;
        } while (D_003E9E7C == 0);
        break;
    case 4:
        D_003E9E7C = 0;
        piVar2 = (int *)D_003B4D50;
        do {
            if ((arg0 == *piVar2) && (piVar2[1] != 0x80)) {
                return *(int *)(D_003E9E7C * 0x40 + (u32)D_003B4D54);
            }
            piVar2 = piVar2 + 0x10;
            D_003E9E7C = D_003E9E7C + 1;
        } while (D_003E9E7C == 0);
        break;
    case 5:
        D_003E9E7C = 0;
        piVar2 = (int *)D_003B4C10;
        do {
            if ((arg0 == *piVar2) && (piVar2[1] != 0x80)) {
                return *(int *)(D_003E9E7C * 0x40 + (u32)D_003B4C14);
            }
            piVar2 = piVar2 + 0x10;
            D_003E9E7C = D_003E9E7C + 1;
        } while (D_003E9E7C == 0);
        break;
    case 8:
        D_003E9E7C = 0;
        piVar2 = (int *)D_003B4C50;
        do {
            if (arg0 == *piVar2) {
                return *(int *)(D_003E9E7C * 0x40 + (u32)D_003B4C54);
            }
            piVar2 = piVar2 + 0x10;
            D_003E9E7C = D_003E9E7C + 1;
        } while (D_003E9E7C == 0);
    }
    D_003E9E7C = 0;
    piVar2 = (int *)D_003B4D90;
    do {
        if (arg0 == *piVar2) {
            return *(int *)(D_003E9E7C * 0x40 + (u32)D_003B4D94);
        }
        piVar2 = piVar2 + 0x10;
        D_003E9E7C = D_003E9E7C + 1;
    } while (D_003E9E7C < 1);
    return 0x5a;
}
