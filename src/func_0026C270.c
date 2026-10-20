/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00147ED0(M2C_UNK);                     /* extern */
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001E6AD0();                            /* extern */
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_001F0210(s32);                         /* extern */
s32 func_0021DF90(M2C_UNK);                         /* extern */
s32 func_0021E000(M2C_UNK);                         /* extern */
M2C_UNK func_0026B940();                            /* extern */
M2C_UNK func_0026C830();                            /* extern */
extern char D_003AE970[];
extern char D_003AE971[];
extern char D_003AE99C[];

void func_0026C270(void) {
    if ((*(s8 *)D_003AE970) != -1) {
        func_00147ED0(0x4EDF);
        func_00147ED0(0x4EE0);
        func_001E6AD0();
        func_0026B940();
        func_001E7140(func_0021E000(0x8B));
        func_001F0210(func_0021DF90(0xC));
        func_001D5C40(0x1024D);
        func_0026C830();
        (*(s32 *)D_003AE99C) = 0;
        (*(s8 *)D_003AE970) = -1;
        (*(s8 *)D_003AE971) = -1;
    }
}
