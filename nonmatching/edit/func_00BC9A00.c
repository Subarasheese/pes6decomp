/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002CB730(s64);
M2C_UNK func_001B3D70();                            /* extern */
M2C_UNK func_008CB9F0(M2C_UNK);                     /* extern */
M2C_UNK func_008CBD30(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_008CBE60(M2C_UNK, s32);                /* extern */
M2C_UNK func_008CC080(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_008CC230(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_00BC65E0(M2C_UNK);                     /* extern */
s32 func_00C1B460(M2C_UNK);                         /* extern */

void func_00BC9A00(s32 arg0) {
    func_008CB9F0(3);
    func_008CBE60(0, func_00C1B460(0) & 0xFFFF);
    func_008CC080(3, arg0, 0);
    func_008CB9F0(3);
    func_008CC230(3, arg0, 2);
    func_008CBD30(3, 1, 2);
    func_00BC65E0(0xA);
    func_002CB730(0xA);
    func_001B3D70();
    func_002CB730(1);
}
