/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EEDA0(void *, u8);
extern s32 func_001E6C50(void *);
s32 func_00152130(M2C_UNK, M2C_UNK);                /* extern */
void *func_001E6E10(s32);                           /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */

s32 func_001BEE60(void *arg0, s32 *arg1) {
    s32 temp_a0;
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;
    void *temp_v0;

    var_s2 = 0;
    var_v1 = M2C_FIELD(arg0, s32 *, 0x6C);
    temp_s0 = *arg1;
    var_s1 = 0;
    if (var_v1 == 0) {
        var_v1 = 0x20;
    }
    var_v0 = M2C_FIELD(arg0, s32 *, 0x70) - var_v1;
    if (var_v0 < 0) {
        var_v0 = 0;
        var_s1 = 1;
    }
    M2C_FIELD(arg0, s32 *, 0x70) = var_v0;
    func_001EEDA0(M2C_FIELD(arg0, void **, 0x68), var_v0 & 0xFF);
    if (var_s1 != 0) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_a0 != 1) {
            temp_v0 = func_001E6E10(temp_a0);
            if (temp_v0 != NULL) {
                func_001E6C50(temp_v0);
                M2C_FIELD(arg0, s32 *, 0x10) = 0;
                func_001EDD90(M2C_FIELD(arg0, s32 *, 0x64));
                M2C_FIELD(arg0, s32 *, 0x64) = 0;
                M2C_FIELD(arg0, void **, 0x68) = NULL;
            }
        }
    }
    if (func_00152130(0, 0x2A) != 0) {
        var_s2 = 1;
    }
    *arg1 = temp_s0;
    return var_s2;
}
