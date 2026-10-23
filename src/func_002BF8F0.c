/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void *func_00C13280(s32);
extern s32 func_00C132B0(s32);
extern s32 func_00C132C0();
extern u8 D_003E9D50;

#include "pes6/byte_predicates.h"

s32 func_002BF8F0(s32 index) {
    s32 result;

    result = 0;
    if (pes6_matches_byte_predicate(index, 10)) {
        result = (M2C_FIELD(func_00C13280(index), u8 *, 5) & 3) == 1;
    }
    return result;
}
