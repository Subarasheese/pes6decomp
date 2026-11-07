/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
extern void func_001DA4B0(s32);
extern s32 func_0021DF90(s32);
M2C_UNK func_001D5A50(M2C_UNK);                     /* extern */
M2C_UNK func_001D5C40(s32);                         /* extern */
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_001F0210(s32);                         /* extern */
extern char D_00CF9EF0[];
extern char D_00CF9EF8[];
extern char D_00CF9F00[];
extern char D_00CF9F08[];

s32 func_00CEFA10(void) {
    u32 i;
    s32 *p;
    u32 *q;
    u32 j;
    s32 *r;

    i = 0;
    p = ((void *)D_00CF9EF0);
    do {
        func_001F0210(func_0021DF90(*p));
        i += 1;
        p += 1;
    } while (i < 2U);
    j = 0;
    q = ((void *)D_00CF9F00);
    do {
        func_001E7140(func_0021E000(*q));
        j += 1;
        q += 1;
    } while (j < 2U);
    j = 0;
    r = ((void *)D_00CF9F08);
    do {
        func_001DA4B0(*r);
        j += 1;
        r += 1;
    } while (j < 2U);
    i = 0;
    p = ((void *)D_00CF9EF8);
    do {
        func_001D5C40(*p);
        i += 1;
        p += 1;
    } while (i < 2U);
    func_001D5A50(0x1259F);
    return 1;
}
