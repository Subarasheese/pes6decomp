/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002CA7A0(void *);                          /* extern */
extern char Pes6MatchPlayers[];

s32 func_00B27500(s32 arg0) {
    s32 temp_s1;
    s32 var_a1;
    s32 var_s2;
    s32 var_s3;
    void *temp_s0;

    var_a1 = 1;
    var_s3 = 0;
    temp_s1 = (arg0 != 0) ? 0xC : 1;
    if (temp_s1 != 0xFF) {
        var_a1 = temp_s1 % 23;
    }
    var_s2 = temp_s1;
    temp_s0 = ((void *)Pes6MatchPlayers) + (var_a1 * 0x240);
    if (temp_s1 < (temp_s1 + 0xB)) {
        do {
            if (M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u8 *, 0x2C) == 1) {
                if (func_002CA7A0(temp_s0) != 0) {
                    var_s3 += 1;
                }
            }
            var_s2 += 1;
        } while (var_s2 < (temp_s1 + 0xB));
    }
    return var_s3;
}
