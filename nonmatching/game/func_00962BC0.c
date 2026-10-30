/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
extern char D_00591BBC[];
extern char Pes6MatchSquads[];

s32 func_00962BC0(void *arg0) {
    u8 var_s0;

    var_s0 = (*(u8 *)D_00591BBC);
    if ((s32) var_s0 < 5) {
        if ((s32) var_s0 > 0) {
            if (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x72) & 0x7F, 0x28U) < 0x32) {
                var_s0 -= 1;
            }
            if (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x72) & 0x7F, 0x28U) >= 0x5B) {
                var_s0 += 1;
            }
            if ((s32) var_s0 >= 6) {
                var_s0 = 5;
            }
            return (s32) var_s0;
        }
        return 0;
    }
    return 5;
}
