/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
extern char D_00CE4EB0[];
extern char D_00CE4EBC[];
extern char D_00CE4EBF[];

void func_00BC6930(void) {
    func_001C48E8(((void *)D_00CE4EB0), 0, 0x14);
    (*(s32 *)D_00CE4EB0) = 0;
    (*(s8 *)D_00CE4EBC) = 1;
    (*(s8 *)D_00CE4EBF) = 1;
}
