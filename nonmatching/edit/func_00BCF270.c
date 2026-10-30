/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC360(void);
extern char D_00CE53D0[];

void func_00BCF270(void) {
    s32 *temp_s0;
    s32 var_s1;

    var_s1 = 0;
    if (0 < 0x27) {
        do {
            temp_s0 = ((void *)D_00CE53D0) + (var_s1 * 4);
            func_001BC360();
            var_s1 += 1;
            *temp_s0 = -1;
        } while (var_s1 < 0x27);
    }
}
