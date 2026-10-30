/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009EFB80(void);
extern void func_00153FA0(void *);
extern void func_009F0410(void);
M2C_UNK func_009ECAB0(void *);                      /* extern */
M2C_UNK func_009EEEC0(void *);                      /* extern */
M2C_UNK func_009EF0C0(void *);                      /* extern */
M2C_UNK func_009EF7B0(void *);                      /* extern */
M2C_UNK func_009EF9A0(void *);                      /* extern */
M2C_UNK func_009EFEA0(void *);                      /* extern */
M2C_UNK func_009F0110(void *);                      /* extern */

s32 func_009EB3E0(void **arg0) {
    void *temp_s0;
    void *temp_s1;

    temp_s1 = *arg0;
    func_009ECAB0(temp_s1);
    func_009EEEC0(temp_s1 + 0x170);
    func_009EF0C0(temp_s1 + 0xE0);
    func_009EF7B0(temp_s1 + 0xB0);
    func_009EF9A0(temp_s1 + 0x9C);
    func_009EFB80();
    temp_s0 = temp_s1 + 0x54;
    func_009EFEA0(temp_s0);
    func_009F0110(temp_s0);
    func_009F0410();
    M2C_FIELD((temp_s1 + 0x38), s8 *, 0x18) = 0;
    func_00153FA0(temp_s1);
    return 1;
}
