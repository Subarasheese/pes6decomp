/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6280(void);
s32 func_009E1C90(M2C_UNK);                         /* extern */
extern char D_00CBCB34[];

s32 func_00BD9830(void) {
    if ((func_009E1C90(0) & 0xFF) == 4) {
        if ((func_009E1C90(1) & 0xFF) == 0xC) {
            if ((func_009E1C90(3) & 0xFF) && (func_00BF6280() == 2) && ((*(u16 *)D_00CBCB34) & 0x20)) {
                return 1;
            }
            goto block_7;
        }
block_7:
        return 0;
    }
    return 0;
}
