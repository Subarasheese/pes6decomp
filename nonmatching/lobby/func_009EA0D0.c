/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009EFB80(void);
extern void func_009F0410(void);
M2C_UNK func_009EB1E0(s32);                         /* extern */
M2C_UNK func_009EEEC0(s32);                         /* extern */
M2C_UNK func_009EF0C0(s32);                         /* extern */
M2C_UNK func_009EF7B0(s32);                         /* extern */
M2C_UNK func_009EF9A0(s32);                         /* extern */
M2C_UNK func_009EFEA0(s32);                         /* extern */
M2C_UNK func_009F0110(s32);                         /* extern */
M2C_UNK func_009F02C0(s32, M2C_UNK);                /* extern */

void func_009EA0D0(s32 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = *arg0;
    func_009EB1E0(temp_s0);
    func_009EEEC0(temp_s0 + 0x1AC);
    func_009EF0C0(temp_s0 + 0xEC);
    func_009EF7B0(temp_s0 + 0xBC);
    func_009EF9A0(temp_s0 + 0xA8);
    func_009EFB80();
    temp_s1 = temp_s0 + 0x60;
    func_009EFEA0(temp_s1);
    func_009F0110(temp_s1);
    func_009F0410();
    func_009F02C0(temp_s0 + 0x58, 1);
}
