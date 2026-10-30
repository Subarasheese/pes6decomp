/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001614D8(void);
extern void func_0015B478(void *);
M2C_UNK func_00162B88(s32);                         /* extern */
extern char D_003C8BC0[];

void func_001667B0(void *arg0, s16 arg1) {
    if (arg0 == NULL) {
        func_0015B478(((void *)D_003C8BC0));
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x40) = arg1;
    if (M2C_FIELD(arg0, s8 *, 0xAD) == 1) {
        func_00162B88(M2C_FIELD(arg0, s32 *, 4));
    }
    func_001614D8();
}
