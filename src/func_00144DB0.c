/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00105370(s32);                         /* extern */
M2C_UNK func_0012AFA0(s32);                         /* extern */
extern char D_0050302C[];
extern char D_0050303C[];
extern char D_00503040[];

void func_00144DB0(void) {
    func_0012AFA0((*(s32 *)D_0050302C));
    func_00105370((*(s32 *)D_0050303C));
    func_00105370((*(s32 *)D_00503040));
}
