/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00B653E0(void);
void func_00B661A0(void);
extern s32 *D_003EAED0;

s32 func_00B651A0(void) {
    s32 temp_v1;

    if (D_003EAED0 == NULL) {
        return 1;
    }
    temp_v1 = *D_003EAED0;
    if ((temp_v1 != 4) && (temp_v1 != 3)) {
        func_00B661A0();
    }
    return func_00B653E0();
}
