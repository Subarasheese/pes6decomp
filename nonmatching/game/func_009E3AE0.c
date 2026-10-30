/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002A96D0(void);
extern int func_002DCA30(void);
extern void func_0027AA00(int);
extern s32 func_002DED00(s32);
M2C_UNK func_0027CB60(M2C_UNK);                     /* extern */
M2C_UNK func_0084F7A0();                            /* extern */
M2C_UNK func_00855290(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B24A10();                            /* extern */
M2C_UNK func_00B24A80(M2C_UNK);                     /* extern */
M2C_UNK func_00B25220();                            /* extern */
M2C_UNK func_00C01540(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C019F0();                            /* extern */
extern s32 D_003E7A20;
extern char D_00591C08[];
extern char D_00591E14[];
extern char D_00CBBDF8[];
extern char D_00CBBE00[];

void func_009E3AE0(void) {
    (*(s8 *)D_00CBBE00) = 0xFF;
    func_00B25220();
    func_00B24A80(0);
    func_00B24A10();
    (*(s8 *)D_00CBBDF8) = 0;
    (*(s32 *)D_00591E14) = 0;
    (*(s8 *)D_00591C08) = 2;
    if (func_002DCA30() != 0) {
        func_0084F7A0();
        if (D_003E7A20 != -1) {
            func_002DED00(D_003E7A20);
            D_003E7A20 = -1;
        }
    }
    func_002A96D0();
    func_0027AA00(0);
    func_0027CB60(5);
    func_00C019F0();
    func_00C01540(0x2A, 0x17, 0x17, 0xC, 0);
    func_009E1D30(1, 0xC);
    if (func_002DCA30() != 0) {
        func_00855290(3, func_009E1C90(1) & 0xFF, 0);
    }
}
