/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00D13C80(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00D13DD0();                            /* extern */
M2C_UNK func_00D15E00();                            /* extern */
extern char D_00D393D0[];
extern char D_00D393E0[];
extern char D_00D39560[];
extern char D_00D39580[];
extern char D_00D395B0[];

s32 func_00D13BE0(void) {
    func_00D13DD0();
    func_001C48E8(((void *)D_00D395B0), 0, 0x10);
    func_00D15E00();
    func_00D13C80();
    func_001C48E8(((void *)D_00D39560), 0, 0x20);
    func_001C48E8(((void *)D_00D393E0), 0, 0x17C);
    func_001C48E8(((void *)D_00D393D0), 0, 8);
    func_001C48E8(((void *)D_00D39580), 0, 0x28);
    return 0;
}
