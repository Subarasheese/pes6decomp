/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_00CE3D20(s32);                         /* extern */
M2C_UNK func_00CE3F00(s32);                         /* extern */
extern s32 D_003E7E1C;
extern char D_00CFFF10[];

void func_00CF0D20(void) {
    func_00CE3F00(D_003E7E1C + 8);
    func_00CE3F00(D_003E7E1C + 0x18);
    func_00CE3F00(D_003E7E1C + 0x28);
    func_00CE3F00(D_003E7E1C + 0x78);
    func_00CE3F00(D_003E7E1C + 0x88);
    func_00CE3F00(D_003E7E1C + 0x38);
    func_00CE3D20(D_003E7E1C + 0x110);
    func_00CE3D20(D_003E7E1C + 0xE8);
    func_00CE3D20(D_003E7E1C + 0xFC);
    func_002DF960((*(s32 *)D_00CFFF10));
    (*(s32 *)D_00CFFF10) = 0;
}
