/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C4730(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_002F8050(s32, M2C_UNK);                /* extern */
M2C_UNK func_002F80C0(s32, M2C_UNK);                /* extern */
s32 func_002F8210(s32);                             /* extern */
extern char D_00530C6C[];
extern char D_00530C70[];
extern char D_00530C74[];
extern char D_009D4CD0[];
extern char D_009F8080[];
extern char D_00A0AA00[];

void func_009310E0(void) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s0_5;

    func_001C4730((*(s32 *)D_00530C6C), ((void *)D_00A0AA00), 0x5800);
    func_001C4730((*(s32 *)D_00530C70), ((void *)D_009F8080), 0x12980);
    func_001C4730((*(s32 *)D_00530C74), ((void *)D_009D4CD0), 0xBE00);
    var_s0 = 0;
    do {
        if (func_002F8210(var_s0) == 0) {
            func_002F80C0(var_s0, 0);
        }
        var_s0 = (var_s0 + 1) & 0xFFFF;
    } while (var_s0 < 0x39);
    var_s0_2 = 0x39;
    do {
        if (func_002F8210(var_s0_2) == 0) {
            func_002F80C0(var_s0_2, 0);
        }
        var_s0_2 = (var_s0_2 + 1) & 0xFFFF;
    } while (var_s0_2 < 0x40);
    var_s0_3 = 0;
    do {
        func_002F8050(var_s0_3, 0);
        var_s0_3 = (var_s0_3 + 1) & 0xFFFF;
    } while (var_s0_3 < 0x39);
    var_s0_4 = 0x39;
    do {
        func_002F8050(var_s0_4, 0);
        var_s0_4 = (var_s0_4 + 1) & 0xFFFF;
    } while (var_s0_4 < 0x40);
    var_s0_5 = 0x40;
    do {
        func_002F8050(var_s0_5, 0);
        var_s0_5 = (var_s0_5 + 1) & 0xFFFF;
    } while (var_s0_5 < 0xCC);
}
