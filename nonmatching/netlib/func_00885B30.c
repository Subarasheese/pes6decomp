/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void func_001D7F10(void *);
M2C_UNK func_00881680();                            /* extern */
extern char D_008B2530[];
extern void *D_008B2534;
extern void *D_008B2538;
extern void *D_008B253C;

s32 func_00885B30(void) {
    u8 var_s0;
    void **var_v0;

    if ((*(s32 *)D_008B2530) != 0) {
        var_s0 = 0;
        do {
            if (var_s0 >= 0xEU) {
                var_v0 = NULL;
            } else {
                var_v0 = D_008B2534 + (var_s0 * 0x60);
                M2C_FIELD(var_v0, u8 *, 0x54) = var_s0;
            }
            if (var_v0 != NULL) {
                func_001D7F10(*var_v0);
            }
            var_s0 += 1;
        } while ((s32) var_s0 < 0xE);
        func_001D7F10(D_008B2538);
        func_001D7F10(D_008B253C);
        func_00153FA0(D_008B2534);
        (*(s32 *)D_008B2530) = 0;
    }
    func_00881680();
    return 1;
}
