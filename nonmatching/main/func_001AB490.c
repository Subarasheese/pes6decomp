/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017BF10(void *, s32, s32, f32);
M2C_UNK func_0017BF80(void *, s32, s32);            /* extern */
extern char D_00397F40[];
extern char D_00397F50[];
extern char D_00397F60[];
extern s32 *D_003E98D4;
extern char D_00521D00[];
extern char D_00521D08[];
extern char D_00521D10[];

void func_001AB490(void *arg0) {
    M2C_UNK *var_s0;
    s32 temp_a0;
    s32 var_s2;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x10);
    var_s2 = 0;
    if (M2C_FIELD(temp_s1, s8 *, 7) > 0) {
        var_s0 = ((void *)D_00521D00);
        do {
            temp_a0 = *D_003E98D4;
            switch (temp_a0) {                      /* irregular */
            case 0:
                func_0017BF80(temp_s1, var_s2, M2C_FIELD(var_s0, s32 *, 8));
                func_0017BF10(temp_s1, var_s2, (s32) ((void *)D_00397F40), 70.0f);
                break;
            case 4:
            case 2:
            case 1:
                func_0017BF80(temp_s1, var_s2, (*(s32 *)D_00521D08));
                func_0017BF10(temp_s1, var_s2, (s32) ((void *)D_00397F50), 40.0f);
                break;
            case 3:
                func_0017BF80(temp_s1, var_s2, (*(s32 *)D_00521D10));
                func_0017BF10(temp_s1, var_s2, (s32) ((void *)D_00397F60), 60.0f);
                break;
            }
            var_s2 += 1;
            var_s0 += 4;
        } while (var_s2 < M2C_FIELD(temp_s1, s8 *, 7));
    }
}
