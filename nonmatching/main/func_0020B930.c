/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0020C430(void);
extern void func_0020A1E0(s32, s32, s32, s32);
extern void func_0020A2F0(s32, s32, s32, s32);
extern char D_00537A40[];
extern char D_00537AD4[];
extern char D_00537ADC[];

s32 func_0020B930(void) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 var_s1;
    s32 var_s2;
    void *temp_v1;

    var_s2 = (*(s32 *)D_00537ADC);
    switch (var_s2) {                               /* irregular */
    case 0:
        var_s1 = 0;
        if (0 < 0xC) {
            do {
                temp_v1 = ((void *)D_00537A40) + (var_s1 * 0xC);
                temp_a2 = M2C_FIELD(temp_v1, s32 *, 4);
                if (temp_a2 != 0xFFFF) {
                    temp_a1 = M2C_FIELD(temp_v1, s32 *, 8);
                    temp_a3 = M2C_FIELD(temp_v1, s32 *, 0xC);
                    if (var_s1 == 0xA) {
                        func_0020A1E0((*(s32 *)D_00537A40), temp_a1, temp_a2, temp_a3);
                    } else {
                        func_0020A2F0((*(s32 *)D_00537A40), temp_a1, temp_a2, temp_a3);
                    }
                    M2C_FIELD(temp_v1, s32 *, 4) = 0xFFFF;
                    M2C_FIELD(temp_v1, s32 *, 0xC) = 0;
                }
                var_s1 += 1;
            } while (var_s1 < 0xC);
        }
        var_s2 += 1;
        /* fallthrough */
    case 1:
        func_0020C430();
        (*(s32 *)D_00537A40) = 0;
        var_s2 += 1;
        (*(s32 *)D_00537AD4) = 0;
        break;
    }
    (*(s32 *)D_00537ADC) = var_s2;
    return 1;
}
