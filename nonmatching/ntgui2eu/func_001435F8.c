/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001586C8();                            /* extern */
extern char D_005BD314[];
extern char D_011DF834[];

void func_001435F8(void) {
    (*(s32 *)D_005BD314) = 0;
    func_001586C8();
    (*(s32 *)D_011DF834) = 3;
}
