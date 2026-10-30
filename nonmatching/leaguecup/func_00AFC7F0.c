/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

f32 func_001D79A0(s32, M2C_UNK);                    /* extern */
M2C_UNK func_001D7A20(s32, s8 *, M2C_UNK);          /* extern */
M2C_UNK func_002E4BB0(s32, f32);                    /* extern */
M2C_UNK func_002E4D60(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_002E4DA0(s32, M2C_UNK);                /* extern */
M2C_UNK func_002E4DF0(s32);                         /* extern */
s32 func_002E4EA0(s32, s32);                        /* extern */
s32 func_002E4FD0(M2C_UNK, s8 *, M2C_UNK);          /* extern */
M2C_UNK func_002E56A0(s32, M2C_UNK, s32);           /* extern */
s32 func_00970870(M2C_UNK);                         /* extern */
s32 func_00971E80(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_00973AA0(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_00973CD0(s32, M2C_UNK);                    /* extern */
void *func_00B035D0();                              /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34], gap at: 0x8. */
void func_00AFC7F0(void) {
    s8 sp40;
    f32 temp_f20;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 var_s1;
    s32 var_v0;
    s8 *var_v1;
    void *temp_v0;

    var_v0 = 0x10;
    var_v1 = &sp40;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_v0 = func_00B035D0();
    if (temp_v0 != NULL) {
        temp_v0_2 = func_00973CD0(M2C_FIELD(temp_v0, s32 *, 4), 0);
        M2C_FIELD(temp_v0, s32 *, 0x400) = temp_v0_2;
        M2C_FIELD(temp_v0, s32 *, 0x40C) = func_00971E80(temp_v0_2, 0, 0, 6, 0xB, 1, 2);
        temp_v0_3 = func_00973CD0(M2C_FIELD(temp_v0, s32 *, 4), 1);
        func_001D7A20(temp_v0_3, &sp40, 1);
        temp_f20 = func_001D79A0(temp_v0_3, 1);
        temp_v0_4 = func_002E4FD0(1, &sp40, 0x10);
        M2C_FIELD(temp_v0, s32 *, 0x410) = temp_v0_4;
        func_002E4BB0(temp_v0_4, temp_f20);
        func_002E4DA0(M2C_FIELD(temp_v0, s32 *, 0x410), 0);
        func_002E4D60(M2C_FIELD(temp_v0, s32 *, 0x410), 0, func_00970870(1));
        var_s1 = 0;
        do {
            func_002E56A0(func_002E4EA0(M2C_FIELD(temp_v0, s32 *, 0x410), var_s1), 0, var_s1);
            var_s1 += 1;
        } while (var_s1 < 0x10);
        func_002E4DF0(M2C_FIELD(temp_v0, s32 *, 0x410));
        temp_v0_5 = func_00973CD0(M2C_FIELD(temp_v0, s32 *, 4), 2);
        M2C_FIELD(temp_v0, s32 *, 0x738) = temp_v0_5;
        M2C_FIELD(temp_v0, s32 *, 0x74C) = func_00973AA0(temp_v0_5, 1, 0);
        M2C_FIELD(temp_v0, s32 *, 0x750) = func_00973AA0(M2C_FIELD(temp_v0, s32 *, 0x738), 2, 0);
        M2C_FIELD(temp_v0, s32 *, 0x754) = func_00973AA0(M2C_FIELD(temp_v0, s32 *, 0x738), 3, 0);
        M2C_FIELD(temp_v0, s32 *, 0x758) = func_00973AA0(M2C_FIELD(temp_v0, s32 *, 0x738), 4, 0);
    }
}
