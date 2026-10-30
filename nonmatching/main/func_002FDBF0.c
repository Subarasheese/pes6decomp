/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00230930();                                /* extern */
s32 func_00230EF0();                                /* extern */
s32 func_0023A110();                                /* extern */
M2C_UNK func_00305E50(s32);                         /* extern */
M2C_UNK func_00305E60(s32, M2C_UNK *);              /* extern */
extern M2C_UNK func_002FDAD0;

s32 func_002FDBF0(s32 arg0) {
    if ((func_00230EF0() == 0) && (func_00230930() == 0)) {
        func_00305E50(arg0);
    }
    if ((func_0023A110() & 0xFF) == 1) {
        func_00305E60(arg0, &func_002FDAD0);
    }
    return 1;
}
