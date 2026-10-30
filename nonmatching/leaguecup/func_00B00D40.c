/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00226710();                                /* extern */
extern s32 D_003EAD54;

s32 func_00B00D40(void) {
    if (D_003EAD54 == 0) {
        return 0;
    }
    if (((func_00226710() & 0xFF) != 0x28) && ((func_00226710() & 0xFF) != 0x29) && ((func_00226710() & 0xFF) != 0x2A) && ((func_00226710() & 0xFF) != 0x2B) && ((func_00226710() & 0xFF) != 0x2F) && ((func_00226710() & 0xFF) != 0x30) && ((func_00226710() & 0xFF) != 0x31) && ((func_00226710() & 0xFF) != 0x32) && ((func_00226710() & 0xFF) != 0x33) && ((func_00226710() & 0xFF) != 0x34) && ((func_00226710() & 0xFF) != 0x35) && ((func_00226710() & 0xFF) != 0x36)) {
        if ((func_00226710() & 0xFF) != 0x37) {
            return 0x17;
        }
        goto block_17;
    }
block_17:
    return 0x12;
}
