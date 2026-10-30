/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AFBAB0(u8);                              /* extern */
s32 func_00B29E20(M2C_UNK);                         /* extern */
s32 func_00B79860(void *);                          /* extern */
M2C_UNK func_00B798F0(f32 *, f32 *, u8);            /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591C09[];
extern char D_00591E4D[];
extern char D_00591E4E[];
extern char D_005A2020[];

void func_009EFE40(void) {
    f32 sp68;
    f32 sp6C;
    s16 temp_a2;
    s32 temp_f0;
    s32 temp_f0_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    u8 var_s2;
    void *temp_a1;
    void *var_s1;

    if (((func_00AFBAB0((*(u8 *)D_00591E4D)) & 0xFF) + 1) == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (func_00AFBAB0((*(u8 *)D_00591E4D)) & 0xFF) + 1;
    }
    var_s1 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    func_00B798F0(&sp6C, &sp68, (*(u8 *)D_00591E4D));
    var_s2 = 0xFF;
    var_s3 = 0x7FFFFFFF;
    var_s4 = 0;
    var_s0 = 0;
    do {
        if (func_00B79860(var_s1) != 0) {
            temp_a2 = M2C_FIELD(var_s1, s16 *, 0x14);
            temp_a1 = var_s0 + (((void *)D_005A2020) + (M2C_FIELD(var_s1, u8 *, 0x12) * 0x168));
            temp_f0 = (s32) ((f32) (temp_a2 * M2C_FIELD(temp_a1, s16 *, 0x11C)) - sp6C);
            temp_f0_2 = (s32) ((f32) (temp_a2 * M2C_FIELD(temp_a1, s16 *, 0x11E)) - sp68);
            temp_v1 = (temp_f0 * temp_f0) + (temp_f0_2 * temp_f0_2);
            if (temp_v1 < var_s3) {
                var_s2 = M2C_FIELD(var_s1, u8 *, 0);
                var_s3 = temp_v1;
            }
        }
        var_s4 += 1;
        var_s0 += 4;
        var_s1 += 0x240;
    } while (var_s4 < 0xA);
    (*(u8 *)D_00591E4E) = var_s2;
    if ((*(u8 *)D_00591C09) != 5) {
        goto block_11;
    }
    if (func_00B29E20(5) != 0) {
        if ((M2C_FIELD(var_s1, u8 *, 0x16) != 0xFF) && (M2C_FIELD(var_s1, u8 *, 0) != (*(u8 *)D_00591E4D))) {
            goto block_11;
        }
        (*(u8 *)D_00591E4E) = 0xFF;
    } else {
block_11:
        (*(u8 *)D_00591E4E) = var_s2;
    }
}
