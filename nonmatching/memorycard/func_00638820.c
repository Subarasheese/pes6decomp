/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s8 func_00623430();                                 /* extern */
M2C_UNK func_00638A30(M2C_UNK);                     /* extern */
M2C_UNK func_0064E3C0(u8);                          /* extern */
extern u8 D_003E9E20;
extern char D_0065C2B0[];
extern char D_0065D0C0[];
extern char D_0065D0D7[];
extern char D_0065E660[];

void func_00638820(void) {
    s8 temp_v0;
    u32 var_a0;

    temp_v0 = func_00623430();
    if ((*(u8 *)D_0065D0D7) != temp_v0) {
        M2C_FIELD(((void *)D_0065D0C0), s8 *, 0x17) = temp_v0;
    }
    func_0064E3C0(D_003E9E20);
    switch ((*(s32 *)D_0065E660)) {                           /* irregular */
    case 0x80:
        if (M2C_FIELD(((void *)D_0065D0C0), u8 *, 0xD) == 0) {
            M2C_FIELD(((void *)D_0065D0C0), u8 *, 0xD) = 1U;
            func_0026E840(0x8400F802);
        }
        break;
    case 0x40:
        if (M2C_FIELD(((void *)D_0065D0C0), u8 *, 0xD) == 1) {
            M2C_FIELD(((void *)D_0065D0C0), u8 *, 0xD) = 0U;
            func_0026E840(0x8400F802);
        }
        break;
    case 0x100:
        func_0026E840(0x84028400);
        if (M2C_FIELD(((void *)D_0065D0C0), u8 *, 0xD) == 0) {
            var_a0 = 0;
            do {
                M2C_FIELD((((void *)D_0065D0C0) + var_a0), s8 *, 0xF) = 0;
                var_a0 += 1;
            } while (var_a0 < 8U);
            func_00638A30(0);
            M2C_FIELD(((void *)D_0065D0C0), s8 *, 0xB) = 2;
        } else {
        case 0x200:
            if ((*(s32 *)D_0065E660) == 0x200) {
                func_0026E840(0x84008401);
            }
            M2C_FIELD(((void *)D_0065D0C0), s8 *, 0xB) = 0xE;
            M2C_FIELD(((void *)D_0065D0C0), u8 *, 0xD) = 1U;
            M2C_FIELD(((void *)D_0065C2B0), s8 *, 0x12) = 1;
        }
        break;
    }
    func_00638A30(0);
}
