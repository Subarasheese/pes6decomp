/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
extern char D_00591C09[];

s32 func_00971200(void) {
    func_001D5F80(0x1029F);
    switch ((*(u8 *)D_00591C09)) {                           /* irregular */
    case 14:
    case 2:
    case 1:
        break;
    case 4:
        func_001D5F80(0x1032B);
        break;
    }
    func_001D5F80(0x1003C);
    func_001D5F80(0x1003F);
    func_001D5F80(0x102A1);
    return 1;
}
