/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00853470(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern void *Pes6Ball_Current;
extern s32 D_003E9D00;
extern char D_00591F14[];
extern char D_00853530[];
extern char D_00855D40[];

void func_002B0AA0(void) {
    if (M2C_FIELD(Pes6Ball_Current, u8 *, 0x63) != 4) {
        if (((*(u8 *)D_00591F14) != 0) && (D_003E9D00 == 0)) {
            func_00853470(-1, ((void *)D_00855D40), ((void *)D_00853530), 1);
        }
    } else {
        func_00853470(-1, ((void *)D_00855D40), ((void *)D_00853530), 1);
    }
    D_003E9D00 = (s32) (*(u8 *)D_00591F14);
}
