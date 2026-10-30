/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC360(void);
extern void func_001BC2B0(void);
extern char D_008871B0[];
extern char D_008A4250[];

s32 func_0081EF20(void) {
    s32 *temp_s3;
    s32 var_s1;
    s32 var_s2;

    if ((*(s32 *)D_008A4250) == 1) {
        var_s2 = 0;
        do {
            var_s1 = 0;
loop_5:
            temp_s3 = ((void *)D_008871B0) + (var_s2 * 0x10) + (var_s1 * 4);
            if (*temp_s3 != -1) {
                func_001BC360();
                *temp_s3 = -1;
            }
            var_s1 += 1;
            if (var_s1 < 4) {
                goto loop_5;
            }
            var_s2 += 1;
        } while (var_s2 < 0xE);
        (*(s32 *)D_008A4250) = 0;
        func_001BC2B0();
        return 1;
    }
    return 1;
}
