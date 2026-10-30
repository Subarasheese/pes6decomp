/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00AFBA70(s32);
extern s32 func_009B30B0(s32, s32);
s32 func_00BDB8B0(void *);                          /* extern */
extern char Pes6MatchPlayers[];
extern char D_005926EC[];

s32 func_00A0A070(void *arg0) {
    s32 var_a0;
    void *temp_s0;

    if (M2C_FIELD(arg0, s32 *, 0x1C) >= (0xF00 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC))) {
        if ((func_00AFBA70((s32) M2C_FIELD(arg0, u8 *, 0)) & 0xFF) == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = (s32) (func_00AFBA70((s32) M2C_FIELD(arg0, u8 *, 0)) & 0xFF) % 23;
        }
        temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        if (func_00BDB8B0(temp_s0) != 0) {
            if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), (s32) M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0) * 2) + arg0), u16 *, 0x128)) & 0xFFFF) >= 0x18) {
                return 0;
            }
            if ((u32) M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0) * 4) + arg0), u32 *, 0x158) >= 0x14400U) {
                return 0;
            }
            if (M2C_FIELD(temp_s0, s32 *, 0x1C) < 0x800) {
                M2C_FIELD(arg0, s8 *, 0x16) = 0x18;
                M2C_FIELD(arg0, s16 *, 0x18) = 7;
                M2C_FIELD(arg0, u8 *, 0x62) = (u8) (*(u8 *)D_005926EC);
                return 1;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
