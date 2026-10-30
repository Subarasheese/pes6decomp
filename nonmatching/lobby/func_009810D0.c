/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_0082C2A0();                              /* extern */
M2C_UNK func_00842980(M2C_UNK);                     /* extern */
M2C_UNK func_00980F40(void *, void *);              /* extern */
void *func_009812C0();                              /* extern */
extern char D_008A5F70[];
extern char D_008A94D8[];

s32 func_009810D0(void) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s3;
    u8 *temp_s0;
    u8 var_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s1;
    void *var_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 == NULL) {
        return 1;
    }
    if (((void *)D_008A5F70) == NULL) {
        return 1;
    }
    if (func_0082C2A0() == NULL) {
        var_s1 = NULL;
    } else {
        var_s1 = func_009812C0();
    }
    if (var_s1 != NULL) {
        temp_s0 = M2C_FIELD(temp_v0, u8 **, 0x13A7C);
        if (temp_s0 == NULL) {
            return 4;
        }
        if ((*(s32 *)D_008A94D8) != 0) {
            var_s2 = *temp_s0;
            if ((s32) var_s2 < 0) {
                var_s2 = 0;
            }
            if ((s32) var_s2 >= 0x32) {
                var_s2 = 0x32;
            }
            func_001C48E8(var_s1, 0, 0x141EC);
            var_s3 = 0;
loop_29:
            if (var_s3 < (s32) var_s2) {
                temp_v0_2 = temp_s0 + (var_s3 * 0x258);
                if (!(((s32) M2C_FIELD(temp_v0_2, s32 *, 0xC) >> 0xA) & 1)) {
                    temp_v1 = M2C_FIELD(var_s1, s32 *, 0x141E4);
                    M2C_FIELD(var_s1, s32 *, 0x141E4) = (s32) (temp_v1 + 1);
                    var_v0 = var_s1 + (temp_v1 * 0x670);
                } else {
                    temp_v1_2 = M2C_FIELD(var_s1, s32 *, 0x141E8);
                    M2C_FIELD(var_s1, s32 *, 0x141E8) = (s32) (temp_v1_2 + 1);
                    var_v0 = var_s1 + ((temp_v1_2 + 0x19) * 0x670);
                }
                func_00980F40(var_v0 + 4, temp_v0_2 + 4);
                var_s3 += 1;
                goto loop_29;
            }
            func_00842980(1);
            (*(s32 *)D_008A94D8) = 0;
            return 4;
        }
        return 4;
    }
    return 1;
}
