/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, s32);           /* extern */
extern char D_00533030[];
extern char D_00533034[];

void func_001FC850(s32 arg0) {
    s32 temp_s1;
    void *temp_s0;

    if (arg0 < (*(s32 *)D_00533030)) {
        temp_s1 = arg0 * 0x10;
        temp_s0 = (*(s32 *)D_00533034) + temp_s1;
        func_001C48E8(M2C_FIELD(temp_s0, s32 *, 0), 0, M2C_FIELD(temp_s0, s32 *, 4));
        if (arg0 < (*(s32 *)D_00533030)) {
            M2C_FIELD((temp_s1 + (*(s32 *)D_00533034)), s8 *, 0xC) = 0;
        }
        M2C_FIELD(temp_s0, s32 *, 8) = -1;
    }
}
