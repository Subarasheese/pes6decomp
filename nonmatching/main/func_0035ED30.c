/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292D50();                                /* extern */
extern char D_00591A90[];
extern char Pes6MatchSquads[];

void func_0035ED30(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_a6;
    void *temp_a2;
    void *var_a5;

    temp_v1 = func_00292D50() & 0xFF;
    var_a0 = 0;
    if ((temp_v1 > 0) && (temp_v1 > 0)) {
        var_a5 = ((void *)D_00591A90) + (arg0 * 0x8B);
        do {
            temp_a2 = ((void *)Pes6MatchSquads) + (arg0 * 0x6900) + (M2C_FIELD(var_a5, u8 *, 7) * 0x348);
            var_a6 = 1;
            if ((M2C_FIELD(temp_a2, u8 *, 0xD4) == 0) || (M2C_FIELD(temp_a2, u8 *, 0x14) == 1)) {
                var_a6 = 0;
            }
            if (var_a6 == 1) {

            }
            var_a0 += 1;
            var_a5 += 1;
        } while (var_a0 < temp_v1);
    }
}
