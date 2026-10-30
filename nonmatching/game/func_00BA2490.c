/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027A5B0(void *, s8);
s32 func_009B30B0(u16, s32);                        /* extern */
s32 func_009B33F0(void *, void *);                  /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E4D[];
extern char D_00591E4E[];
extern char D_005926FD[];
extern char D_005926FE[];

void func_00BA2490(void *arg0) {
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_f1;
    s32 temp_f1_2;
    s32 var_a1;
    s32 var_a1_2;
    u8 temp_a0;
    void *temp_s0;
    void *temp_s0_2;

    if ((func_009E1C90(1) & 0xFF) != 0xA) {

    } else if ((((*(u8 *)D_005926FE) == 4) || ((*(u8 *)D_005926FD) == 1)) && (temp_a0 = M2C_FIELD(arg0, u8 *, 0), (temp_a0 != (*(u8 *)D_00591E4D))) && (temp_a0 != (*(u8 *)D_00591E4E))) {
        if ((*(u8 *)D_00591E4D) != 0xFF) {
            var_a1 = (s32) (*(u8 *)D_00591E4D) % 23;
        } else {
            var_a1 = 1;
        }
        temp_s0 = ((void *)Pes6MatchPlayers) + (var_a1 * 0x240);
        temp_f1 = (s32) (M2C_FIELD(arg0, f32 *, 0xE0) - M2C_FIELD(temp_s0, f32 *, 0xE0));
        temp_f0 = (s32) (M2C_FIELD(arg0, f32 *, 0xE8) - M2C_FIELD(temp_s0, f32 *, 0xE8));
        if ((u32) ((s64) (((temp_f1 * temp_f1) + (temp_f0 * temp_f0)) << 0x20) >> 0x20) >= 0x190000U) {
            goto block_10;
        }
        if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), func_009B33F0(arg0, temp_s0)) & 0xFFFF) < 0x40) {
            func_0027A5B0(arg0, (s8) M2C_FIELD(temp_s0, u8 *, 0));
        } else {
block_10:
            if ((*(u8 *)D_00591E4E) != 0xFF) {
                var_a1_2 = (s32) (*(u8 *)D_00591E4E) % 23;
            } else {
                var_a1_2 = 1;
            }
            temp_s0_2 = ((void *)Pes6MatchPlayers) + (var_a1_2 * 0x240);
            temp_f1_2 = (s32) (M2C_FIELD(arg0, f32 *, 0xE0) - M2C_FIELD(temp_s0_2, f32 *, 0xE0));
            temp_f0_2 = (s32) (M2C_FIELD(arg0, f32 *, 0xE8) - M2C_FIELD(temp_s0_2, f32 *, 0xE8));
            if (((u32) ((s64) (((temp_f1_2 * temp_f1_2) + (temp_f0_2 * temp_f0_2)) << 0x20) >> 0x20) < 0x190000U) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), func_009B33F0(arg0, temp_s0_2)) & 0xFFFF) < 0x40)) {
                func_0027A5B0(arg0, (s8) M2C_FIELD(temp_s0_2, u8 *, 0));
            }
        }
    }
}
