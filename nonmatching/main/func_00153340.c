/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001533B0(s16 *, s16 *);                /* extern */

void func_00153340(s32 arg0, void *arg1) {
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    s16 sp1E;

    if ((arg0 != 0) && (arg1 != NULL)) {
        sp1C = M2C_FIELD(arg1, s16 *, 0);
        sp1E = M2C_FIELD(arg1, s16 *, 2);
        sp18 = (M2C_FIELD(arg1, s16 *, 0) + M2C_FIELD(arg1, s16 *, 4)) - 1;
        sp1A = (M2C_FIELD(arg1, s16 *, 2) + M2C_FIELD(arg1, s16 *, 6)) - 1;
        func_001533B0(&sp1C, &sp18);
    }
}
