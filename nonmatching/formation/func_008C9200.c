/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
M2C_UNK func_008C13D0(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_008C1490(M2C_UNK, s32);                  /* extern */

void func_008C9200(void *arg0, s32 arg1, s32 arg2) {
    s64 var_s1;
    s64 var_v0;
    void *temp_a0;
    void *temp_v0;

    var_s1 = 0;
    M2C_FIELD(arg0, void **, 0) = NULL;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    if ((M2C_FIELD(arg0, void **, 0) == NULL) && (M2C_FIELD(arg0, s32 *, 4) == 0)) {
        var_v0 = 2;
        if ((arg1 == 2) || (var_v0 = 1, (arg1 == 1))) {
            var_s1 = var_v0;
        }
        temp_v0 = func_008C1490(0x29, arg2);
        func_001D7D80(temp_v0, (s16) ((s64) (var_s1 << 0x30) >> 0x30));
        M2C_FIELD(arg0, void **, 0) = temp_v0;
    }
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    if (temp_a0 != NULL) {
        func_008C13D0(temp_a0, 0x7E, 0);
        func_008C13D0(M2C_FIELD(arg0, void **, 0), 0x7F, 0);
        func_008C13D0(M2C_FIELD(arg0, void **, 0), 0x81, 0);
    }
}
