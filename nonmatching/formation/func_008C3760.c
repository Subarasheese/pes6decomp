/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB830(void *);
extern s32 func_002DB940(void *);
extern void func_001F18D0(void *, void *);
void *func_008C5050(M2C_UNK);                       /* extern */

void func_008C3760(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s3;
    void *var_s2;

    temp_s1 = func_002DB830(M2C_FIELD(arg0, void **, 0x50));
    var_s2 = arg0 - 4;
    var_s3 = -1;
    temp_s0 = func_002DB940(M2C_FIELD(arg0, void **, 0x50));
    do {
        temp_a0 = temp_s1 + var_s3;
        if ((temp_a0 >= 0) && (M2C_FIELD(var_s2, void **, 0x24) != NULL)) {
            if ((temp_s0 == temp_a0) && (arg1 == 0)) {
                func_001F18D0(M2C_FIELD(var_s2, void **, 0x24), func_008C5050(0));
            } else {
                func_001F18D0(M2C_FIELD(var_s2, void **, 0x24), func_008C5050(1));
            }
        }
        var_s3 += 1;
        var_s2 += 4;
    } while (var_s3 < 0xB);
}
