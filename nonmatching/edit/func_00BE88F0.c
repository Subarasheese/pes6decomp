/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002FC740(u8, u8);
extern int func_00363C30(void);
extern void func_00C1B3B0(u32);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00363C40();                            /* extern */
M2C_UNK func_008C9720();                            /* extern */
M2C_UNK func_00B91260();                            /* extern */
M2C_UNK func_00B915B0();                            /* extern */
M2C_UNK func_00B93450();                            /* extern */
M2C_UNK func_00BC43E0();                            /* extern */
M2C_UNK func_00BC6550(M2C_UNK);                     /* extern */
M2C_UNK func_00BC65E0(M2C_UNK);                     /* extern */
M2C_UNK func_00BC66B0();                            /* extern */
M2C_UNK func_00BC9E10();                            /* extern */
M2C_UNK func_00BCF2E0();                            /* extern */
M2C_UNK func_00BCF400();                            /* extern */
M2C_UNK func_00BF7990();                            /* extern */
M2C_UNK func_00BFE470();                            /* extern */
M2C_UNK func_00BFEB70(M2C_UNK);                     /* extern */
M2C_UNK func_00C04330();                            /* extern */
M2C_UNK func_00C06070();                            /* extern */
M2C_UNK func_00C1B530();                            /* extern */
extern char D_00CE5BF8[];

s32 func_00BE88F0(void) {
    func_00C1B530();
    func_00B915B0();
    func_00B93450();
    func_00BF7990();
    func_00BC9E10();
    func_001C48E8(((void *)D_00CE5BF8), 0, 8);
    func_002FC740(0U, 0U);
    func_002FC740(1U, 0U);
    func_00BCF400();
    func_00BCF2E0();
    func_008C9720();
    func_00C04330();
    func_00BC43E0();
    func_00B91260();
    func_00C06070();
    func_00BFEB70(0);
    func_00BC65E0(9);
    func_00BC65E0(0xC);
    func_00BC6550(9);
    func_00BFE470();
    func_00BC66B0();
    if (func_00363C30() == 0) {
        func_00363C40();
        func_00C1B3B0(1U);
    }
    return 1;
}
