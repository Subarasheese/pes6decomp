/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00802900(void);
extern s32 func_002371A0(s32);
extern void func_002D5420(s32);
extern void func_002D2FF0(void);
M2C_UNK func_0023D8A0(s32, s32);                    /* extern */
M2C_UNK func_00244E30();                            /* extern */
M2C_UNK func_002D2E90();                            /* extern */
M2C_UNK func_0080D030();                            /* extern */
M2C_UNK func_0080E0C0();                            /* extern */
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_00591DED[];
extern char D_0088A918[];

void func_0080E000(void) {
    s32 temp_s0;
    u8 temp_s0_2;

    func_002D5420(0);
    func_0080E0C0();
    func_002D2E90();
    temp_s0 = func_002371A0((s32) (*(u16 *)D_00591BB0));
    func_0023D8A0(temp_s0, func_002371A0((s32) (*(u16 *)D_00591BB2)));
    if (func_00802900() != 1) {
        temp_s0_2 = (*(u8 *)D_00591DED);
        func_00244E30();
        (*(u8 *)D_00591DED) = temp_s0_2;
    }
    func_0080D030();
    func_002D2FF0();
    (*(u8 *)D_0088A918) = ((*(u8 *)D_0088A918) & ~2) | 2;
}
