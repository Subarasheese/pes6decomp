/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00214290(s32);                         /* extern */
M2C_UNK func_0099C7C0(s32 *);                       /* extern */
extern s32 *D_003EAD20;

void func_009B4E80(void) {
    s32 *temp_s0;
    s32 temp_a0;

    temp_s0 = D_003EAD20;
    temp_a0 = *temp_s0;
    if (temp_a0 != 0) {
        func_00214290(temp_a0);
        *temp_s0 = 0;
    }
    if (temp_s0 != NULL) {
        func_0099C7C0(temp_s0);
    }
}
