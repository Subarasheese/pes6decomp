/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00B15370(void);
M2C_UNK func_00957070(s32);                         /* extern */
M2C_UNK func_009718C0(s32);                         /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */
M2C_UNK func_00973460(s32);                         /* extern */

void func_00B0EE70(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;
    u32 temp_v0;

    temp_v0 = func_00B15370();
    if ((temp_v0 != 0) && (M2C_FIELD(temp_v0, void **, 8) != NULL)) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x8A0);
        if (temp_a0 != 0) {
            func_00973460(temp_a0);
            M2C_FIELD(temp_v0, s32 *, 0x8A0) = 0;
        }
        temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 0x9FC);
        if (temp_a0_2 != 0) {
            func_00973460(temp_a0_2);
            M2C_FIELD(temp_v0, s32 *, 0x9FC) = 0;
        }
        temp_a0_3 = M2C_FIELD(temp_v0, s32 *, 0x8C0);
        if (temp_a0_3 != 0) {
            func_00971E30(temp_a0_3);
            M2C_FIELD(temp_v0, s32 *, 0x8C0) = 0;
        }
        temp_a0_4 = M2C_FIELD(temp_v0, s32 *, 0x8A4);
        if (temp_a0_4 != 0) {
            func_00957070(temp_a0_4);
            M2C_FIELD(temp_v0, s32 *, 0x8A4) = 0;
        }
        temp_a0_5 = M2C_FIELD(temp_v0, s32 *, 0x8A8);
        if (temp_a0_5 != 0) {
            func_00957070(temp_a0_5);
            M2C_FIELD(temp_v0, s32 *, 0x8A8) = 0;
        }
        temp_a0_6 = M2C_FIELD(temp_v0, s32 *, 0x8AC);
        if (temp_a0_6 != 0) {
            func_00957070(temp_a0_6);
            M2C_FIELD(temp_v0, s32 *, 0x8AC) = 0;
        }
        temp_a0_7 = M2C_FIELD(temp_v0, s32 *, 0x948);
        if (temp_a0_7 != 0) {
            func_00972290(temp_a0_7);
            M2C_FIELD(temp_v0, s32 *, 0x948) = 0;
        }
        temp_a0_8 = M2C_FIELD(temp_v0, s32 *, 0x94C);
        if (temp_a0_8 != 0) {
            func_00972290(temp_a0_8);
            M2C_FIELD(temp_v0, s32 *, 0x94C) = 0;
        }
        temp_a0_9 = M2C_FIELD(temp_v0, s32 *, 0x8BC);
        if (temp_a0_9 != 0) {
            func_009718C0(temp_a0_9);
            M2C_FIELD(temp_v0, s32 *, 0x8BC) = 0;
        }
        func_001D4E00(M2C_FIELD(temp_v0, void **, 8));
        M2C_FIELD(temp_v0, void **, 8) = NULL;
    }
}
