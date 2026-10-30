/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B71C80(void);
extern void func_001D7F10(void *);
M2C_UNK func_00971470(s32);                         /* extern */
M2C_UNK func_009920B0(M2C_UNK);                     /* extern */
s32 func_00993A80();                                /* extern */
s32 func_009A0430();                                /* extern */
M2C_UNK func_009A3490();                            /* extern */

void func_00B70550(s32 arg0) {
    M2C_UNK var_a0;
    s32 temp_a0_2;
    u32 temp_v0;
    void *temp_a0;

    temp_v0 = func_00B71C80();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, void **, 4);
        if (temp_a0 != NULL) {
            func_001D7F10(temp_a0);
        }
        temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 0xC);
        if (temp_a0_2 != 0) {
            func_00971470(temp_a0_2);
            M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
        }
        if (func_00993A80() != 0) {
            var_a0 = 0;
            if ((arg0 & 0xFF) == 2) {
                var_a0 = 1;
            }
            func_009920B0(var_a0);
        }
        if (func_009A0430() != 0) {
            func_009A3490();
        }
    }
}
