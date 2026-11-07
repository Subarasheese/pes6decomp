/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001F01D0(s32);                             /* extern */
M2C_UNK func_001F0590(s32);                         /* extern */
s32 func_0021DF90(M2C_UNK);                         /* extern */
M2C_UNK *func_0021FC60();                           /* extern */
M2C_UNK *func_0021FC70();                           /* extern */
M2C_UNK *func_0021FC80();                           /* extern */
M2C_UNK *func_0021FC90();                           /* extern */
M2C_UNK *func_0021FCA0();                           /* extern */
M2C_UNK *func_0021FCB0();                           /* extern */
M2C_UNK func_0021FE80(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0021FEB0(M2C_UNK);                     /* extern */
M2C_UNK *func_002F8880(M2C_UNK);                    /* extern */
M2C_UNK *func_002F8BE0();                           /* extern */
extern s32 D_003EAC64;
extern char D_00931A00[];
extern char D_009CA880[];
extern char D_009CAF10[];
extern char D_009CC190[];
extern char D_009CCEB0[];
extern char D_009F5D00[];
extern char D_009F8080[];
extern char D_00A0AA00[];

void func_00930D50(void) {
    M2C_UNK *temp_s0;
    M2C_UNK *temp_s1;
    M2C_UNK *temp_s2;
    M2C_UNK *temp_s3;
    M2C_UNK *temp_s4;
    M2C_UNK *temp_s5;
    M2C_UNK *temp_s6;
    M2C_UNK *temp_s7;

    temp_s4 = func_0021FCB0();
    temp_s3 = func_0021FCA0();
    temp_s2 = func_0021FC90();
    temp_s1 = func_0021FC80();
    temp_s0 = func_0021FC70();
    temp_s5 = func_0021FC60();
    temp_s6 = func_002F8BE0();
    temp_s7 = func_002F8880(0x10E);
    D_003EAC64 = 0;
    if (func_001F01D0(func_0021DF90(0)) == 0) {
        func_001F0590(func_0021DF90(0));
        D_003EAC64 = 1;
    }
    func_0021FE80(((void *)D_00A0AA00), 0x13);
    func_0021FE80(((void *)D_009F8080), 0x14);
    func_0021FE80(temp_s6, 0x17);
    func_0021FE80(temp_s7, 0x19);
    func_0021FEB0(3);
    func_0021FE80(((void *)D_00931A00), 0);
    func_0021FE80(((void *)D_009CC190), 1);
    func_0021FE80(((void *)D_009CCEB0), 2);
    func_0021FE80(((void *)D_009CA880), 3);
    func_0021FE80(((void *)D_009CAF10), 4);
    func_0021FEB0(0);
    func_0021FE80(((void *)D_009F5D00), 0x1A);
    func_0021FEB0(4);
    func_0021FE80(temp_s5, 0x1B);
    func_0021FE80(temp_s3, 0x1C);
    func_0021FE80(temp_s4, 0x1D);
    func_0021FE80(temp_s2, 0x1E);
    func_0021FE80(temp_s1, 0x1F);
    func_0021FE80(temp_s0, 0x20);
    func_0021FEB0(5);
}
