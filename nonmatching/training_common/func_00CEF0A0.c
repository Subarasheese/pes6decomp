/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_00CE3D20(s32);                         /* extern */
M2C_UNK func_00CE3F00(s32);                         /* extern */
M2C_UNK func_00CE9B20();                            /* extern */
extern s32 D_003E7E1C;
extern char D_00CFFE98[];
extern char D_00CFFE9C[];

void func_00CEF0A0(void) {
    func_00CE3F00(D_003E7E1C + 8);
    func_00CE3F00(D_003E7E1C + 0x28);
    func_00CE3F00(D_003E7E1C + 0x18);
    func_00CE3D20(D_003E7E1C + 0x98);
    func_00CE3D20(D_003E7E1C + 0xD4);
    func_00CE9B20();
    func_002DF960((*(s32 *)D_00CFFE9C));
    (*(s32 *)D_00CFFE9C) = 0;
    (*(s32 *)D_00CFFE98) = 0;
}
