/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
extern char D_003B3218[];
extern char D_003B3220[];

void func_002DC760(void) {
    if ((*(s32 *)D_003B3218) != 0) {
        func_001D7D60((*(s32 *)D_003B3218), 0);
        (*(s32 *)D_003B3218) = 0;
    }
    (*(s32 *)D_003B3220) = 0;
}
