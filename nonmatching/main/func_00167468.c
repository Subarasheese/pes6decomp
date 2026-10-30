/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00162880(void *);
extern int func_00162B58(void *);
extern s32 func_00162B10(void *);
extern void func_0015B478(void *);
extern char D_003C8E68[];

void func_00167468(void *arg0, s8 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s0;
    void **temp_v1;

    if (arg0 == NULL) {
        func_0015B478(((void *)D_003C8E68));
        return;
    }
    temp_v1 = M2C_FIELD(arg0, void ***, 0x14);
    var_s0 = 0;
    M2C_FIELD(arg0, s8 *, 0x6C) = arg1;
    if (temp_v1 != NULL) {
        var_s0 = M2C_FIELD(*temp_v1, s32 (**)(void **, M2C_UNK), 0x24)(temp_v1, 1);
    }
    temp_s0 = func_00162880(M2C_FIELD(arg0, void **, 4)) + var_s0;
    temp_v0 = func_00162B10(M2C_FIELD(arg0, void **, 4));
    temp_v0_2 = temp_v0 + 0x7FF;
    temp_s1 = ((s32) ((temp_v0_2 < 0) ? (temp_v0 + 0xFFE) : temp_v0_2) >> 0xB) << 0xB;
    temp_v0_3 = func_00162B58(M2C_FIELD(arg0, void **, 4));
    temp_v1_2 = temp_v0_3 + 0x7FF;
    temp_v1_3 = (((s32) ((temp_v1_2 < 0) ? (temp_v0_3 + 0xFFE) : temp_v1_2) >> 0xB) << 0xB) - temp_s1;
    if (temp_v1_3 <= 0) {
        M2C_FIELD(arg0, s32 *, 0xC4) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) ((((s32) (temp_s0 - temp_s1) / temp_v1_3) * temp_v1_3) + temp_s1);
}
