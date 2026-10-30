/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00273E70(void);
extern void Pes6Ball_Update(void);
extern void func_002727C0(s32);
extern void func_00B25D90(void);
M2C_UNK func_002562B0(M2C_UNK);                     /* extern */
M2C_UNK func_00922FB0(s32);                         /* extern */
M2C_UNK func_00999150();                            /* extern */
M2C_UNK func_009B6B90();                            /* extern */
M2C_UNK func_00AD0A20();                            /* extern */
M2C_UNK func_00B27920();                            /* extern */
M2C_UNK func_00BF0580(M2C_UNK);                     /* extern */
extern char D_00591C09[];
extern char D_00591DC8[];
extern char D_005926FF[];

void func_009E1DC0(void) {
    func_002727C0(3);
    func_00999150();
    func_00AD0A20();
    Pes6Ball_Update();
    switch ((*(s32 *)D_00591DC8)) {                           /* irregular */
    case 3:
        func_002562B0(0xF);
        break;
    case 2:
        func_00B25D90();
        break;
    case 1:
        func_00B25D90();
        break;
    case 0:
        func_00922FB0((*(s32 *)D_00591DC8));
        break;
    }
    if ((*(u8 *)D_00591C09) == 5) {
        func_00B27920();
    }
    func_00273E70();
    func_009B6B90();
    if ((*(u8 *)D_005926FF) == 4) {
        func_00BF0580(4);
    }
}
