/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A5550(void *);
extern void func_001A5620(void *);
M2C_UNK func_00BC9F40();                            /* extern */
M2C_UNK func_00BCA0A0(void *);                      /* extern */
extern char D_00CE4F40[];
extern char D_00CE5198[];
extern char D_00CE51A4[];

void func_00BC8B00(void) {
    s32 var_s0;

    func_00BC9F40();
    var_s0 = 0;
    if (0 < 3) {
        do {
            func_00BCA0A0(((void *)D_00CE4F40) + (var_s0 * 0xC0));
            var_s0 += 1;
        } while (var_s0 < 3);
    }
    func_001A5620(((void *)D_00CE5198));
    func_001A5550(((void *)D_00CE51A4));
}
