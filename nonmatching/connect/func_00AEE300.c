/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B6460(M2C_UNK);                     /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001DC980(s32);                         /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */
extern char D_00B02B90[];
extern char D_00B02B94[];
extern char D_00B02BA0[];

void func_00AEE300(void) {
    if ((*(s32 *)D_00B02B90) != 0) {
        func_001EDD90((*(s32 *)D_00B02B90));
    }
    if ((*(s32 *)D_00B02BA0) != 0) {
        func_001DC980((*(s32 *)D_00B02BA0));
    }
    (*(s32 *)D_00B02B90) = 0;
    func_001C48E8(((void *)D_00B02B94), 0, 0xC);
    (*(s32 *)D_00B02BA0) = 0;
    func_001B6460(0);
}
