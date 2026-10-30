/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E1C50(void *, s32);
extern s32 func_001F2410(void *);
extern void func_001EF900(void *, s8);
s32 func_001E6E10(M2C_UNK);                         /* extern */
M2C_UNK func_001EE630(s32, M2C_UNK *);              /* extern */
M2C_UNK func_001EEAC0(s32, s32);                    /* extern */
M2C_UNK func_002E1D10(void *, M2C_UNK, M2C_UNK, s32); /* extern */
extern char D_003B4180[];

void func_002F45C0(void *arg0) {
    M2C_UNK *var_s0;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s2;
    void *temp_s4;
    void *temp_v1;
    void *var_s1;

    if (arg0 != NULL) {
        temp_v1 = arg0 + (((s32) (M2C_FIELD(arg0, s8 *, 8) + 1) % 2) * 0x4A4);
        temp_s4 = temp_v1 + 0xB4;
        if (M2C_FIELD(temp_v1, u8 *, 0x547) == 0) {
            func_002E1D10(temp_s4 + 0x46C, 1, 0x17, M2C_FIELD(arg0, s32 *, 0xA4));
            func_002E1C50(temp_s4 + 0x46C, 0);
            temp_s3 = func_001E6E10(0x4E20);
            var_s2 = 0;
            var_s1 = temp_s4;
            var_s0 = ((void *)D_003B4180);
            do {
                if (M2C_FIELD(var_s1, s32 *, 0x464) == 0) {
                    temp_v0 = func_001F2410(M2C_FIELD(arg0, void **, 0xB0));
                    M2C_FIELD(var_s1, s32 *, 0x464) = temp_v0;
                    func_001EF900((void *) temp_v0, 0);
                    func_001EEAC0(M2C_FIELD(var_s1, s32 *, 0x464), temp_s3);
                    func_001EE630(M2C_FIELD(var_s1, s32 *, 0x464), var_s0);
                }
                var_s2 += 1;
                var_s1 += 4;
                var_s0 += 8;
            } while (var_s2 < 2);
            M2C_FIELD(temp_s4, s32 *, 0x460) = 0;
            M2C_FIELD(temp_s4, s8 *, 0x493) = 1;
        }
    }
}
