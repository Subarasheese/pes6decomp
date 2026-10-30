/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009C3A40();                                /* extern */
s32 func_00B297D0(M2C_UNK, s32);                    /* extern */
M2C_UNK func_00B9CC30(s32, void *);                 /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591C09[];

void func_009B9EF0(s32 arg0) {
    s32 temp_s1;
    s32 temp_v1;
    s32 var_a1;
    s32 var_v1;

    temp_s1 = func_009C3A40() & 0xFF;
    var_a1 = 1;
    if ((*(u8 *)D_00591C09) == 5) {
        var_a1 = func_00B297D0(5, 1);
    }
    if ((temp_s1 != 0) && (var_a1 != 0)) {
        temp_v1 = temp_s1 & 0xFF;
        if (temp_v1 != 0xFF) {
            var_v1 = temp_v1 % 23;
        } else {
            var_v1 = 1;
        }
        func_00B9CC30(arg0, ((void *)Pes6MatchPlayers) + (var_v1 * 0x240));
    }
}
