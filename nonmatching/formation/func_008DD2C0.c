/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_002E4570(void *);
extern void func_001F1EA0(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001DC980(s32);                         /* extern */

void func_008DD2C0(void *arg0) {
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s2_2;
    void *var_s1;
    void *var_s1_2;
    void *var_s2_3;

    if (arg0 != NULL) {
        func_002E4570(M2C_FIELD(arg0, void **, 0x1C4));
        func_001F1EA0(M2C_FIELD(arg0, void **, 0xE8));
        var_s2 = 0;
        var_s1 = arg0;
        do {
            func_001DC980(M2C_FIELD(var_s1, s32 *, 0x160));
            var_s2 += 1;
            M2C_FIELD(var_s1, s32 *, 0x160) = 0;
            var_s1 += 4;
        } while (var_s2 < 0x19);
        var_s2_2 = 0;
        var_s1_2 = arg0;
        do {
            func_001D7F10(M2C_FIELD(var_s1_2, void **, 0x1C8));
            func_001D7F10(M2C_FIELD(var_s1_2, void **, 0x1D0));
            var_s2_2 += 1;
            var_s1_2 += 4;
        } while (var_s2_2 < 2);
        func_001D7F10(M2C_FIELD(arg0, void **, 0x1E4));
        var_s1_3 = 0;
        var_s2_3 = arg0;
        do {
            func_001D7F10(M2C_FIELD(var_s2_3, void **, 0x1D8));
            var_s1_3 += 1;
            var_s2_3 += 4;
        } while (var_s1_3 < 3);
        func_001C48E8(arg0, 0, 0x24C);
    }
}
