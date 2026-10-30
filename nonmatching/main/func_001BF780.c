/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
extern void * func_001E7100(s32);
extern s32 func_001E6C50(void *);
void *func_001E6E10(s32);                           /* extern */
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */
extern char D_00398660[];

void func_001BF780(void *arg0) {
    s32 temp_a0;
    s32 temp_s1;
    void *temp_v0;
    void *temp_v0_2;

    temp_s1 = M2C_FIELD(((void *)D_00398660), s32 *, 4);
    temp_v0 = func_001E6E10(M2C_FIELD(((void *)D_00398660), s32 *, 8));
    if (temp_v0 != NULL) {
        func_001E6C50(temp_v0);
        M2C_FIELD(((void *)D_00398660), s32 *, 8) = -1;
    }
    if ((M2C_FIELD(((void *)D_00398660), u32 *, 0xC) != -1U) && (func_001E7100(func_0021E000(M2C_FIELD(((void *)D_00398660), u32 *, 0xC))) != NULL)) {
        func_001E7140(func_0021E000(M2C_FIELD(((void *)D_00398660), u32 *, 0xC)));
        M2C_FIELD(((void *)D_00398660), s32 *, 0x10) = 0;
        M2C_FIELD(((void *)D_00398660), s32 *, 8) = -1;
        M2C_FIELD(((void *)D_00398660), u32 *, 0xC) = -1U;
    }
    if (temp_s1 != 1) {
        temp_v0_2 = func_001E6E10(temp_s1);
        if (temp_v0_2 != NULL) {
            func_001E6C50(temp_v0_2);
            M2C_FIELD(((void *)D_00398660), s32 *, 0x10) = 0;
            M2C_FIELD(((void *)D_00398660), s32 *, 8) = -1;
            M2C_FIELD(((void *)D_00398660), u32 *, 0xC) = -1U;
            M2C_FIELD(((void *)D_00398660), s32 *, 4) = -1;
        }
    }
    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a0 != 0) {
        func_001EDD90(temp_a0);
        M2C_FIELD(arg0, s32 *, 0) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
}
