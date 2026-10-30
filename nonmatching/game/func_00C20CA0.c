/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002727C0(s32);
extern void func_001A58E0(void *, signed char);
extern u8 func_00BF6270(void);
M2C_UNK func_00209A00(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_009E1CB0(M2C_UNK);                     /* extern */
void *func_00B2A420(M2C_UNK);                       /* extern */
extern s8 D_003EA7E8;
extern s16 D_003EA7EA;
extern char D_00591E14[];

void func_00C20CA0(void) {
    s32 var_s0;
    u8 temp_s2;
    void **temp_a0;
    void *temp_s3;
    void *var_s1;

    (*(s32 *)D_00591E14) = 0;
    D_003EA7E8 = 0;
    D_003EA7EA = 0;
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
        var_s0 += 1;
        var_s1 += 8;
    } while (var_s0 < 0x17);
    func_002727C0(0xF);
    func_009E1CB0(3);
}
