/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D4E00(void *);
extern u32 func_00B10D20(void);
M2C_UNK func_00957070(s32);                         /* extern */

void func_00AEB6A0(void) {
    s32 temp_a0;
    u32 temp_v0;

    temp_v0 = func_00B10D20();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0xC4);
        if (temp_a0 != 0) {
            func_00957070(temp_a0);
            M2C_FIELD(temp_v0, s32 *, 0xC4) = 0;
        }
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
    }
}
