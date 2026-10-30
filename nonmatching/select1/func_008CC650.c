/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153560(void);
extern void func_0017B060(int, int, int);
extern void func_0017B050(int, int, int);
extern void func_00153FA0(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern void *D_003EA4C8;
extern char Pes6MatchPlayers[];

void func_008CC650(s32 arg0) {
    s32 var_a0;
    void *temp_s1;
    void *var_s0;
    void *var_v1;

    var_s0 = D_003EA4C8;
    if (var_s0 != NULL) {
loop_1:
        if (M2C_FIELD(var_s0, s32 *, 0) != arg0) {
            var_s0 = M2C_FIELD(var_s0, void **, 0x24);
            if (var_s0 == NULL) {
                goto block_7;
            }
            goto loop_1;
        }
    } else {
block_7:
        var_s0 = NULL;
    }
    if (var_s0 != NULL) {
        if (M2C_FIELD(var_s0, s32 *, 4) != 0) {
            func_00153560();
        }
        M2C_FIELD(var_s0, s32 *, 4) = 0;
        M2C_FIELD(var_s0, s32 *, 0x20) = (s32) (M2C_FIELD(var_s0, s32 *, 0x20) & ~1);
        func_001C48E8(var_s0 + 0x10, 0, 0x10);
        M2C_FIELD(var_s0, s32 *, 0x20) = (s32) (M2C_FIELD(var_s0, s32 *, 0x20) & ~2);
        if (arg0 != 0xFF) {
            var_a0 = arg0 % 23;
        } else {
            var_a0 = 1;
        }
        temp_s1 = *M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), void ***, 4);
        func_0017B060(M2C_FIELD(temp_s1, s32 *, 0x10), 0, 0);
        func_0017B050(M2C_FIELD(temp_s1, s32 *, 0x10), 0, 0);
        var_v1 = D_003EA4C8;
        if (var_v1 != var_s0) {
            if (M2C_FIELD(var_v1, s32 *, 0x24) != var_s0) {
                do {
                    var_v1 += 0x28;
                } while (M2C_FIELD(var_v1, s32 *, 0x24) != var_s0);
            }
            M2C_FIELD(var_v1, void **, 0x24) = (void *) M2C_FIELD(var_s0, void **, 0x24);
        } else {
            D_003EA4C8 = M2C_FIELD(var_s0, void **, 0x24);
        }
        func_00153FA0(var_s0);
    }
}
