/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_0031BC70(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0032E750(M2C_UNK *, s32);              /* extern */
M2C_UNK func_00338360(M2C_UNK *, s32);              /* extern */
M2C_UNK func_003396A0(M2C_UNK *, s32);              /* extern */
extern char D_005F28BC[];
extern char D_005F2A84[];
extern char D_005F2E4C[];
extern char D_005F2F30[];

s32 func_003421E0(s32 arg0) {
    func_0031BC70(((void *)D_005F2A84), arg0);
    func_0032E750(((void *)D_005F2F30), arg0);
    func_003396A0(((void *)D_005F28BC), arg0);
    func_00338360(((void *)D_005F2E4C), arg0);
    return 1;
}
