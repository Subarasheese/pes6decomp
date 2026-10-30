/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern void * func_00121430(void *);
extern void func_001DF820(void *, s32);
M2C_UNK func_001C48E8(s8 *, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK sprintf(s8 *, M2C_UNK *);             /* extern */
extern char D_00CFE578[];

void func_00CECED0(void *arg0, s64 arg1) {
    s8 sp40;
    s32 temp_s1;
    s32 var_s2;
    s32 var_v0;
    s64 temp_v1;
    s8 *var_v1;

    var_v0 = 0x80;
    var_v1 = &sp40;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    func_001C48E8(&sp40, 0, 0x80);
    temp_v1 = (s64) (arg1 << 0x38) >> 0x38;
    if (temp_v1 != 5) {
        temp_s1 = temp_v1 + 1;
        var_s2 = 0;
        if (temp_s1 > 0) {
            do {
                func_001F08B0(0x1700AB);
                func_00121430(&sp40);
                var_s2 += 1;
            } while (var_s2 < temp_s1);
        }
    } else {
        sprintf(&sp40, ((void *)D_00CFE578));
    }
    func_001DF820(arg0, (s32) &sp40);
}
