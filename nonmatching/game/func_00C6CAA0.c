/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void func_002F9110(void);
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00C88E50(M2C_UNK);                     /* extern */
extern s32 D_003EA80C;
extern char D_00CCBB50[];

void func_00C6CAA0(void) {
    s32 *var_s0;
    s32 var_s2;
    void *temp_s1;
    void *var_a0;

    var_s2 = 0;
    var_s0 = ((void *)D_00CCBB50);
    do {
        var_a0 = M2C_FIELD(var_s0, void **, 0x44);
        if (var_a0 != NULL) {
            do {
                temp_s1 = M2C_FIELD(var_a0, void **, 8);
                func_00153FA0(var_a0);
                var_a0 = temp_s1;
            } while (temp_s1 != NULL);
        }
        M2C_FIELD(var_s0, void **, 0x44) = NULL;
        var_s2 += 1;
        M2C_FIELD(var_s0, s32 *, 0x48) = 0;
        var_s0 += 0x18;
    } while (var_s2 < 2);
    if (D_003EA80C != 0) {
        func_002F9110();
        (*(s32 *)D_00CCBB50) = 0;
        D_003EA80C = 0;
        func_001C48E8(((void *)D_00CCBB50), 0, 0x64);
        func_00C88E50(0x1B);
        D_003EA80C = 0;
    }
}
