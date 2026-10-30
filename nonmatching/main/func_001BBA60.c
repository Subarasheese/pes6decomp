/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001BB370(int);
extern s32 func_001BB3E0(void *);
extern void func_00153FA0(void *);
M2C_UNK func_001BB080(void *);                      /* extern */
extern s32 D_003E991C;
extern char D_00529A50[];
extern char D_00529A58[];

void func_001BBA60(u32 arg0) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a2;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    void *temp_a1;

    var_a0 = 0;
    if (((void *)D_00529A58) != NULL) {
        var_a0 = M2C_FIELD(((void *)D_00529A50), s32 *, 0xC);
    }
    var_v0 = func_001BB370(var_a0);
    if (var_v0 != 0) {
loop_3:
        var_a2 = 0;
        if ((arg0 >= (u32) var_v0) && (arg0 < (u32) (var_v0 + 0x2E8))) {
            temp_a2 = ((arg0 - var_v0) / 12) + ((u32) (arg0 - var_v0) >> 0x1F);
            var_v1 = temp_a2 >> 3;
            if (temp_a2 < 0) {
                var_v1 = (s32) (temp_a2 + 7) >> 3;
            }
            temp_a1 = var_v0 + var_v1;
            temp_a0 = (1 << (temp_a2 % 8)) & 0xFF;
            var_a2 = 1;
            M2C_FIELD(temp_a1, u8 *, 0x2E8) = (u8) (M2C_FIELD(temp_a1, u8 *, 0x2E8) | temp_a0);
            M2C_FIELD(temp_a1, u8 *, 0x2E8) = (u8) (M2C_FIELD(temp_a1, u8 *, 0x2E8) ^ temp_a0);
            M2C_FIELD(var_v0, u8 *, 0x2F0) = (u8) (M2C_FIELD(var_v0, u8 *, 0x2F0) + 1);
        }
        if (var_a2 == 0) {
            var_v0 = func_001BB370(func_001BB3E0(var_v0 + 0x2F4));
            if (var_v0 != 0) {
                goto loop_3;
            }
        } else {
            M2C_FIELD(((void *)D_00529A50), s32 *, 4) = (s32) (M2C_FIELD(((void *)D_00529A50), s32 *, 4) + 1);
        }
    }
    temp_v1 = D_003E991C + 1;
    D_003E991C = temp_v1;
    if (!(temp_v1 & 0x1F)) {
        var_a0_2 = 0;
        if ((((void *)D_00529A50) + 8) != NULL) {
            var_a0_2 = M2C_FIELD(((void *)D_00529A50), s32 *, 0xC);
        }
        var_s2 = func_001BB370(var_a0_2);
        if (var_s2 != 0) {
            do {
                temp_s1 = func_001BB370(func_001BB3E0(var_s2 + 0x2F4));
                if ((u8) M2C_FIELD(var_s2, u8 *, 0x2F0) >= 0x3EU) {
                    M2C_FIELD(((void *)D_00529A50), s32 *, 0) = (s32) (M2C_FIELD(((void *)D_00529A50), s32 *, 0) - 0x3E);
                    M2C_FIELD(((void *)D_00529A50), s32 *, 4) = (s32) (M2C_FIELD(((void *)D_00529A50), s32 *, 4) - 0x3E);
                    func_001BB080(var_s2 + 0x2F4);
                    func_00153FA0((void *) var_s2);
                }
                var_s2 = temp_s1;
            } while (temp_s1 != 0);
        }
    }
}
