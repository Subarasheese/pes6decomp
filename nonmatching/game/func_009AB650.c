/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00188790(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_009AB6D0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_009AB9D0(M2C_UNK *);                   /* extern */
extern s32 D_003EA714;
extern char D_00CB7730[];
extern char D_00CBA8E0[];
extern char D_00CBA918[];
extern char D_00CBA9ED[];

void func_009AB650(void) {
    func_001C48E8(((void *)D_00CBA8E0), 0, 0x114);
    func_001C48E8(((void *)D_00CB7730), 0, 0x31AC);
    D_003EA714 = func_00188790();
    func_009AB9D0(((void *)D_00CB7730));
    (*(s8 *)D_00CBA9ED) = 1;
    func_009AB6D0(((void *)D_00CBA918), ((void *)D_00CB7730));
}
