/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern s32 func_001F08B0(s32);
extern void func_001DF820(void *, s32);
M2C_UNK func_009E08B0(u8);                          /* extern */
extern char D_00A03168[];
extern void *D_00A7DEE8;

s32 func_009E0A60(s8 *arg0, s8 *arg1, s8 *arg2) {
    s64 var_v1;
    s8 *var_s0;
    s8 *var_s1;
    s8 *var_s2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    var_s2 = arg0;
    var_s1 = arg1;
    var_s0 = arg2;
    if (D_00A7DEE8 == NULL) {
        return 0;
    }
    if ((var_s2 == NULL) || (*var_s2 == 0)) {
        var_s2 = func_001F08B0(0x01F700A1);
        var_s1 = NULL;
        var_s0 = NULL;
    }
    var_v1 = 2;
    if ((var_s0 == NULL) || (*var_s0 == 0)) {
        var_v1 = 1;
    }
    if ((var_s1 == NULL) || (*var_s1 == 0)) {
        var_v1 = 0;
    }
    func_001D7D80(M2C_FIELD(D_00A7DEE8, void **, 4), (s16) ((s64) (var_v1 << 0x30) >> 0x30));
    temp_v1 = M2C_FIELD(D_00A7DEE8, void **, 0x1C);
    if (temp_v1 != NULL) {
        if ((var_s2 == NULL) || (*var_s2 == 0)) {
            var_s2 = ((void *)D_00A03168);
        }
        func_001DF820(M2C_FIELD(temp_v1, void **, 0xC), (s32) var_s2);
    }
    temp_v1_2 = M2C_FIELD(D_00A7DEE8, void **, 0x20);
    if (temp_v1_2 != NULL) {
        if ((var_s1 == NULL) || (*var_s1 == 0)) {
            var_s1 = ((void *)D_00A03168);
        }
        func_001DF820(M2C_FIELD(temp_v1_2, void **, 0xC), (s32) var_s1);
    }
    temp_v1_3 = M2C_FIELD(D_00A7DEE8, void **, 0x24);
    if (temp_v1_3 != NULL) {
        if ((var_s0 == NULL) || (*var_s0 == 0)) {
            var_s0 = ((void *)D_00A03168);
        }
        func_001DF820(M2C_FIELD(temp_v1_3, void **, 0xC), (s32) var_s0);
    }
    func_009E08B0(M2C_FIELD(D_00A7DEE8, u8 *, 0x3C));
    return 1;
}
