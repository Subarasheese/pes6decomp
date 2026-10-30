/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00151EA0(M2C_UNK);                         /* extern */
M2C_UNK func_001A5750();                            /* extern */
extern char D_003B2FC0[];
extern char D_003B2FC4[];
extern s32 D_003E9DB0;
extern u32 D_003E9DB4;
extern char D_005E5E50[];
extern char D_005E5E54[];
extern char D_005E5E58[];

void func_002D86A0(void) {
    u32 temp_a0;
    u32 temp_a4;
    u32 temp_hi;

    func_001A5750();
    if (D_003E9DB0 == 0) {
        D_003E9DB4 = func_00151EA0(0x64) & 0xFFFF;
        D_003E9DB0 = 1;
    }
    temp_a4 = D_003E9DB4;
    (*(u32 *)D_005E5E50) = temp_a4;
    temp_hi = temp_a4 % (u32) (*(u32 *)D_003B2FC0);
    temp_a0 = temp_a4 + 1;
    D_003E9DB4 = temp_a0;
    (*(u32 *)D_005E5E54) = temp_hi;
    (*(u32 *)D_005E5E58) = temp_a4 % (u32) (*(u32 *)D_003B2FC4);
    if (temp_a0 >= 0x2710U) {
        D_003E9DB4 = 0;
    }
}
