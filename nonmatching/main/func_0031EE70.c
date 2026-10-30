/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00325910(void);
extern unsigned char func_00325900(void *);
s32 func_0031EE70(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_s0;

    if (*arg0 != 7) {
        goto block_25;
    }
    temp_s0 = func_00325910();
    temp_a0 = func_00325900(arg0) & 0xFF;
    switch (temp_a0) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        switch (temp_s0) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            if (arg1 < 0xD) {
                return 2;
            }
block_25:
            return 4;
        case 3:                                     /* switch 2 */
            if (arg1 >= 0xE) {
                return 1;
            }
            goto block_25;
        }
        break;
    case 2:                                         /* switch 1 */
        switch (temp_s0) {                          /* switch 3; irregular */
        case 3:                                     /* switch 3 */
        case 4:                                     /* switch 3 */
            if (arg1 >= 0xE) {
                return 1;
            }
            goto block_25;
        case 2:                                     /* switch 3 */
        case 1:                                     /* switch 3 */
            if (arg1 < 0xD) {
                return 2;
            }
            goto block_25;
        }
        break;
    }
}
