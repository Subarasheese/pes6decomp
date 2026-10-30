/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4CE0(void *, s8);
M2C_UNK func_0020E310(M2C_UNK, s8 *);               /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002F2ED0(void *);                      /* extern */
M2C_UNK func_002F3E20(void *, M2C_UNK, s32, s8 *);  /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
extern char D_00A7DB10[];
extern void *D_00A7DB18;

void func_0099CAC0(void) {
    s8 sp3C;
    s32 temp_v0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1_2;
    s8 *var_v1;
    void *temp_s0;

    var_v1 = &sp3C;
    temp_s0 = D_00A7DB18;
    var_v0 = 4;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    if (func_0081EC20(0x4000) == 0) {
        if (func_0081EC20(0x1000) == 0) {
            if (func_0081EB60(0x10) == 0) {
                if (func_0081EB60(0x40) != 0) {
                    M2C_FIELD(temp_s0, s32 *, 4) = (s32) (M2C_FIELD(temp_s0, s32 *, 4) + 1);
                    func_0026E840(0x8400F802);
                }
            } else {
                M2C_FIELD(temp_s0, s32 *, 4) = (s32) (M2C_FIELD(temp_s0, s32 *, 4) - 1);
                func_0026E840(0x8400F802);
            }
        } else {
            M2C_FIELD(temp_s0, s32 *, 0xC) = -1;
            func_0026E840(0x84008401);
            (*(s32 *)D_00A7DB10) = 4;
        }
    } else {
        func_0026E840(0x84028400);
        (*(s32 *)D_00A7DB10) = 4;
    }
    temp_v0 = M2C_FIELD(temp_s0, s32 *, 8);
    if (temp_v0 == 0) {
        M2C_FIELD(temp_s0, s32 *, 4) = 0;
    } else {
        var_v1_2 = temp_v0 - 1;
        var_v0_2 = M2C_FIELD(temp_s0, s32 *, 4);
        if (var_v1_2 < var_v0_2) {

        } else {
            if (var_v0_2 < 0) {
                var_v0_2 = 0;
            }
            var_v1_2 = var_v0_2;
        }
        M2C_FIELD(temp_s0, s32 *, 4) = var_v1_2;
    }
    func_002F4CE0(M2C_FIELD(temp_s0, void **, 0), (s8) M2C_FIELD(temp_s0, s32 *, 4));
    var_s1 = 0;
    if (M2C_FIELD(temp_s0, s32 *, 8) > 0) {
        do {
            if (var_s1 == M2C_FIELD(temp_s0, s32 *, 4)) {
                func_0020E310(3, &sp3C);
            } else {
                func_0020E310(2, &sp3C);
            }
            func_002F3E20(M2C_FIELD(temp_s0, void **, 0), 1, var_s1, &sp3C);
            var_s1 += 1;
        } while (var_s1 < M2C_FIELD(temp_s0, s32 *, 8));
    }
    func_002F2ED0(M2C_FIELD(temp_s0, void **, 0));
}
