/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00996180();                                /* extern */
M2C_UNK func_00C13AB0(M2C_UNK *, s32, u8 *);        /* extern */
s32 func_00C18EC0();                                /* extern */
extern void *Pes6Ball_Current;
extern void *D_003E7A08;
extern char Pes6MatchPlayers[];
extern char D_00CCAD50[];
extern char D_00CCAD54[];

void func_00C13CB0(void) {
    u8 sp28;
    u8 sp29;
    s16 sp2C;
    s16 sp2E;
    s32 temp_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v1;
    s32 var_v1_2;
    u8 temp_a0;
    u8 temp_v1_2;
    void *temp_v1;

    if (func_00C18EC0() != 0) {
        M2C_FIELD(((void *)D_00CCAD50), u8 *, 1) = 0xFFU;
    }
    if (func_00996180() != 0) {
        temp_a0 = M2C_FIELD(D_003E7A08, u8 *, 8);
        if (temp_a0 != 0xFF) {
            if (temp_a0 == 0xFF) {
                var_a1 = 1;
            } else {
                var_a1 = (s32) temp_a0 % 23;
            }
            temp_v1 = ((void *)Pes6MatchPlayers) + (var_a1 * 0x240);
            M2C_FIELD(((void *)D_00CCAD50), u8 *, 1) = (u8) ((M2C_FIELD(temp_v1, u8 *, 0x12) << 5) | (M2C_FIELD(temp_v1, u8 *, 0x11) & 0x1F));
        }
        temp_a0_2 = M2C_FIELD(D_003E7A08, s32 *, 4);
        if ((temp_a0_2 != 5) && (temp_a0_2 != 4)) {
            M2C_FIELD(((void *)D_00CCAD50), u8 *, 2) = 0U;
        } else {
            M2C_FIELD(((void *)D_00CCAD50), u8 *, 2) = 1U;
        }
    }
    var_a1_2 = 0;
    if ((&sp28 != NULL) && (M2C_FIELD(((void *)D_00CCAD50), u8 *, 1) != 0xFF)) {
        if (M2C_FIELD(((void *)D_00CCAD50), u8 *, 0) == 0) {
            var_a1_2 = 1;
        }
        switch (var_a1_2) {                         /* irregular */
        case 0:
            break;
        case 1:
            sp28 = M2C_FIELD(((void *)D_00CCAD50), u8 *, 1);
            var_v1 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x10);
            if (var_v1 < -0x8000) {
                var_v1 = -0x8000;
            } else if (var_v1 >= 0x8000) {
                var_v1 = 0x7FFF;
            }
            sp2C = (s16) var_v1;
            var_v1_2 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x18);
            if (var_v1_2 >= -0x8000) {
                if (var_v1_2 >= 0x8000) {
                    var_v1_2 = 0x7FFF;
                }
            } else {
                var_v1_2 = -0x8000;
            }
            sp2E = (s16) var_v1_2;
            sp29 = M2C_FIELD(((void *)D_00CCAD50), u8 *, 2);
            break;
        }
    }
    temp_v1_2 = M2C_FIELD(((void *)D_00CCAD50), u8 *, 0) + 1;
    M2C_FIELD(((void *)D_00CCAD50), u8 *, 0) = temp_v1_2;
    if ((temp_v1_2 & 0xFF) >= 3) {
        M2C_FIELD(((void *)D_00CCAD50), u8 *, 0) = 0U;
    }
    if (var_a1_2 != 0) {
        func_00C13AB0(((void *)D_00CCAD54), var_a1_2, &sp28);
    }
}
