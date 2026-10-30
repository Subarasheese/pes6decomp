/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00152130(s32, s8);
extern void func_001A58E0(void *, signed char);
extern u8 func_00BF6270(void);
M2C_UNK func_00209A00(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_009E1CB0(M2C_UNK);                     /* extern */
void *func_00B2A420(M2C_UNK);                       /* extern */
extern char D_00591BE4[];

void func_00BEBC50(void) {
    s32 var_s0;
    u8 temp_s2;
    void **temp_a0;
    void *temp_s3;
    void *var_s1;

    if (func_00152130(1, ((0x3C / (s32) (*(u8 *)D_00591BE4)) << 5) & 0xFF) == 1) {
        var_s1 = func_00B2A420(0);
        var_s0 = 0;
        do {
            temp_s3 = M2C_FIELD(var_s1, void **, 0);
            temp_s2 = M2C_FIELD(temp_s3, u8 *, 0);
            if (temp_s2 != func_00BF6270()) {
                M2C_FIELD(M2C_FIELD(var_s1, void **, 4), s8 *, 0x4D) = 0;
                M2C_FIELD(M2C_FIELD(var_s1, void **, 4), s8 *, 0x4C) = 0;
                temp_a0 = M2C_FIELD(M2C_FIELD(var_s1, void **, 0), void ***, 4);
                if ((s32) M2C_FIELD(temp_a0, u16 *, 0x30) >= 0x59A) {
                    func_00209A00(temp_a0, 0x1BF, 0);
                    M2C_FIELD(M2C_FIELD(M2C_FIELD(var_s1, void **, 0), void ***, 4), s8 *, 0x50) = 0;
                }
                M2C_FIELD(M2C_FIELD(M2C_FIELD(var_s1, void **, 0), void ***, 4), s8 *, 0x2C) = 0;
                func_001A58E0(*M2C_FIELD(M2C_FIELD(var_s1, void **, 0), void ***, 4), 0);
            } else {
                M2C_FIELD(M2C_FIELD(temp_s3, void **, 4), s8 *, 0x2C) = 1;
                func_001A58E0(*M2C_FIELD(M2C_FIELD(var_s1, void **, 0), void ***, 4), 1);
            }
            var_s0 = (var_s0 + 1) & 0xFF;
            var_s1 += 8;
        } while (var_s0 < 0x17);
        func_009E1CB0(3);
    }
}
