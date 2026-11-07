/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_001F8760(void *);
M2C_UNK func_001C7F58(M2C_UNK *, M2C_UNK *);
extern char D_00D20600[];
extern char D_00D395D0[];
extern char D_00D395D8[];
extern char D_00D39640[];
s32 func_00D14D50(M2C_UNK *arg0) {
    if (arg0 == NULL) {
        arg0 = ((void *)D_00D20600);
    }
    func_001C7F58(((void *)D_00D39640), arg0);
    (*(s32 *)D_00D395D8) = 0;
    (*(s32 *)D_00D395D0) = func_001F8760(arg0);
    return 0;
}
