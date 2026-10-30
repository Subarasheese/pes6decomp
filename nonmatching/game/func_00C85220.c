/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF1E0(void *, void *);
extern int func_002DCA30(void);
M2C_UNK func_001EF2C0(void *, s32 *);               /* extern */
M2C_UNK func_00C855F0(s32);                         /* extern */
M2C_UNK func_00C85950(s32);                         /* extern */
M2C_UNK func_00C89450(s32, u8);                     /* extern */
M2C_UNK func_00C89490(s32, void *);                 /* extern */
M2C_UNK func_00C89510(s32, void *);                 /* extern */
M2C_UNK func_00C89550(s32, void *);                 /* extern */
M2C_UNK func_00C89590(s32, void *);                 /* extern */
M2C_UNK func_00C89690(s32, f32 *);                  /* extern */
M2C_UNK func_00C89780(s32, s32);                    /* extern */
M2C_UNK func_00C897C0(s32, s32);                    /* extern */
void *func_00C8B190(s32);                           /* extern */
extern char D_00CA8810[];
extern char D_00CA8840[];
extern char D_00CCC200[];
extern void *D_00CCCDA0;

void func_00C85220(void) {
    f32 sp90;
    f32 sp94;
    s32 sp98;
    s32 sp9C;
    s32 spA0;
    s32 spA4;
    s32 spA8;
    s32 spAC;
    s32 temp_a1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s4;
    s32 var_v0;
    s32 var_v1;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *var_s5;

    var_s5 = D_00CCCDA0;
    if (var_s5 != NULL) {
        do {
            temp_s4 = M2C_FIELD(var_s5, s32 *, 0x48);
            temp_s3 = temp_s4 + 0x5E;
            func_00C85950(temp_s4);
            func_00C855F0(temp_s4);
            temp_s2 = temp_s4 + 0x66;
            temp_s1 = ((void *)D_00CCC200) + (temp_s4 * 0x140);
            temp_s0 = temp_s1 + 0xA0;
            func_00C89690(temp_s2, temp_s1 + 0x10);
            func_00C89590(temp_s2, temp_s0 + 0x38);
            func_00C89490(temp_s2, ((void *)D_00CA8810) + (M2C_FIELD(temp_s1, s32 *, 0xF0) * 4));
            temp_a1 = M2C_FIELD(temp_s0, s32 *, 0x48);
            if (temp_a1 != M2C_FIELD(temp_s0, s32 *, 0x4C)) {
                func_00C89780(temp_s2, temp_a1);
                M2C_FIELD(temp_s0, s32 *, 0x4C) = (s32) M2C_FIELD(temp_s0, s32 *, 0x48);
            }
            func_00C89550(temp_s2, temp_s0 + 8);
            var_v1 = 0;
            if ((M2C_FIELD(temp_s1, s32 *, 0x128) != 0) && (M2C_FIELD(temp_s1, s32 *, 0x10C) != 0)) {
                var_v1 = 1;
            }
            func_00C897C0(temp_s4 + 0x66, var_v1 & 0xFF);
            temp_s2_2 = temp_s4 + 0x5E;
            sp98 = 0;
            sp90 = M2C_FIELD(temp_s1, f32 *, 0x60);
            sp94 = M2C_FIELD(temp_s1, f32 *, 0x64);
            sp9C = 0;
            func_00C89690(temp_s2_2, &sp90);
            if (func_002DCA30() == 0) {
                func_00C89490(temp_s2_2, ((void *)D_00CA8810) + (M2C_FIELD(temp_s1, s32 *, 0x3C) * 4));
            }
            func_00C89450(temp_s2_2, M2C_FIELD(temp_s1, u8 *, 0x20));
            func_00C89510(temp_s2_2, temp_s1 + 0x24 + 8);
            var_v0 = M2C_FIELD(temp_s1, s32 *, 0x128) != 0;
            if (var_v0 != 0) {
                var_v0 = M2C_FIELD(temp_s1, s32 *, 0x70) != 0;
            }
            func_00C897C0(temp_s4 + 0x5E, var_v0 & 0xFF);
            temp_s0_2 = func_00C8B190(temp_s3);
            if (M2C_FIELD(var_s5, s32 *, 0x44) != 0) {
                func_001EF1E0(temp_s0_2, var_s5 + 0x5C);
                spA0 = 0x3F800000;
                spA4 = 0x3F800000;
                spA8 = 0x3F800000;
                spAC = 0x3F800000;
                func_001EF2C0(temp_s0_2, &spA0);
                M2C_FIELD(var_s5, s32 *, 0x44) = 0;
            }
            func_00C89490(temp_s3, ((void *)D_00CA8840) + (M2C_FIELD(var_s5, s32 *, 4) * 4));
            func_00C89490(temp_s4 + 2, ((void *)D_00CA8840) + (M2C_FIELD(var_s5, s32 *, 4) * 4));
            var_s5 = M2C_FIELD(var_s5, void **, 0x74);
        } while (var_s5 != NULL);
    }
}
