/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00205200(u8);                          /* extern */
M2C_UNK func_00205380(u8);                          /* extern */
extern char D_00592730[];

void func_00205910(u8 arg0) {
    func_00205200((*(u8 *)D_00592730));
    (*(u8 *)D_00592730) = arg0;
    func_00205380((*(u8 *)D_00592730));
}
