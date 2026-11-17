/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00C90C60(s32, u16, void *, u16, void *, u16, s32);
extern char D_00591DEE[];
extern char D_00CCD074[];

void func_00C86F70(s32 arg0) {
    s32 temp_a6;
    u16 temp_a1;
    u16 temp_a3;
    u16 temp_a5;

    temp_a6 = arg0 != 0;
    temp_a5 = (*(u16 *)(D_00591DEE)) | 1;
    (*(u16 *)(D_00591DEE)) = temp_a5;
    temp_a3 = (*(u16 *)(D_00591DEE)) ^ 1;
    (*(u16 *)(D_00591DEE)) = temp_a3;
    temp_a1 = (*(u16 *)(D_00591DEE)) | temp_a6;
    (*(u16 *)(D_00591DEE)) = temp_a1;
    if ((*(u8 *)D_00CCD074) & 1) {
        func_00C90C60(1, temp_a1, D_00591DEE - 0x1DEE, temp_a3, D_00591DEE - 0x1DEE, temp_a5, temp_a6);
    }
}
