/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
typedef struct {
    u8 reserved00[0x29];
    u8 entries[];
} SelectionRecord;
extern SelectionRecord *func_001FAC50(s32, s32);
u8 func_001FAAF0(s32 row, s32 column, s32 side) {
    return func_001FAC50(row, side)->entries[column];
}
