/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00208210(s32);
extern s32 func_001A5F20(s32);
extern u8 func_009B4070(void);
extern u8 func_00BC8C60(void);
extern void func_002727C0(s32);
extern s32 func_00152130(s32, s8);
extern s32 func_002AE670(s32);
s32 func_009B5CA0();                                /* extern */
M2C_UNK func_009B6420(s32);                         /* extern */
extern char D_00592742[];
extern char D_005A3030[];
extern char D_00CBAA08[];

void func_00BCD720(void) {
    s32 temp_s0;
    s32 temp_v0;

    func_00BC8C60();
    (*(u8 *)D_00CBAA08) = func_009B4070();
    func_002727C0(0xA);
    func_009B6420(((s32) ((*(u16 *)D_005A3030) + func_002AE670(0x30)) % 300) & 0xFFFF);
    (*(s8 *)D_00592742) = 7;
    temp_s0 = func_009B5CA0();
    temp_v0 = func_00208210(func_001A5F20(4));
    if ((temp_s0 == 0xFFFF) || (temp_s0 == temp_v0)) {
        func_00152130(0, 0x10);
    }
}
