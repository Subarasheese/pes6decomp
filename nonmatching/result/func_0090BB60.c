/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
extern void func_001FC780(void);
extern void func_001FC840(void);
M2C_UNK func_001D5EE0(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_001DA550(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_001DD680(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_001E75A0(s32, M2C_UNK *);              /* extern */
extern char D_0091F2B8[];
extern char D_0091F2C0[];

void func_0090BB60(void) {
    func_001FC780();
    func_001FC840();
    func_001DD680(1, ((void *)D_0091F2B8));
    func_001D5EE0(0x10344, ((void *)D_0091F2B8));
    func_001DA550(2, ((void *)D_0091F2C0));
    func_001E75A0(func_0021E000(0x8FU), ((void *)D_0091F2B8));
    func_001D5EE0(0x10385, ((void *)D_0091F2B8));
    func_001E75A0(func_0021E000(0x73U), ((void *)D_0091F2B8));
    func_001D5EE0(0x1003C, ((void *)D_0091F2B8));
    func_001D5EE0(0x10391, ((void *)D_0091F2B8));
}
