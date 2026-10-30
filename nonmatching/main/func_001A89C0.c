/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B05D0(int);
M2C_UNK func_0017FA00(s32, M2C_UNK *, s32 **, M2C_UNK); /* extern */
M2C_UNK func_001A5E00(M2C_UNK);                     /* extern */
M2C_UNK func_001A8BA0();                            /* extern */
extern char D_003AFC11[];
extern s32 *D_003AFC14;
extern s32 *D_003AFC18;
extern s32 *D_003AFC1C;
extern s32 *D_003AFC20;
extern s32 *D_003AFC24;
extern M2C_UNK func_001A8CD0;
extern M2C_UNK func_001A8DF0;
extern M2C_UNK func_001A8EB0;
extern M2C_UNK func_001A8F70;
extern M2C_UNK func_001A9170;

void func_001A89C0(void) {
    s32 *sp24;
    s32 *sp28;
    s32 *sp2C;
    s32 *temp_a0;
    s32 *temp_a0_2;
    s32 *temp_a0_3;
    s32 *temp_a0_4;
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    s32 *temp_v0_4;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;

    func_001B05D0((s32) (*(u8 *)D_003AFC11));
    temp_a0 = D_003AFC14;
    if (*temp_a0 != -1) {
        var_s0 = 0;
        do {
            temp_v0 = temp_a0 + var_s0;
            func_0017FA00(*temp_v0, &func_001A8EB0, temp_v0 + 4, 4);
            var_s0 += 8;
        } while (*(D_003AFC14 + var_s0) != -1);
    }
    func_001A5E00(0);
    temp_a0_2 = D_003AFC18;
    if (*temp_a0_2 != -1) {
        var_s0_2 = 0;
        do {
            temp_v0_2 = temp_a0_2 + var_s0_2;
            func_0017FA00(*temp_v0_2, &func_001A8DF0, temp_v0_2 + 4, 4);
            var_s0_2 += 8;
        } while (*(D_003AFC18 + var_s0_2) != -1);
    }
    temp_a0_3 = D_003AFC1C;
    if (*temp_a0_3 != -1) {
        var_s0_3 = 0;
        do {
            temp_v0_3 = temp_a0_3 + var_s0_3;
            sp2C = temp_v0_3;
            func_0017FA00(*temp_v0_3, &func_001A9170, &sp2C, 4);
            var_s0_3 += 8;
        } while (*(D_003AFC1C + var_s0_3) != -1);
    }
    temp_a0_4 = D_003AFC20;
    if (*temp_a0_4 != -1) {
        var_s0_4 = 0;
        do {
            temp_v0_4 = temp_a0_4 + var_s0_4;
            sp28 = temp_v0_4;
            func_0017FA00(*temp_v0_4, &func_001A8F70, &sp28, 4);
            var_s0_4 += 8;
        } while (*(D_003AFC20 + var_s0_4) != -1);
    }
    sp24 = D_003AFC24;
    func_0017FA00(*D_003AFC24, &func_001A8CD0, &sp24, 4);
    func_001A8BA0();
}
