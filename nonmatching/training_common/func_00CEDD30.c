/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_00CEAD10(void);
extern s32 func_00263030(void);
extern void func_002D2FF0(void);
M2C_UNK func_001FA5A0();                            /* extern */
M2C_UNK func_001FAF40(M2C_UNK, u16);                /* extern */
M2C_UNK func_0023EA80();                            /* extern */
M2C_UNK func_00244E30();                            /* extern */
M2C_UNK func_00CEA430();                            /* extern */
extern s8 D_003E9E88;
extern s8 D_003E9E89;
extern char D_00591BB0[];
extern char D_00591BB2[];

void func_00CEDD30(void) {
    (*(u16 *)D_00591BB0) = func_00CEAD10();
    (*(u16 *)D_00591BB2) = func_00CEAD10();
    if (func_00263030() == 0) {
        func_00CEA430();
    }
    func_001FA5A0();
    func_001FAF40(0, (*(u16 *)D_00591BB0));
    func_001FAF40(1, (*(u16 *)D_00591BB2));
    D_003E9E88 = 0;
    D_003E9E89 = 0x3F;
    func_00244E30();
    func_0023EA80();
    func_002D2FF0();
}
