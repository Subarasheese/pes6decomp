/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008CB6E0(s32, void *);                 /* extern */
s32 func_008CBCA0(s32);                             /* extern */
M2C_UNK func_00BCA220(void *, u16);                 /* extern */
M2C_UNK func_00BCA370(void *);                      /* extern */
M2C_UNK func_00BCA530(s32);                         /* extern */
M2C_UNK func_00BCA8D0(s32);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CE5180[];

void func_00BCA0A0(void *arg0) {
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v1;
    void *temp_a0_2;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
    switch (temp_a0) {                              /* irregular */
    case 1:
        if (func_008CBCA0(temp_a0) != 0) {
            func_00BCA370(arg0);
            M2C_FIELD(arg0, s32 *, 0xC) = 2;
        case 2:
            temp_v1 = M2C_FIELD(arg0, s32 *, 4);
            if (temp_v1 == 0xFF) {
                var_a0 = 1;
            } else {
                var_a0 = temp_v1 % 23;
            }
            func_00BCA8D0(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), s32 *, 4));
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 4);
            if (temp_v1_2 == 0xFF) {
                var_a0_2 = 1;
            } else {
                var_a0_2 = temp_v1_2 % 23;
            }
            M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240)), u16 *, 0x26) = (u16) (*(u16 *)D_00CE5180);
            func_00BCA220(arg0, (*(u16 *)D_00CE5180));
            temp_v1_3 = M2C_FIELD(arg0, s32 *, 4);
            if (temp_v1_3 != 0xFF) {
                var_v1 = temp_v1_3 % 23;
            } else {
                var_v1 = 1;
            }
            temp_a0_2 = ((void *)Pes6MatchPlayers) + (var_v1 * 0x240);
            if (M2C_FIELD((arg0 + 0x28), s32 *, 4) != 1) {
                M2C_FIELD(temp_a0_2, f32 *, 0xE4) = 0.0f;
            } else {
                M2C_FIELD(temp_a0_2, f32 *, 0xE4) = (f32) (416.0f * M2C_FIELD(*M2C_FIELD(temp_a0_2, void ***, 4), f32 *, 0x60));
            }
            func_008CB6E0(M2C_FIELD(arg0, s32 *, 4), arg0 + 0x30);
            func_00BCA530(M2C_FIELD(arg0, s32 *, 0x28));
        }
    case 0:
        return;
    }
}
