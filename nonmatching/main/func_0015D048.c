/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0015B6D0(s32, s32);
extern char D_003789D8[];

void func_0015D048(void *arg0) {
    if ((M2C_FIELD(arg0, void ***, 8) != NULL) && (M2C_FIELD(arg0, s8 *, 2) == 0)) {
        if ((*(s32 *)D_003789D8) == 1) {
            func_0015B6D0(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x28));
        }
        M2C_FIELD(arg0, void ***, 8) = NULL;
        M2C_FIELD(*M2C_FIELD(arg0, void ***, 8), M2C_UNK (**)(void **, void **), 0xC)(M2C_FIELD(arg0, void ***, 8), M2C_FIELD(arg0, void ***, 8));
    }
}
