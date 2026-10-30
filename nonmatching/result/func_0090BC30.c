/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C99A90(void *);                      /* extern */
extern char D_00591DB6[];
extern char D_00921D44[];
extern void *D_00923FC8;

void func_0090BC30(void) {
    if (M2C_FIELD(M2C_FIELD(D_00923FC8, void **, 0x98), s16 *, 0x10) == 0) {
        (*(s32 *)D_00921D44) = 8;
    }
    func_00C99A90(M2C_FIELD(D_00923FC8, void **, 0x98));
    (*(s8 *)D_00591DB6) = (s8) M2C_FIELD(D_00923FC8, s32 *, 0x94);
    M2C_FIELD(D_00923FC8, void **, 0x98) = NULL;
}
