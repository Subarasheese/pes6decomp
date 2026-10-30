/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */
extern char D_008AA10F[];
extern char D_008AA110[];

s32 func_009602B0(void) {
    s32 var_a2;
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 == NULL) {
        return 0;
    }
    var_a2 = (*(s32 *)D_008AA110);
    switch ((*(u8 *)D_008AA10F)) {                           /* irregular */
    case 3:
    case 2:
        break;
    default:
    case 1:
    case 0:
        var_a2 = 0;
        break;
    }
    if (var_a2 == 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x153B8);
        var_a2 = M2C_FIELD(temp_v0, s32 *, 0x153BC);
        if ((temp_v1 != 3) && (temp_v1 != 2)) {
            if ((temp_v1 != 1) && (temp_v1 != 0)) {

            }
            var_a2 = 0;
        }
    }
    return var_a2;
}
