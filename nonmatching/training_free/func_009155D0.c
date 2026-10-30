/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00915200(void *, void *);                  /* extern */
s32 func_00996180();                                /* extern */
M2C_UNK func_00C23600(void *);                      /* extern */
extern void *D_003E7A08;
extern char Pes6MatchPlayers[];

void func_009155D0(void) {
    s32 var_a0;
    u8 temp_v1;
    void *temp_s0;

    if (func_00996180() != 0) {
        var_a0 = 1;
        if (M2C_FIELD(D_003E7A08, s32 *, 4) == 1) {
            temp_v1 = M2C_FIELD(D_003E7A08, u8 *, 8);
            if (temp_v1 != 0xFF) {
                var_a0 = (s32) temp_v1 % 23;
            }
            temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
            if (func_00915200(temp_s0, D_003E7A08) != 0) {
                func_00C23600(temp_s0);
            }
        }
    }
}
