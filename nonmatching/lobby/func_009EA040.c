/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009EFB80(void);
extern void func_00153FA0(void *);
extern void func_009F0410(void);
M2C_UNK func_009EB1E0(void *);                      /* extern */
M2C_UNK func_009EEEC0(void *);                      /* extern */
M2C_UNK func_009EF0C0(void *);                      /* extern */
M2C_UNK func_009EF7B0(void *);                      /* extern */
M2C_UNK func_009EF9A0(void *);                      /* extern */
M2C_UNK func_009EFEA0(void *);                      /* extern */
M2C_UNK func_009F0110(void *);                      /* extern */
M2C_UNK func_009F02C0(void *, M2C_UNK);             /* extern */

s32 func_009EA040(void **arg0) {
    void *temp_s0;
    void *temp_s1;

    temp_s1 = *arg0;
    func_009EB1E0(temp_s1);
    func_009EEEC0(temp_s1 + 0x1AC);
    func_009EF0C0(temp_s1 + 0xEC);
    func_009EF7B0(temp_s1 + 0xBC);
    func_009EF9A0(temp_s1 + 0xA8);
    func_009EFB80();
    temp_s0 = temp_s1 + 0x60;
    func_009EFEA0(temp_s0);
    func_009F0110(temp_s0);
    func_009F0410();
    func_009F02C0(temp_s1 + 0x58, 1);
    func_00153FA0(temp_s1);
    return 1;
}
