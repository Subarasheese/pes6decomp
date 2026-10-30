/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_009B4070(void);
extern void func_002727C0(s32);
extern s32 func_00152130(s32, s8);
M2C_UNK func_009A1F00(f32);                         /* extern */
M2C_UNK func_009A24A0(M2C_UNK);                     /* extern */
s32 func_009B4680();                                /* extern */
extern char D_00592742[];
extern char D_00CBAA08[];
extern char D_00CBD26C[];
extern char D_00CBD2A4[];
extern char D_00CBD2A5[];

void func_00BCD940(void) {
    (*(u8 *)D_00CBAA08) = func_009B4070();
    (*(s8 *)D_00592742) = 6;
    func_002727C0(0xA);
    func_009A1F00((*(f32 *)D_00CBD26C));
    func_009A24A0(1);
    (*(s8 *)D_00CBD2A5) = 0;
    (*(s8 *)D_00CBD2A4) = 0;
    if (func_009B4680() < 0x12D) {
        func_00152130(0, 0x10);
    }
}
