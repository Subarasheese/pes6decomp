/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0025EC80(M2C_UNK);                         /* extern */
s32 func_0025ECE0(M2C_UNK);                         /* extern */
M2C_UNK func_0025ED00(M2C_UNK, M2C_UNK *);          /* extern */
extern char D_0058D3B0[];
extern char D_0058D3B4[];
extern char D_0058D3B8[];

void func_00261A90(void) {
    (*(s32 *)D_0058D3B0) = func_0025ECE0(1);
    func_0025ED00(1, ((void *)D_0058D3B4));
    (*(s32 *)D_0058D3B8) = func_0025EC80(1);
}
