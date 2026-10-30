/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0082C2A0();                              /* extern */
extern char D_008AA10F[];
extern char D_008AA110[];

s32 func_00960370(void) {
    s32 var_a2;
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 == NULL) {
        return 0;
    }
    var_a2 = (*(s32 *)D_008AA110);
    switch ((*(u8 *)D_008AA10F)) {                           /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        break;
    default:                                        /* switch 1 */
    case 2:                                         /* switch 1 */
    case 0:                                         /* switch 1 */
        var_a2 = 0;
        break;
    }
    if (var_a2 == 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x153B8);
        var_a2 = M2C_FIELD(temp_v0, s32 *, 0x153BC);
        switch (temp_v1) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            break;
        default:                                    /* switch 2 */
        case 3:                                     /* switch 2 */
        case 2:                                     /* switch 2 */
        case 0:                                     /* switch 2 */
            var_a2 = 0;
            break;
        }
    }
    return var_a2;
}
