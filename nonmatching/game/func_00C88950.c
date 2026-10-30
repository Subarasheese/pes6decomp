/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D5610(void *);
extern void func_001F1EA0(void *);
M2C_UNK func_001DF7B0(s32);                         /* extern */
extern char D_00CCCDF0[];
extern void *D_00CCCDF4;
extern char D_00CCCDF8[];
extern char D_00CCCE04[];
extern char D_00CCCE08[];
extern char D_00CCCE0C[];
extern char D_00CCCE10[];

void func_00C88950(void) {
    func_001F1EA0(D_00CCCDF4);
    D_00CCCDF4 = NULL;
    (*(s32 *)D_00CCCDF8) = 0;
    if ((*(s32 *)D_00CCCDF0) != 0) {
        func_001DF7B0((*(s32 *)D_00CCCDF0));
        (*(s32 *)D_00CCCDF0) = 0;
    }
    (*(s32 *)D_00CCCE0C) = 3;
    (*(u8 *)D_00CCCE04) = ((*(u8 *)D_00CCCE04) & ~8) | ((0 & 1) * 8);
    (*(s32 *)D_00CCCE08) = 3;
    func_002D5610(((void *)D_00CCCE10));
    (*(u8 *)D_00CCCE04) = ((*(u8 *)D_00CCCE04) & ~4) | ((0 & 1) * 4);
}
