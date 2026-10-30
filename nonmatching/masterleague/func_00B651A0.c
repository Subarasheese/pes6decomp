/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B653E0();                                /* extern */
M2C_UNK func_00B661A0();                            /* extern */
extern s32 *D_003EAED0;

s32 func_00B651A0(void) {
    s32 temp_v1;

    if (D_003EAED0 != NULL) {
        temp_v1 = *D_003EAED0;
        if ((temp_v1 != 4) && (temp_v1 != 3)) {
            func_00B661A0();
        }
        return func_00B653E0();
    }
    return 1;
}
