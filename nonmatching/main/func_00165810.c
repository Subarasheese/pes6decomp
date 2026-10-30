/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00167C58(void *, s32);
extern void func_0015B478(void *);
extern void func_00159E88(void);
extern void func_00159EA0(void);
M2C_UNK func_00165608(void *, s32);                 /* extern */
M2C_UNK func_00165998();                            /* extern */
extern char D_003C8940[];

void func_00165810(void *arg0, s32 arg1) {
    if ((arg0 == NULL) || (arg1 == 0)) {
        func_0015B478(((void *)D_003C8940));
        return;
    }
    func_00165998();
    func_00159E88();
    func_00165608(arg0, arg1);
    M2C_FIELD(arg0, s8 *, 2) = 3;
    func_00167C58(arg0, 1);
    func_00159EA0();
}
