/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_008469B0(M2C_UNK);                     /* extern */
M2C_UNK func_0085A410(M2C_UNK *);                   /* extern */
extern char D_008B22C0[];
extern char D_008B2304[];
extern char D_008B2310[];

s32 func_0085A390(void) {
    func_001C48E8(((void *)D_008B22C0), 0, 0x54);
    func_0085A410(((void *)D_008B22C0));
    if (func_002DCA40() != 0) {
        func_008469B0(2);
    }
    (*(s8 *)D_008B2304) = 1;
    (*(s32 *)D_008B2310) = 7;
    return 0;
}
