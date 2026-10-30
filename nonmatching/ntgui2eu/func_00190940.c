/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_0018AFB0(s64, s64);                        /* extern */
s64 func_0018B070(s64, s64);                        /* extern */
s64 func_0018B5E8(s64);                             /* extern */

void func_00190940(s64 arg0) {
    s64 temp_s0;
    s64 temp_s1;
    s64 temp_s1_2;
    s64 var_v0;

    temp_s1 = 0x81E0 << 0x2F;
    temp_s1_2 = func_0018B070(func_0018B070(func_0018B5E8(arg0 >> 0x20), temp_s1), temp_s1);
    temp_s0 = (s64) ((arg0 & (0xFFFF0000U >> 0x20)) << 0x20) >> 0x20;
    var_v0 = func_0018B5E8(temp_s0);
    if (temp_s0 < 0) {
        var_v0 = func_0018AFB0(var_v0, 0x83E0 << 0x2F);
    }
    func_0018AFB0(temp_s1_2, var_v0);
}
