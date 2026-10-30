/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s16 func_001D7B80(void *);
extern void func_001D7D80(void *, s16);
extern void func_001D7C20(void *, s32);
void func_002E4200(void *arg0, s32 arg1) {
    s32 var_s0_2;
    s32 var_s1;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s0;
    void *var_s1_2;

    switch (arg1) {                                 /* irregular */
    case 0:
        var_s0 = arg0;
        var_s1 = 0;
        do {
            temp_v1 = M2C_FIELD(var_s0, void **, 0x1C);
            if (temp_v1 != NULL) {
                func_001D7C20(M2C_FIELD(temp_v1, void **, 0x48), 2);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 2);
        return;
    case 1:
        var_s1_2 = arg0;
        var_s0_2 = 0;
        do {
            temp_v1_2 = M2C_FIELD(var_s1_2, void **, 0x1C);
            if (temp_v1_2 != NULL) {
                func_001D7D80(M2C_FIELD(M2C_FIELD(var_s1_2, void **, 0x1C), void **, 0x48), (s16) ((s64) ((((s64) (func_001D7B80(M2C_FIELD(temp_v1_2, void **, 0x48)) << 0x30) >> 0x30) - 1) << 0x30) >> 0x30));
                func_001D7C20(M2C_FIELD(M2C_FIELD(var_s1_2, void **, 0x1C), void **, 0x48), 0);
            }
            var_s0_2 += 1;
            var_s1_2 += 4;
        } while (var_s0_2 < 2);
        return;
    }
}
