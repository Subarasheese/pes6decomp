/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_00CBBF30[];
extern char D_00CBCA00[];

void func_00B2A440(void) {
    M2C_UNK *var_a5;
    M2C_UNK *var_a6;
    s32 var_a0;
    s32 var_a7;

    var_a7 = 0;
    var_a6 = ((void *)D_00CBCA00);
    var_a5 = ((void *)D_00CBBF30);
    do {
        if (var_a7 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = var_a7 % 23;
        }
        var_a7 += 1;
        M2C_FIELD(var_a6, void **, 0) = (void *) (((void *)Pes6MatchPlayers) + (var_a0 * 0x240));
        M2C_FIELD(var_a6, M2C_UNK **, 4) = var_a5;
        var_a6 += 8;
        var_a5 += 0x78;
    } while (var_a7 < 0x17);
}
