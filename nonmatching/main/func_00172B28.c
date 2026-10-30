/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00163518(int);
extern int func_00163470(int);
M2C_UNK LSC_CallErrFunc(M2C_UNK *);                   /* extern */
extern char D_003CB2E0[];

void func_00172B28(void *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    void *temp_s1;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_a0 != 0) {
        temp_s1 = arg0 + (M2C_FIELD(arg0, s32 *, 0x20) << 5) + 0x38;
        temp_v0 = func_00163470(temp_a0);
        switch (temp_v0) {                          /* irregular */
        case 4:
            M2C_FIELD(arg0, s8 *, 1) = 3;
            return;
        case 2:
            M2C_FIELD(temp_s1, s32 *, 0x1C) = func_00163518(M2C_FIELD(arg0, s32 *, 0x28));
            return;
        case 3:
            M2C_FIELD(temp_s1, s32 *, 0x18) = 2;
            M2C_FIELD(temp_s1, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x2C);
            return;
        }
    } else {
        LSC_CallErrFunc(((void *)D_003CB2E0));
    }
}
