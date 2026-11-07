/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_001ED840(s32, M2C_UNK);                /* extern */
M2C_UNK func_001ED880(s32, M2C_UNK);                /* extern */
M2C_UNK func_001EDA30(s32, M2C_UNK);                /* extern */
M2C_UNK func_001EDAE0(s32, M2C_UNK);                /* extern */
s32 func_001EDD00(s32);                             /* extern */
s32 func_001EE0D0();                                /* extern */
M2C_UNK func_001EF900(s32, M2C_UNK);                /* extern */
extern s32 D_003E9C0C;
extern char D_0058D360[];
extern char D_0058D364[];
extern char D_0058D368[];
extern char D_0058D36C[];

void func_00260FA0(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    D_003E9C0C = 0;
    func_001C48E8(((void *)D_0058D360), 0, 0x10);
    temp_v0 = func_001EE0D0();
    (*(s32 *)D_0058D360) = temp_v0;
    func_001EDA30(temp_v0, 0);
    func_001EDAE0(temp_v0, 0);
    temp_v0_2 = func_001EDD00((*(s32 *)D_0058D360));
    (*(s32 *)D_0058D364) = temp_v0_2;
    func_001EF900(temp_v0_2, 1);
    (*(s32 *)D_0058D368) = 0;
    (*(s32 *)D_0058D36C) = 0x7F7FFFFF;
    func_001ED840((*(s32 *)D_0058D360), 0);
    func_001ED880((*(s32 *)D_0058D360), 0x7F7FFFFF);
}
