/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0018B070(s32, s64);                        /* extern */
s32 func_0018B318(s32, s64);                        /* extern */
f32 func_0018B840(s32);                             /* extern */
s32 func_0018C438(f32);                             /* extern */
f32 func_001A7678(f32);                             /* extern */
extern char D_005BF9DC[];
extern char D_005FD328[];
extern char D_005FD330[];
extern char D_011E6C10[];

void func_001679F0(void) {
    f32 *temp_s0;
    f32 temp_f12;
    s32 var_s1;

    if (M2C_FIELD(((void *)D_005BF9DC), s32 *, 0) == 0) {
        var_s1 = 0;
        do {
            temp_f12 = (f32) var_s1;
            temp_s0 = (var_s1 * 4) + ((void *)D_011E6C10);
            var_s1 += 1;
            *temp_s0 = func_001A7678(func_0018B840(func_0018B318(func_0018B070(func_0018C438(temp_f12), (*(s64 *)D_005FD328)), (*(s64 *)D_005FD330))));
        } while (var_s1 < 0x4001);
        M2C_FIELD(((void *)D_005BF9DC), s32 *, -0x624) = 1;
    }
}
