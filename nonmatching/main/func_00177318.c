/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00176E78(void *, int);
extern char D_003CC2D0[];
extern char D_003CC300[];
extern char D_003CC340[];
extern char D_003CC350[];
extern char D_003CC360[];
extern char D_003CC370[];

void func_00177318(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    M2C_UNK (*temp_v0_4)(s32, M2C_UNK, void *, s32);
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;

    if (arg0 == NULL) {
        func_00176E78(((void *)D_003CC340), (s32) ((void *)D_003CC2D0));
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x20);
        if (temp_a0 == 0) {
            func_00176E78(((void *)D_003CC360), (s32) ((void *)D_003CC370));
            return;
        }
        if (arg1 == 0) {
            temp_a1 = M2C_FIELD(arg0, s32 *, 0x10);
            temp_v0 = (temp_a0 - M2C_FIELD(arg0, s32 *, 0x14)) + M2C_FIELD(arg0, s32 *, 0x24);
            temp_v0_2 = (temp_a1 < temp_v0) ? temp_a1 : temp_v0;
            temp_v0_3 = (temp_v0_2 >= arg2) ? arg2 : temp_v0_2;
            M2C_FIELD(arg3, s32 *, 4) = temp_v0_3;
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x14);
            M2C_FIELD(arg3, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + temp_a0_2);
            M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((s32) (temp_a0_2 + temp_v0_3) % (s32) M2C_FIELD(arg0, s32 *, 0x20));
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) - M2C_FIELD(arg3, s32 *, 4));
            M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(arg3, s32 *, 4));
            return;
        }
        if (arg1 != 1) {
            temp_v0_4 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK, void *, s32), 0x38);
            M2C_FIELD(arg3, s32 *, 0) = 0;
            M2C_FIELD(arg3, s32 *, 4) = 0;
            if (temp_v0_4 != NULL) {
                temp_v0_4(M2C_FIELD(arg0, s32 *, 0x3C), -3, arg0, arg2);
            }
            return;
        }
        temp_a1_2 = M2C_FIELD(arg0, s32 *, 0xC);
        temp_v0_5 = (temp_a0 - M2C_FIELD(arg0, s32 *, 0x18)) + M2C_FIELD(arg0, s32 *, 0x24);
        temp_v0_6 = (temp_a1_2 < temp_v0_5) ? temp_a1_2 : temp_v0_5;
        temp_v0_7 = (temp_v0_6 >= arg2) ? arg2 : temp_v0_6;
        M2C_FIELD(arg3, s32 *, 4) = temp_v0_7;
        temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x18);
        M2C_FIELD(arg3, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + temp_a0_3);
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) ((s32) (temp_a0_3 + temp_v0_7) % (s32) M2C_FIELD(arg0, s32 *, 0x20));
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - M2C_FIELD(arg3, s32 *, 4));
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + M2C_FIELD(arg3, s32 *, 4));
        return;
    }
    func_00176E78(((void *)D_003CC350), (s32) ((void *)D_003CC300));
}
