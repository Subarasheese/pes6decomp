/* compiler: ee-gcc-2.96 */
#include "pes6/m2c.h"

extern void func_001610B0(void *);
extern char D_0038DBD0[];
extern char D_0038DBD8[];
extern char D_003CC070[];

s32 func_00176150(void) {
    if ((*(s32 *)D_0038DBD8 == 1) && (*(s32 *)D_0038DBD0 <= 0)) {
        return 0;
    }
    func_001610B0(D_003CC070);
    return 0;
}
