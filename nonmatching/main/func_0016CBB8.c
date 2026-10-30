/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001795E0(void);
extern int func_00179658(void);
M2C_UNK printf(M2C_UNK *);                   /* extern */
extern char D_003CA010[];
extern char D_003CA030[];

void func_0016CBB8(void *arg0) {
    func_001795E0();
    if (arg0 == NULL) {
        printf(((void *)D_003CA010));
    } else if (M2C_FIELD(arg0, s32 *, 4) != 1) {
        M2C_FIELD(arg0, s32 *, 4) = 1;
    } else {
        printf(((void *)D_003CA030));
    }
    func_00179658();
}
