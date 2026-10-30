/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s8 *func_00B94840(s32);                             /* extern */
M2C_UNK func_00B98390(u8);                          /* extern */
extern char D_00CE4080[];
extern char D_00CE4082[];

void func_00B9D120(void) {
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s8 var_v0;

    var_s2 = 1;
    var_s1 = 0;
    switch ((*(u8 *)D_00CE4082)) {                           /* irregular */
    case 2:
        if (*func_00B94840(M2C_FIELD(((void *)D_00CE4080), s32 *, 8) + M2C_FIELD(((void *)D_00CE4080), u8 *, 5)) != 0) {
            M2C_FIELD(((void *)D_00CE4080), u8 *, 2) = 3U;
        } else {
            func_0026E840(0x8C008005);
            var_s2 = 0;
        }
        break;
    default:
        if (M2C_FIELD(((void *)D_00CE4080), u8 *, 3) != 0) {
            var_s3 = 0;
            do {
                if (*func_00B94840(var_s3) != 0) {
                    var_s1 = 1;
                }
                var_s3 += 1;
            } while (var_s3 < 0x50);
            if (var_s1 == 0) {
                func_0026E840(0x8C008005);
                var_s2 = 0;
            } else if (M2C_FIELD(((void *)D_00CE4080), u8 *, 3) != 1) {
                M2C_FIELD(((void *)D_00CE4080), u8 *, 2) = 2U;
            } else {
                var_v0 = 0x40;
                goto block_26;
            }
        } else {
            var_v0 = 0x50;
block_26:
            M2C_FIELD(((void *)D_00CE4080), s8 *, 0) = var_v0;
        }
        break;
    case 3:
        var_v0 = 0x30;
        goto block_26;
    }
    func_00B98390(M2C_FIELD(((void *)D_00CE4080), u8 *, 2));
    if (var_s2 == 1) {
        func_0026E840(0x84028400);
    }
}
