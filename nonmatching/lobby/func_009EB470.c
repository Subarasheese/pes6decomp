/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009EFB80(void);
extern void func_009F0410(void);
M2C_UNK func_009ECAB0(s32);                         /* extern */
M2C_UNK func_009EEEC0(s32);                         /* extern */
M2C_UNK func_009EF0C0(s32);                         /* extern */
M2C_UNK func_009EF7B0(s32);                         /* extern */
M2C_UNK func_009EF9A0(s32);                         /* extern */
M2C_UNK func_009EFEA0(s32);                         /* extern */
M2C_UNK func_009F0110(s32);                         /* extern */

void func_009EB470(s32 *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s0 = *arg0;
    func_009ECAB0(temp_s0);
    func_009EEEC0(temp_s0 + 0x170);
    func_009EF0C0(temp_s0 + 0xE0);
    func_009EF7B0(temp_s0 + 0xB0);
    func_009EF9A0(temp_s0 + 0x9C);
    func_009EFB80();
    temp_s1 = temp_s0 + 0x54;
    func_009EFEA0(temp_s1);
    func_009F0110(temp_s1);
    func_009F0410();
    M2C_FIELD((temp_s0 + 0x38), s8 *, 0x18) = 0;
}
