/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_strip_colors.h"

extern s32 D_0053C3B4[], D_0053C3BC[], D_0053C3B0[], D_0053C3B8[];
extern u8 D_00591BB8[], D_00591C09[], D_00591DED[], D_003E9E80;
extern void func_00242FC0(void), func_00243EA0(void), func_00244AB0(void);
extern s32 func_00227980(void);

void func_00244E30(void) {
    if (D_00591BB8[0] == 1)
        D_003E9E80 = 1;
    else
        D_003E9E80 = 0;
    switch (D_00591C09[0]) {
    case 1:
    case 4:
    case 2:
    case 14:
        if (func_00227980() == 0)
            func_00244AB0();
        D_0053C3B0[0] = D_003E9E88[0] & OUTFIELD_PARTS;
        D_0053C3B8[0] = D_003E9E88[1] & OUTFIELD_PARTS;
        break;
    default:
        D_0053C3B0[0] = D_003E9E88[0] & OUTFIELD_PARTS;
        D_0053C3B8[0] = D_003E9E88[1] & OUTFIELD_PARTS;
        break;
    }
    func_00242FC0();
    func_00243EA0();
    D_00591DED[0] = selectedStripContrast();
    if (D_00591C09[0] != 10) {
        D_003E9E88[0] = D_0053C3B4[0] | D_0053C3B0[0];
        D_003E9E88[1] = D_0053C3BC[0] | D_0053C3B8[0];
    }
}
