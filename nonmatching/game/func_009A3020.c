/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B29B90();                                /* extern */
s32 func_00B29C80();                                /* extern */
s32 func_00B29E20(u8);                              /* extern */
extern void *D_003EA710;
extern char D_00591C09[];
extern char D_00591DD6[];

void func_009A3020(void) {
    s32 var_s0;
    s32 var_s1;
    s32 var_v1;
    void *temp_a1;

    var_s1 = 0;
    if ((*(u8 *)D_00591DD6) != 0) {
        var_s0 = 1;
        if ((*(u8 *)D_00591C09) == 5) {
            var_v1 = (*(u8 *)D_00591C09) == 5;
            if (var_v1 != 0) {
                var_v1 = func_00B29E20((*(u8 *)D_00591C09)) != 0;
                if (var_v1 != 0) {
                    var_v1 = func_00B29B90() != 0;
                }
                if (var_v1 == 0) {
                    var_v1 = func_00B29C80() != 0;
                }
            }
            if (var_v1 == 0) {
                var_s0 = 0;
            }
        }
        if (var_s0 != 0) {
            var_s1 = 1;
        }
    }
    if (var_s1 != 0) {
        temp_a1 = D_003EA710 + 8;
        if ((M2C_FIELD(D_003EA710, s32 *, 0x38) != 0) && (M2C_FIELD(temp_a1, s32 *, 0x28) == M2C_FIELD(temp_a1, s32 *, 0x2C))) {
            M2C_FIELD(temp_a1, s32 *, 0x30) = 0;
        }
        M2C_FIELD(temp_a1, s32 *, 0x54) = (s32) (M2C_FIELD(temp_a1, s32 *, 0x54) + 1);
    }
}
