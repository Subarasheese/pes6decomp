/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00209A00(void *, u16, s32);            /* extern */
s32 *func_00B2A420(u8);                             /* extern */
M2C_UNK func_00B74ED0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B75580(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B76710();                            /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CBBE00[];
extern char D_00CBBE04[];
extern char D_00CBBE05[];

void func_00B70660(void) {
    M2C_UNK *var_s0;
    f32 temp_f1;
    f32 temp_f1_2;
    s32 *temp_v0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s1;
    u8 temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;

    var_s1 = 0;
    var_s0 = ((void *)Pes6MatchPlayers);
    do {
        temp_v0 = func_00B2A420(M2C_FIELD(var_s0, u8 *, 0));
        temp_a0 = M2C_FIELD(var_s0, u8 *, 0);
        if ((*(u8 *)D_00CBBE04) != temp_a0) {
            if ((*(u8 *)D_00CBBE05) == temp_a0) {
                temp_a0_2 = M2C_FIELD(var_s0, void **, 4);
                temp_f1 = M2C_FIELD(temp_a0_2, f32 *, 0x38);
                if (temp_f1 >= 2.1474836e9f) {
                    var_a2 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
                } else {
                    var_a2 = (s32) temp_f1;
                }
                func_00209A00(temp_a0_2, M2C_FIELD(temp_a0_2, u16 *, 0x30), var_a2 & 0xFFFF);
                func_00B76710();
            } else {
                temp_a0_3 = M2C_FIELD(var_s0, void **, 4);
                temp_f1_2 = M2C_FIELD(temp_a0_3, f32 *, 0x38);
                if (temp_f1_2 >= 2.1474836e9f) {
                    var_a2_2 = (s32) (temp_f1_2 - 2.1474836e9f) | 0x80000000;
                } else {
                    var_a2_2 = (s32) temp_f1_2;
                }
                func_00209A00(temp_a0_3, M2C_FIELD(temp_a0_3, u16 *, 0x30), var_a2_2 & 0xFFFF);
            }
        } else if ((*(u8 *)D_00CBBE00) != 0) {
            func_00B75580(*temp_v0, 1);
        } else {
            func_00B74ED0(*temp_v0, 1);
        }
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0x17);
}
