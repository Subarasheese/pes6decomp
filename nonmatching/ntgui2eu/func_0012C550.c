/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012D598(s64);                         /* extern */
M2C_UNK func_00154538();                            /* extern */
extern char D_005B3744[];
extern M2C_UNK (*D_011D4C94)(s64);

void func_0012C550(s32 arg0, s64 arg1) {
    s64 temp_s1;

    temp_s1 = (s64) (arg1 << 0x20) >> 0x20;
    (*(s32 *)D_005B3744) = arg0;
    func_0012D598(temp_s1);
    func_00154538();
    if (D_011D4C94 != NULL) {
        if (arg0 != 0) {
            D_011D4C94(temp_s1);
        } else {
            D_011D4C94(-1);
        }
    }
}
