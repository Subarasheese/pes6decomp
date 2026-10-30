/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0015B478(void *);
extern char D_003C8D78[];

s32 func_00167068(void *arg0) {
    void **temp_v1;

    if (arg0 == NULL) {
        func_0015B478(((void *)D_003C8D78));
        return -1;
    }
    temp_v1 = M2C_FIELD(arg0, void ***, 0x14);
    if (temp_v1 != NULL) {
        return (M2C_FIELD(*temp_v1, s32 (**)(void **, M2C_UNK), 0x24)(temp_v1, 1) < (M2C_FIELD(arg0, s16 *, 0x3E) << 0xB)) == 0;
    }
    return 0;
}
