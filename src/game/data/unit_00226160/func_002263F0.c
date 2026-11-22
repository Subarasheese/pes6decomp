/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 Pes6SaveData_IsUnavailable(void);
extern void *Pes6SaveData_GetHeaderBlock(void);

int func_002263F0(void)

{
    u8 bVar1;
    int iVar2;
    void *pvVar3;

    iVar2 = Pes6SaveData_IsUnavailable();
    if (iVar2 == 1) {
        iVar2 = 0x11;
    } else {
        pvVar3 = Pes6SaveData_GetHeaderBlock();
        iVar2 = Pes6SaveData_IsUnavailable();
        if (iVar2 == 1) {
            bVar1 = 0;
        } else if (pvVar3 == (void *)0x0) {
            bVar1 = 0;
        } else {
            bVar1 = *(u8 *)((int)pvVar3 + 2);
        }
        switch (bVar1) {
        case 0:
        case 9:
            iVar2 = 0;
            break;
        case 1:
        case 10:
            iVar2 = 1;
            break;
        case 2:
            iVar2 = 2;
            break;
        case 3:
            iVar2 = 3;
            break;
        case 4:
            iVar2 = 4;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
            iVar2 = 5;
            break;
        case 58:
            iVar2 = 0x10;
            break;
        case 11:
        case 12:
        case 13:
        case 14:
            iVar2 = 6;
            break;
        case 15:
        case 16:
        case 17:
            iVar2 = 7;
            break;
        case 18:
        case 19:
            iVar2 = 8;
            break;
        case 20:
        case 21:
            iVar2 = 9;
            break;
        case 22:
        case 23:
            iVar2 = 10;
            break;
        case 24:
        case 25:
            iVar2 = 0xb;
            break;
        case 26:
        case 27:
            iVar2 = 0xc;
            break;
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
            iVar2 = 0xd;
            break;
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
            iVar2 = 0xe;
            break;
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
            iVar2 = 0xf;
            break;
        default:
            iVar2 = 0x11;
        }
    }
    return iVar2;
}
