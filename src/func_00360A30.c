/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001D4E00(s32);                         /* extern */
M2C_UNK func_0096DA00(s32 *);                       /* extern */
extern s32 *D_003E9FD0;

void func_00360A30(void) {
    if (D_003E9FD0 != NULL) {
        func_001D4E00(*D_003E9FD0);
        if (D_003E9FD0 != NULL) {
            func_0096DA00(D_003E9FD0);
            D_003E9FD0 = NULL;
        }
    }
}
