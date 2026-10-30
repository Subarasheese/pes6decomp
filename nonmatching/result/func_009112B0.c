/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00186260();                            /* extern */
M2C_UNK func_001B4D20(s32);                         /* extern */
M2C_UNK func_001B78A0(M2C_UNK);                     /* extern */
M2C_UNK func_001B7A90();                            /* extern */
M2C_UNK func_001E6C50(s32);                         /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_001F1EA0(s32);                         /* extern */
M2C_UNK func_002727C0(M2C_UNK);                     /* extern */
M2C_UNK func_002D3560(M2C_UNK *);                   /* extern */
M2C_UNK func_0081D200(M2C_UNK);                     /* extern */
M2C_UNK func_00C75330(M2C_UNK *);                   /* extern */
M2C_UNK func_00D0C980();                            /* extern */
M2C_UNK func_00D0FBE0(M2C_UNK);                     /* extern */
M2C_UNK func_00D0FD20();                            /* extern */
extern s16 D_003EA654;
extern s8 D_003EA658;
extern char D_0058D7AA[];
extern char D_00921DBC[];
extern char D_00921DD0[];
extern char D_00921DD4[];
extern char D_00921E24[];
extern char D_00921E28[];
extern char D_00921E2C[];
extern char D_00921E30[];
extern char D_00921E68[];
extern char D_00921F28[];
extern char D_00921F44[];
extern char D_00921F58[];
extern char D_00924270[];

void func_009112B0(void) {
    func_001F1EA0((*(s32 *)D_00921F44));
    if ((*(s8 *)D_0058D7AA) != 0) {
        func_0081D200(0);
        func_00D0C980();
        func_00D0FBE0(0);
        func_00D0FD20();
    }
    if (((*(s32 *)D_00921DD0) != 0) && ((*(s8 *)D_0058D7AA) == 0)) {
        func_00C75330(((void *)D_00924270));
        D_003EA658 = 0;
        D_003EA654 = 0;
    }
    func_001B4D20((*(s32 *)D_00921F58));
    func_001EDD90((*(s32 *)D_00921E2C));
    func_001EDD90((*(s32 *)D_00921E30));
    func_001E6C50((*(s32 *)D_00921E24));
    func_001E6C50((*(s32 *)D_00921E28));
    func_00C75330(((void *)D_00921F28));
    func_00C75330(((void *)D_00921E68));
    func_00C75330(((void *)D_00921DD4));
    func_001B78A0(0);
    func_001B7A90();
    func_002D3560(((void *)D_00921DBC));
    func_002727C0(0);
    func_00186260();
}
