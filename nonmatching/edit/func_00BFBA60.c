/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002F7C60(s32, s32, s32, void *);       /* extern */
M2C_UNK func_002F7E00(s32, s32, u8);                /* extern */
extern char D_00CEB790[];

void func_00BFBA60(s32 arg0) {
    s32 var_s2;
    s32 var_s3;

    var_s3 = 0;
    if (0 < 9) {
        do {
            func_002F7E00(arg0, var_s3, M2C_FIELD((((void *)D_00CEB790) + var_s3), u8 *, 0x7C));
            var_s2 = 0;
            if (0 < 4) {
                do {
                    func_002F7C60(arg0, var_s3, var_s2, ((void *)D_00CEB790) + (var_s2 * 0x12) + (var_s3 * 2) + 0x86);
                    var_s2 += 1;
                } while (var_s2 < 4);
            }
            var_s3 += 1;
        } while (var_s3 < 9);
    }
}
