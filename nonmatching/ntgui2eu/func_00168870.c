/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00168E40();                            /* extern */
M2C_UNK func_0016B348(s32);                         /* extern */
extern char D_005BFFA8[];
extern char D_005BFFAC[];

void func_00168870(void *arg0) {
    s32 temp_a1;

    func_00168E40();
    func_0016B348(arg0 + 0x840);
    temp_a1 = (*(s32 *)D_005BFFA8) * 0x10;
    M2C_FIELD(arg0, s32 *, 0x854) = 0;
    M2C_FIELD(arg0, s32 *, 0x810) = 0;
    M2C_FIELD(arg0, s32 *, 0x814) = 0;
    M2C_FIELD(arg0, s32 *, 0x818) = 0;
    M2C_FIELD(arg0, s32 *, 0x81C) = 0;
    M2C_FIELD(arg0, s32 *, 0x864) = 0;
    M2C_FIELD(arg0, s32 *, 0x858) = 1;
    M2C_FIELD(arg0, s32 *, 0x820) = temp_a1;
    M2C_FIELD(arg0, s32 *, 0x824) = (s32) ((*(s32 *)D_005BFFAC) * 0x10);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *, s32, M2C_UNK), 0x130)(arg0, temp_a1, 1);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *), 0x12C)(arg0);
}
