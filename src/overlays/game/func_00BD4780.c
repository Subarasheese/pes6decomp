/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_00BBB8C0(s32);
extern char D_00CB2428[];
extern char D_00CB2430[];
extern char D_00CB2438[];
extern char D_00CB2440[];
extern char D_00CB2448[];
extern char D_00CB2450[];
extern char D_00CB2458[];

u16 func_00BD4780(int arg0)

{
    u16 uVar1;
    int iVar2;

    uVar1 = 0;
    switch (arg0 & 0xffU) {
    case 0:
        iVar2 = func_00BBB8C0(2);
        uVar1 = *(u16 *)(iVar2 * 2 + (u32)D_00CB2428);
        break;
    case 1:
        iVar2 = func_00BBB8C0(3);
        uVar1 = *(u16 *)(iVar2 * 2 + (u32)D_00CB2430);
        break;
    case 2:
        iVar2 = func_00BBB8C0(3);
        uVar1 = *(u16 *)(iVar2 * 2 + (u32)D_00CB2438);
        break;
    case 3:
        iVar2 = func_00BBB8C0(3);
        uVar1 = *(u16 *)(iVar2 * 2 + (u32)D_00CB2440);
        break;
    case 4:
        iVar2 = func_00BBB8C0(3);
        uVar1 = *(u16 *)(iVar2 * 2 + (u32)D_00CB2448);
        break;
    case 5:
        iVar2 = func_00BBB8C0(1);
        uVar1 = *(u16 *)(iVar2 * 2 + (u32)D_00CB2450);
        break;
    case 6:
        iVar2 = func_00BBB8C0(1);
        uVar1 = *(u16 *)(iVar2 * 2 + (u32)D_00CB2458);
        break;
    }
    return uVar1;
}
