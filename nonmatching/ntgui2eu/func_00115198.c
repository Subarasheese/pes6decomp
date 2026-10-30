/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011591C(void *);                      /* extern */
M2C_UNK func_00115954(void *);                      /* extern */
M2C_UNK func_00115B7C(s32, void *, M2C_UNK *, void *); /* extern */
M2C_UNK func_001166B0(s32, void *, M2C_UNK *, void *); /* extern */
M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F89D0[];
extern char D_005F8A28[];
extern void *D_006024A8;
extern s32 D_006024AC;
extern char D_006024B0[];
extern char D_011C7A38[];
extern char D_011C7AF8[];

void func_00115198(s32 arg0, void *arg1) {
    s32 temp_v1;
    void *temp_s1;

    if (arg0 == 0) {
        func_001AD620(((void *)D_005F89D0), 0x194, ((void *)D_006024B0));
    }
    if (arg1 == NULL) {
        func_001AD620(((void *)D_005F89D0), 0x195, ((void *)D_005F8A28));
    }
    func_0019B140(D_006024AC);
    if (M2C_FIELD(D_006024A8, u16 *, 0) != 0) {
        temp_v1 = M2C_FIELD(arg1, s32 *, 0xE4);
        switch (temp_v1) {                          /* irregular */
        case 3:
            break;
        case 0:
            func_0011591C(arg1);
            break;
        case 2:
            func_00115954(arg1);
            break;
        default:
        case 1:
            if (M2C_FIELD(D_006024A8, u8 *, 1) != 0) {
                func_001166B0(arg0, arg1, ((void *)D_011C7AF8), ((void *)D_011C7AF8) - 0x40);
            } else {
                temp_s1 = ((void *)D_011C7A38) - 0x40;
                M2C_FIELD(arg1, M2C_UNK (**)(s32, void *, M2C_UNK *, void *, void *), 0xC)(arg0, arg1, ((void *)D_011C7A38), temp_s1, ((void *)D_011C7A38) - 0x80);
                M2C_FIELD(arg1, M2C_UNK (**)(s32, void *, M2C_UNK *), 0x10)(arg0, arg1, ((void *)D_011C7A38));
                func_00115B7C(arg0, arg1, ((void *)D_011C7A38), temp_s1);
            }
            break;
        }
    }
}
