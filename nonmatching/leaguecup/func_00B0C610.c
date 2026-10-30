/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
M2C_UNK func_002258A0(u8, M2C_UNK);                 /* extern */
M2C_UNK func_00225C00(u16, u8);                     /* extern */
M2C_UNK func_009857F0();                            /* extern */
M2C_UNK func_00B0C490();                            /* extern */
extern void *D_003EAD68;
extern char D_00B32770[];

void func_00B0C610(void) {
    s32 var_s0_2;
    s32 var_s3;
    s32 var_s4;
    u8 *var_s2;
    u8 *var_s3_2;
    u8 temp_a0;
    u8 temp_v1;
    void *temp_s1;
    void *var_s0;
    void *var_s2_2;

    temp_s1 = D_003EAD68;
    if (temp_s1 != NULL) {
        if ((func_00226710() & 0xFF) != 0x33) {
            temp_v1 = M2C_FIELD(temp_s1, u8 *, 0xE05);
            switch (temp_v1) {                      /* irregular */
            case 10:
                var_s3 = 2;
                break;
            case 8:
                var_s3 = 1;
                break;
            case 6:
                var_s3 = 0;
                break;
            default:
            case 32:
                var_s3 = 3;
                break;
            }
            var_s4 = 0;
            if ((s32) temp_v1 > 0) {
                var_s0 = temp_s1;
                var_s2 = ((void *)D_00B32770) + ((var_s3 & 0xFF) << 5);
                do {
                    temp_a0 = *var_s2;
                    if (M2C_FIELD(temp_s1, u16 *, 0x13C0) == M2C_FIELD(var_s0, u16 *, 0x1380)) {
                        func_002258A0(temp_a0, 1);
                    } else {
                        func_002258A0(temp_a0, 0);
                    }
                    var_s4 += 1;
                    var_s2 += 1;
                    var_s0 += 2;
                } while (var_s4 < (s32) M2C_FIELD(temp_s1, u8 *, 0xE05));
            }
            func_009857F0();
            var_s0_2 = 0;
            if ((s32) M2C_FIELD(temp_s1, u8 *, 0xE05) > 0) {
                var_s2_2 = temp_s1;
                var_s3_2 = ((void *)D_00B32770) + ((var_s3 & 0xFF) << 5);
                do {
                    func_00225C00(M2C_FIELD(var_s2_2, u16 *, 0x1380), *var_s3_2);
                    var_s0_2 += 1;
                    var_s3_2 += 1;
                    var_s2_2 += 2;
                } while (var_s0_2 < (s32) M2C_FIELD(temp_s1, u8 *, 0xE05));
            }
        } else {
            func_00B0C490();
        }
    }
}
