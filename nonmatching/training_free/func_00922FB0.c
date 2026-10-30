/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_002C7BF0(s32);
extern u8 func_002C7C40(s32);
extern s32 func_002C7D30(s32);
M2C_UNK func_00923190(void *, M2C_UNK);             /* extern */
M2C_UNK func_00923EE0(void *);                      /* extern */
M2C_UNK func_009243B0(void *, u8);                  /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591BE4[];
extern char D_00591DC4[];
extern char D_00592800[];

void func_00922FB0(void) {
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    u8 temp_s5;
    void *temp_s2;

    if ((u32) ((u32) (*(u32 *)D_00591DC4) % (u32) ((*(u8 *)D_00591BE4) * 2)) < 4U) {
        var_s4 = 0;
        var_s1 = 2;
        var_s0 = 0;
        do {
            if (var_s1 != 0xFF) {
                var_a0 = (var_s0 % 23) + 2;
            } else {
                var_a0 = 1;
            }
            temp_s2 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
            temp_s5 = M2C_FIELD(temp_s2, u8 *, 0x12);
            var_s3 = 0;
            if (M2C_FIELD(temp_s2, u8 *, 0x24) == 1) {
                var_s3 = 1;
            }
            if ((var_s3 != 0) && (M2C_FIELD((((void *)D_00592800) + temp_s5), u8 *, 0x15B) == 0xFF)) {
                goto block_9;
            }
            if (func_002C7D30((s32) temp_s5) == 0) {
                if (func_002C7BF0((s32) temp_s5) & 0xFF) {
                    func_00923190(temp_s2, 0);
                }
            } else {
block_9:
                func_00923190(temp_s2, 1);
            }
            if ((var_s3 != 0) && (M2C_FIELD((((void *)D_00592800) + temp_s5), u8 *, 0x15B) == 0xFF)) {
                goto block_12;
            }
            if ((func_002C7D30((s32) temp_s5) == 0) && ((func_002C7C40((s32) temp_s5) & 0xFF) != 4)) {
                if (func_002C7C40((s32) temp_s5) & 0xFF) {
                    func_009243B0(temp_s2, func_002C7C40((s32) temp_s5));
                }
            } else {
block_12:
                func_00923EE0(temp_s2);
            }
            var_s4 += 1;
            var_s1 += 0xB;
            var_s0 += 0xB;
        } while (var_s4 < 2);
    }
}
