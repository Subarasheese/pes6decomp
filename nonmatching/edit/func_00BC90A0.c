/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027A880(int);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_008CB660(s32);                         /* extern */
M2C_UNK func_008CB9F0(s32);                         /* extern */
M2C_UNK func_00BCAE40(s32, s32);                    /* extern */
M2C_UNK func_00BCC510(s32);                         /* extern */
M2C_UNK func_00C184E0();                            /* extern */
M2C_UNK func_00C186B0();                            /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00CE4F40[];

void func_00BC90A0(s32 arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    void *temp_s0;

    temp_s0 = ((void *)D_00CE4F40) + (arg0 * 0xC0);
    if (M2C_FIELD(temp_s0, s32 *, 0xC) != 0) {
        func_00BCC510(M2C_FIELD(temp_s0, s32 *, 4));
        func_001C48E8(temp_s0 + 0x14, 0, 0x14);
        func_008CB660(M2C_FIELD(temp_s0, s32 *, 4));
        M2C_FIELD(temp_s0, s32 *, 0x28) = 0x15;
        M2C_FIELD(temp_s0, s32 *, 0x10) = 8;
        temp_v1 = M2C_FIELD(temp_s0, s32 *, 4);
        if (temp_v1 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = temp_v1 % 23;
        }
        func_00BCAE40(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), s32 *, 4), M2C_FIELD(temp_s0, s32 *, 0x10));
        func_008CB9F0(M2C_FIELD(temp_s0, s32 *, 4));
        temp_v1_2 = M2C_FIELD(temp_s0, s32 *, 4);
        if (temp_v1_2 == 0xFF) {
            var_a0_2 = 1;
        } else {
            var_a0_2 = temp_v1_2 % 23;
        }
        M2C_FIELD(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240)), void **, 4), s8 *, 0x2C) = 0;
        M2C_FIELD(temp_s0, s32 *, 0xBC) = 0;
        if (Pes6Ball_Current != NULL) {
            M2C_FIELD(Pes6Ball_Current, s8 *, 0xC) = 0;
            if (M2C_FIELD(Pes6Ball_Current, s32 *, 8) != 0) {
                func_0027A880(0);
            }
        }
        func_00C186B0();
        func_00C184E0();
        M2C_FIELD(temp_s0, s32 *, 0xC) = 0;
    }
}
