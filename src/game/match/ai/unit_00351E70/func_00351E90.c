/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern const u8 *D_0061C700[];

s32 func_00351E90(s32 stadium) {
    const u8 *entries = D_0061C700[0];
    return entries[stadium * 5 + 3];
}
