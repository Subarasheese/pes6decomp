/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_0025E130(M2C_UNK, M2C_UNK *);          /* extern */
extern char D_0058D200[];
extern char D_0058D218[];
extern char D_0058D230[];
extern char D_0058D248[];
extern char D_0058D260[];
extern M2C_UNK func_0025F180;

void func_0025F330(void) {
    func_001C48E8(((void *)D_0058D200), 0, 0x7C);
    (*(s32 *)D_0058D200) = 0x7140;
    (*(s32 *)D_0058D218) = 0x7141;
    (*(s32 *)D_0058D230) = 0x7142;
    (*(s32 *)D_0058D248) = 0x7143;
    (*(s32 *)D_0058D260) = 0x7144;
    func_0025E130(0xA, &func_0025F180);
}
