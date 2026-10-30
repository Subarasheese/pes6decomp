/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00207BE0(void *);
M2C_UNK func_00209830();                            /* extern */
M2C_UNK func_00BCAFC0(void *);                      /* extern */
M2C_UNK func_00BCB090(void *);                      /* extern */
M2C_UNK func_00BCB250(void *);                      /* extern */
M2C_UNK func_00BCB970(void *, s32);                 /* extern */
extern char D_00CBA8B1[];
extern char D_00CE5354[];
extern char D_00CE5355[];
extern char D_00CE5358[];

void func_00BCA8D0(void *arg0) {
    func_00209830();
    if ((*(u8 *)D_00CBA8B1) != 0) {
        func_00BCB090(arg0);
        return;
    }
    if (((*(u8 *)D_00CE5355) | (*(u8 *)D_00CE5354)) == 0) {
        if (M2C_FIELD(arg0, u16 *, 0x30) != 0x602) {
            func_00207BE0(arg0);
        }
        func_00BCB970(arg0, (*(s32 *)D_00CE5358));
        func_00BCB250(arg0);
        return;
    }
    func_00BCAFC0(arg0);
}
