/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s64 func_001AD6F8(void);
extern s32 func_00171648(void *, void *);
M2C_UNK func_001237D8(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_0014CBA8(s32 *);                       /* extern */
M2C_UNK func_0014CD98();                            /* extern */
M2C_UNK func_0019DB18(void *, M2C_UNK, M2C_UNK *, s64); /* extern */
extern char D_005B57E4[];
extern char D_005FCB10[];
extern char D_011E0778[];

void func_0014D090(void *arg0, M2C_UNK arg1, void *arg2) {
    s32 temp_v1;
    s64 temp_a3;
    s64 temp_v0;
    s64 var_a3;
    u8 temp_v1_2;
    void *temp_s0;

    temp_v1 = M2C_FIELD(arg2, s32 *, 0);
    switch (temp_v1) {                              /* irregular */
    case 19:
        temp_v1_2 = *M2C_FIELD(arg2, u8 **, 8);
        if ((u32) (temp_v1_2 - 0x30) >= 0xAU) {
            if (temp_v1_2 != 9) {
                M2C_FIELD(arg2, s32 *, 4) = 0;
                return;
            }
            func_0014CD98();
            M2C_FIELD(arg2, s32 *, 4) = 0;
        } else {
            return;
        }
        break;
    case 18:
        func_001237D8(arg0, ((void *)D_011E0778), 0x258);
        temp_v0 = func_001AD6F8();
        temp_a3 = (temp_v0 > -1) ? temp_v0 : 0x5A;
        if (temp_a3 >= 0x5B) {
            var_a3 = 0x5A;
        } else {
            var_a3 = (temp_a3 <= -1) ? 0 : temp_a3;
        }
        temp_s0 = ((void *)D_011E0778) + 0x778;
        func_0019DB18(temp_s0, 0x258, ((void *)D_005FCB10), var_a3);
        func_00171648(arg0, temp_s0);
        (*(s32 *)D_005B57E4) = func_001AD6F8() * 0x3C;
        func_0014CBA8(((void *)D_005B57E4));
        return;
    }
}
