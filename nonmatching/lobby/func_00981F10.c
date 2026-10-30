/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_0099C6D0(M2C_UNK);                     /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
M2C_UNK func_009C2540(s8);                          /* extern */
M2C_UNK func_009C2DD0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_009C2ED0(M2C_UNK, s32);                /* extern */
M2C_UNK func_009C3180(M2C_UNK);                     /* extern */
extern char D_00A7D650[];
extern char D_00A7D658[];
extern char D_00A7D660[];
extern char D_00A7D668[];

s32 func_00981F10(s8 arg0) {
    (*(s8 *)D_00A7D658) = arg0;
    (*(s8 *)D_00A7D660) = arg0;
    (*(s32 *)D_00A7D650) = 0;
    (*(s32 *)D_00A7D668) = 0;
    func_0099C730(0x01F8004C);
    func_0099C6D0(1);
    func_009C3180(4);
    func_009C2ED0(0, func_001F08B0(0x6C000F));
    func_009C2ED0(1, func_001F08B0(0x6C000E));
    func_009C2DD0(0, 0x6C0019);
    func_009C2DD0(1, 0x01F8004D);
    func_009C2540((*(s8 *)D_00A7D658));
    return 1;
}
