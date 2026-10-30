/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00996180();                                /* extern */
s32 func_00C14150(void *, void *);                  /* extern */
s32 func_00C18D20(u8);                              /* extern */
s32 func_00C18EE0();                                /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591BE4[];
extern char D_00CCAD60[];

s32 func_00C13F20(void *arg0, void *arg1) {
    f32 var_f0;
    s32 var_a0;
    s32 var_s3;
    u16 temp_v1_2;
    u8 temp_v1;
    u8 temp_v1_3;
    void *temp_a0;
    void *temp_s0;
    void *temp_s2;

    var_s3 = 0;
    temp_s2 = arg0 + 4;
    if ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0xA) << 0x3B) >> 0x3E) == 0) && (arg1 != NULL)) {
        if ((func_00996180() & 0xFF) != 1) {
            if ((u32) (M2C_FIELD(arg0, s32 *, 4) - 4) < 2U) {
                temp_v1 = func_00C18D20(M2C_FIELD(temp_s2, u8 *, 4)) & 0xFF;
                if (temp_v1 != M2C_FIELD(((void *)D_00CCAD60), u8 *, 2)) {
                    M2C_FIELD(((void *)D_00CCAD60), u8 *, 2) = temp_v1;
                    M2C_FIELD(((void *)D_00CCAD60), u16 *, 0) = 0U;
                }
                temp_v1_2 = M2C_FIELD(((void *)D_00CCAD60), u16 *, 0) + 1;
                M2C_FIELD(((void *)D_00CCAD60), u16 *, 0) = temp_v1_2;
                if ((s32) (*(u8 *)D_00591BE4) >= 0) {
                    var_f0 = (f32) (*(u8 *)D_00591BE4);
                } else {
                    var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_00591BE4) >> 1) | ((*(u8 *)D_00591BE4) & 1));
                }
                if (((s32) (temp_v1_2 & 0xFFFF) % (s32) (1.5f * var_f0)) == 0) {
                    temp_v1_3 = M2C_FIELD(temp_s2, u8 *, 4);
                    var_s3 = 0x11;
                    if (temp_v1_3 != 0xFF) {
                        var_a0 = (s32) temp_v1_3 % 23;
                    } else {
                        var_a0 = 1;
                    }
                    temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
                    func_001C48E8(arg1, 0, 0x20);
                    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(temp_s2, f32 *, 0xC);
                    M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(temp_s2, f32 *, 0x14);
                    M2C_FIELD(arg1, s8 *, 0x1B) = (s8) ((M2C_FIELD(temp_s0, u8 *, 0x12) << 5) | (M2C_FIELD(temp_s0, u8 *, 0x11) & 0x1F));
                    M2C_FIELD(arg1, s8 *, 0x1C) = 0xFF;
                    M2C_FIELD(arg1, u8 *, 0x1D) = (u8) M2C_FIELD(temp_s2, u8 *, 5);
                    M2C_FIELD(arg1, s8 *, 0x1F) = 1;
                }
            }
            goto block_21;
        }
        temp_a0 = arg0 + 0x44;
        if ((M2C_FIELD(((void *)D_00CCAD60), u8 *, 3) == M2C_FIELD(arg0, s32 *, 4)) && (M2C_FIELD(temp_a0, u8 *, 4) == M2C_FIELD(temp_s2, u8 *, 4)) && ((u32) (M2C_FIELD(temp_a0, s32 *, 0x18) - M2C_FIELD(temp_s2, s32 *, 0x18)) < 4U)) {
            return 0;
        }
        var_s3 = func_00C14150(temp_s2, arg1);
        M2C_FIELD(((void *)D_00CCAD60), u8 *, 3) = (u8) M2C_FIELD(arg0, s32 *, 4);
        goto block_21;
    }
block_21:
    if (func_00C18EE0() == 0) {
        M2C_FIELD(((void *)D_00CCAD60), u16 *, 0) = 0U;
        M2C_FIELD(((void *)D_00CCAD60), u8 *, 2) = 0xFFU;
    }
    return var_s3;
}
