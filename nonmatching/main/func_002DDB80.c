/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int sceSifCallRpc(void *, int, unsigned int, void *, int, void *, int, void *, void *);
M2C_UNK func_00105380(s32);                         /* extern */
M2C_UNK WaitSema(s32);                         /* extern */
M2C_UNK func_001C7F58(s8 *, s32 *);                 /* extern */
extern s32 D_003E9DD8;
extern char D_005E7FC0[];
extern char D_005E8000[];

s32 func_002DDB80(s8 *arg0, s8 *arg1) {
    WaitSema(D_003E9DD8);
    if (sceSifCallRpc(((void *)D_005E7FC0), 0x1C, 0U, ((void *)D_005E8000), 4, ((void *)D_005E8000), 0x204, NULL, (void *) 0) == 0) {
        if ((*(s32 *)D_005E8000) < 0) {
            *arg0 = 0;
            *arg1 = 0;
        } else {
            func_001C7F58(arg0, ((void *)D_005E8000) + 4);
            func_001C7F58(arg1, ((void *)D_005E8000) + 0x104);
        }
    }
    func_00105380(D_003E9DD8);
    return (*(s32 *)D_005E8000);
}
