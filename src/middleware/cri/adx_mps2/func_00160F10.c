/* compiler: ee-gcc-2.96 */
#include "types.h"
extern void func_001600B8(void);
extern void func_0015EF80(s32);
extern s32 D_0038326C[];
int func_00160F10(void) {
    int available = 1;
    if (D_0038326C[0] != 1) {
        if ((D_0038326C[0] == 0) || (D_0038326C[0] == 2)) {
            func_001600B8();
        } else {
            available = 0;
        }
    }
    func_0015EF80(-1);
    return available;
}
