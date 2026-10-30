/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002A96D0(void);
M2C_UNK func_0027CB60(M2C_UNK);                     /* extern */
M2C_UNK func_00B24A10();                            /* extern */
M2C_UNK func_00B24A80(M2C_UNK);                     /* extern */
M2C_UNK func_00B25220(M2C_UNK);                     /* extern */
extern char D_00591C08[];
extern char D_00591E14[];
extern char D_00CBBDF8[];
extern char D_00CBBE00[];

s32 func_009E3020(void) {
    (*(s8 *)D_00591C08) = 2;
    (*(s8 *)D_00CBBE00) = 0xFF;
    (*(s8 *)D_00CBBDF8) = 0;
    func_00B25220(2);
    func_00B24A80(0);
    func_00B24A10();
    (*(s32 *)D_00591E14) = 0;
    func_002A96D0();
    func_0027CB60(5);
    return 1;
}
