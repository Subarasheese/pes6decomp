/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001B70A0();                            /* extern */
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_001D5A10(M2C_UNK);                         /* extern */
M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7E40(s32, M2C_UNK);                /* extern */
s32 func_001D7F90(s32);                             /* extern */
extern char D_003F7794[];
extern char D_00522980[];
extern char D_00522984[];
extern char D_00522988[];
extern char D_00524798[];

void func_001B7750(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_001C48E8(((void *)D_00522980), 0, 0x1E1C);
    temp_v0 = func_001D5A10(0x1003E);
    (*(s32 *)D_00522984) = temp_v0;
    if ((*(s32 *)D_00522980) == 0) {
        temp_v0_2 = func_001D7F90(temp_v0);
        (*(s32 *)D_00522980) = temp_v0_2;
        func_001D7E40(temp_v0_2, 0);
    }
    func_001D7D60((*(s32 *)D_00522980), 0);
    (*(f32 *)D_00524798) = (f32) ((*(s16 *)D_003F7794) - 0x14);
    func_001B70A0();
    (*(s32 *)D_00522988) = 0;
}
