/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D7BA0(void *);
extern s32 func_001D7BC0(void *);
M2C_UNK func_009F0200(void *, M2C_UNK, s64);        /* extern */
extern char D_00A00A90[];
extern char D_00A00A94[];

void func_009EFD90(void *arg0, void *arg1, s32 arg2) {
    s32 sp58;
    s32 sp5C;
    s32 var_s1;
    s64 var_s2;
    void *temp_v0;
    void *var_s0;

    var_s2 = 0;
    sp58 = (*(s32 *)D_00A00A90);
    sp5C = (*(s32 *)D_00A00A94);
    if (arg2 <= 0) {
        sp58 = 0;
    }
    if (arg2 >= (M2C_FIELD(arg1, s32 *, 8) - 1)) {
        sp5C = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x14) = (s8) sp58;
    M2C_FIELD(arg0, s8 *, 0x1C) = (s8) sp5C;
    if ((0 | sp58 | sp5C) != 0) {
        var_s2 = 0;
        if ((arg0 + 4) != NULL) {
            var_s0 = M2C_FIELD(arg0, void **, 4);
            if (var_s0 != NULL) {
                var_s1 = 0;
                do {
                    temp_v0 = M2C_FIELD(var_s0, void **, 0x1C);
                    if ((temp_v0 != NULL) && (func_001D7BA0(M2C_FIELD(temp_v0, void **, 0x48)) == 2)) {
                        var_s2 = (s64) (func_001D7BC0(M2C_FIELD(M2C_FIELD(var_s0, void **, 0x1C), void **, 0x48)) << 0x30) >> 0x30;
                    }
                    var_s1 += 1;
                    var_s0 += 4;
                } while (var_s1 < 2);
            }
        }
    }
    func_009F0200(arg0 + 0x10, 2, var_s2);
}
