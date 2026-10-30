/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00192C88(void *);
extern char D_011FC830[];

void func_0018FBD8(s32 arg0) {
    func_00192C88(M2C_FIELD((((void *)D_011FC830) + (arg0 * 0x28)), void **, 8));
}
