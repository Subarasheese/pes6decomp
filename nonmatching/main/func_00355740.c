/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern unsigned char func_00277490(void *);
extern unsigned char func_002774A0(void *);
extern unsigned char func_002774B0(void *);
void *func_00277C40(s32);                           /* extern */

s32 func_00355740(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_v0;
    u8 temp_v0_3;
    u8 temp_v0_4;
    void *temp_v0_2;

    temp_v0 = arg1 & 0xFF;
    if (temp_v0 != 0) {
        if (temp_v0 < 0x17) {
            temp_v0_2 = func_00277C40(arg1);
            if (temp_v0_2 != NULL) {
                temp_v0_3 = func_002774A0(temp_v0_2);
                switch (temp_v0_3) {                /* switch 1; irregular */
                case 0:                             /* switch 1 */
                    temp_v0_4 = func_002774B0(temp_v0_2);
                    switch (temp_v0_4) {            /* switch 2; irregular */
                    case 2:                         /* switch 2 */
                        var_v0 = 4;
                        goto block_36;
                    case 1:                         /* switch 2 */
                        var_v0 = 5;
                        goto block_36;
                    case 0:                         /* switch 2 */
                        if (func_00277490(temp_v0_2) != 0) {
                            var_v0 = 6;
                        } else {
                            var_v0 = 1;
                        }
                        goto block_36;
                    }
                    break;
                case 2:                             /* switch 1 */
                    var_v0 = 3;
                    goto block_36;
                case 1:                             /* switch 1 */
                    *arg0 = 2;
                    break;
                }
            } else {
                var_v0 = 6;
block_36:
                *arg0 = var_v0;
            }
            return 1;
        }
        goto block_4;
    }
block_4:
    *arg0 = 6;
    return 0;
}
