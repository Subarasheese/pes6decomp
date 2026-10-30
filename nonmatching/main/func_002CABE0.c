/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002CBD20(s8, s32, s32);
extern s32 func_00240C40(void);
M2C_UNK func_002CB9B0(M2C_UNK);                     /* extern */
M2C_UNK func_002CBA60(M2C_UNK);                     /* extern */
extern s8 D_003E9D58;
extern char D_00D07000[];

void func_002CABE0(void) {
    func_002CBA60(0x17);
    func_002CBA60(9);
    if (func_00240C40() == 1) {
        func_002CBA60(0xA);
    }
    func_002CBA60(0xB);
    func_002CBA60(5);
    func_002CBD20(5, ((s32) (((void *)D_00D07000) + 0x7FF) & ~0x7FF) | 0x800, 0x2CE000);
    func_002CB9B0(5);
    D_003E9D58 = 0;
}
