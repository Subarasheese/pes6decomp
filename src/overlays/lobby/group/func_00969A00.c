/* compiler: mwcc-3.0.1b198 */
#include "pes6/m2c.h"

extern s32 func_00815450(void);
extern s32 func_008156F0(void);
extern s32 func_0093D4B0(void);
extern s32 func_009717C0(s32);
extern s32 func_0099C7F0(s32);

extern char D_00A68CA8[];

void func_00969A00(void) {
    s32 value;

    if ((*(s32 *)D_00A68CA8) == 0) {
        value = func_0099C7F0(0x194);
        (*(s32 *)D_00A68CA8) = value;
        M2C_FIELD(value, s32 *, 0x168) = 0;
        M2C_FIELD((*(s32 *)D_00A68CA8), s32 *, 0x16C) = 0;
        M2C_FIELD((*(s32 *)D_00A68CA8), s32 *, 0x170) = 0;
        M2C_FIELD((*(s32 *)D_00A68CA8), s32 *, 0x178) = func_0093D4B0();
        M2C_FIELD((*(s32 *)D_00A68CA8), s32 *, 0x174) = 0;
        M2C_FIELD((*(s32 *)D_00A68CA8), s32 *, 0x180) = 0;
        M2C_FIELD((*(s32 *)D_00A68CA8), s32 *, 0x190) = 0;
        if (func_00815450() != 0) {
            M2C_FIELD((*(s32 *)D_00A68CA8), s32 *, 0x18C) = 1;
        } else {
            M2C_FIELD((*(s32 *)D_00A68CA8), s32 *, 0x18C) = 0;
        }
    }
    if (!((M2C_FIELD((*(s32 *)D_00A68CA8), s32 *, 0x18C) == 0) || (func_008156F0() == 1))) {
        return;
    }
    func_009717C0(1);
}
