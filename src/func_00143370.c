/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK FlushCache(M2C_UNK);                     /* extern */
M2C_UNK func_001C4730(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern char D_00376510[];
extern char D_003765A0[];
extern char D_00376630[];
extern char D_003766C0[];
extern char D_00500620[];
extern char D_005006B0[];
extern char D_00500740[];
extern char D_005007D0[];

void func_00143370(void) {
    func_001C4730(((void *)D_00500620), (s32) ((void *)D_00376630) | 0x20000000, 0x90);
    func_001C4730(((void *)D_005006B0), (s32) ((void *)D_00376510) | 0x20000000, 0x90);
    func_001C4730(((void *)D_00500740), (s32) ((void *)D_003765A0) | 0x20000000, 0x90);
    func_001C4730(((void *)D_005007D0), (s32) ((void *)D_003766C0) | 0x20000000, 0x90);
    FlushCache(0);
}
