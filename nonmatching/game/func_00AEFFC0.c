/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
u16 func_009B3480(void *, f32, f32);                /* extern */
extern s32 Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_005926E4[];

s32 func_00AEFFC0(void *arg0, void *arg1) {
    s32 temp_v1_2;
    s32 var_a0;
    u8 temp_v1;
    void *temp_a0;
    void *temp_v0;

    temp_v1 = M2C_FIELD(arg1, u8 *, 1);
    if (temp_v1 != 0xFF) {
        var_a0 = (s32) temp_v1 % 23;
    } else {
        var_a0 = 1;
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_a0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    if (temp_v1_2 < 0x800) {
        return 0;
    }
    if ((M2C_FIELD(temp_a0, s32 *, 0x1C) - temp_v1_2) >= 0x481) {
        return 0;
    }
    if ((u32) M2C_FIELD(temp_a0, u32 *, 0x110) >= 0x40001U) {
        return 0;
    }
    if ((u32) M2C_FIELD(arg1, u32 *, 4) < 0x17C41U) {
        if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(temp_a0, u16 *, 0x26)) & 0xFFFF) < 0x34) {
            if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg1, u16 *, 2)) & 0xFFFF) >= 0x42) {
                return 0;
            }
            temp_v0 = ((*(u8 *)D_005926E4) * 4) + Pes6Ball_Current;
            if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), func_009B3480(arg0, M2C_FIELD(temp_v0, f32 *, 0x47C), M2C_FIELD(temp_v0, f32 *, 0xB7C))) & 0xFFFF) < 0x10) {
                return (func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg1, u16 *, 2)) & 0xFFFF) >= 0x29;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
