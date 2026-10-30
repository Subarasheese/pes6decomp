/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00292F30(void *, M2C_UNK *, u8);           /* extern */
extern char Pes6MatchSquads[];

s32 func_0099D850(void *arg0) {
    u8 temp_a3;

    temp_a3 = M2C_FIELD(arg0, u8 *, 0x12);
    if (func_00292F30((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a3 * 0x6900)) + 0x68, ((void *)Pes6MatchSquads), temp_a3) == 0) {
        return 0;
    }
    return 1;
}
