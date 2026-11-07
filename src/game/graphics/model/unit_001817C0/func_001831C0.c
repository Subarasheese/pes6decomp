/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00145750(s32);                         /* extern */
M2C_UNK func_00147010(s32, M2C_UNK);                /* extern */
extern char D_0051FF90[];
extern char D_0051FF94[];
extern char D_0051FF98[];

void func_001831C0(void) {
    func_00147010((*(s32 *)D_0051FF90), 0x27D8);
    func_00147010((*(s32 *)D_0051FF94), 0x27DA);
    func_00147010((*(s32 *)D_0051FF98), 0x27D9);
    func_00145750((*(s32 *)D_0051FF90));
    func_00145750((*(s32 *)D_0051FF94));
    func_00145750((*(s32 *)D_0051FF98));
}
