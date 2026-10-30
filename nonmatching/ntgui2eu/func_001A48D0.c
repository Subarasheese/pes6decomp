/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001A4888(s32, M2C_UNK, M2C_UNK *);         /* extern */
M2C_UNK func_001A49D0(s32, s32);                    /* extern */
extern char D_005CAC10[];
extern M2C_UNK func_001A4810;
extern M2C_UNK func_001A4848;

void func_001A48D0(void) {
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    u32 var_s0;
    u32 var_s1;

    func_001A49D0(M2C_FIELD(((void *)D_005CAC10), s32 *, 0), M2C_FIELD(((void *)D_005CAC10), s32 *, 4));
    func_001A49D0(M2C_FIELD(((void *)D_005CAC10), s32 *, 8), M2C_FIELD(((void *)D_005CAC10), s32 *, 0xC));
    var_s3 = func_001A4888(0x80000000, 0x80080000, &func_001A4848);
    var_s1 = var_s3 - 0x20C;
    var_s2 = func_001A4888(0x80000000, 0x80080000, &func_001A4810);
    var_s0 = var_s2 - 0x168;
    if (var_s1 != var_s0) {
        var_v0 = var_s1 < var_s0;
        do {
            if (var_v0 != 0) {
                var_s3 = func_001A4888(var_s3 + 4, 0x80080000, &func_001A4848 + 0x4848);
                var_s1 = var_s3 - 0x20C;
            } else {
                var_s2 = func_001A4888(var_s2 + 4, 0x80080000, &func_001A4810 + 0x4810);
                var_s0 = var_s2 - 0x168;
            }
            var_v0 = var_s1 < var_s0;
        } while (var_s1 != var_s0);
    }
    *(u32 *)0x5CAC08 = var_s1;
}
