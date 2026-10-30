/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern s32 func_00226710(void);
extern void *D_003E77B0;
extern char D_00591C09[];

s32 func_0022FF20(void) {
    s32 temp_v1;
    s64 var_a1;

    if ((func_00309420() != 0) == 1) {
        goto block_17;
    }
    var_a1 = 1;
    if ((func_00309420() != 0) == 1) {
        var_a1 = 0;
    } else {
        switch ((*(u8 *)D_00591C09)) {                       /* switch 1; irregular */
        case 4:                                     /* switch 1 */
            break;
        case 5:                                     /* switch 1 */
            var_a1 = (s64) ((M2C_FIELD(D_003E77B0, u32 *, 0x20) & 0x20000) << 0x20) >> 0x20;
            break;
        }
    }
    if (var_a1 != 1) {
block_17:
        return 0;
    }
    temp_v1 = func_00226710() & 0xFF;
    switch (temp_v1) {                              /* switch 2; irregular */
    case 34:                                        /* switch 2 */
        return 1;
    case 30:                                        /* switch 2 */
        return 1;
    }
}
