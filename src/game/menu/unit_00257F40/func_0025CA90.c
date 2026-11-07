/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_0025EC80(M2C_UNK);                         /* extern */
s32 func_0025ECE0(M2C_UNK);                         /* extern */
M2C_UNK func_0025ED00(M2C_UNK, M2C_UNK *);          /* extern */
extern char D_0058CFD0[];
extern char D_0058CFD4[];
extern char D_0058CFD8[];

void func_0025CA90(void) {
    func_0025ED00(1, ((void *)D_0058CFD8));
    (*(s32 *)D_0058CFD4) = func_0025EC80(1);
    (*(s32 *)D_0058CFD0) = func_0025ECE0(1);
}
