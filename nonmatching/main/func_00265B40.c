/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B9250(s32, M2C_UNK *);              /* extern */
M2C_UNK func_001BB4F0(s32, void *);                 /* extern */
void *func_00265CD0(s32, s32);                      /* extern */
extern char D_0058D440[];
extern char D_0058D444[];
extern void *D_0058D448;
extern char D_0058D450[];
extern M2C_UNK func_00266240;

void *func_00265B40(s32 arg0, s32 arg1) {
    void *var_s2;

    (*(s32 *)D_0058D440) = arg0;
    (*(s32 *)D_0058D444) = arg1;
    D_0058D448 = NULL;
    func_001B9250((*(s32 *)D_0058D450), &func_00266240);
    var_s2 = D_0058D448;
    if (var_s2 == NULL) {
        var_s2 = func_00265CD0(arg0, arg1);
        if ((var_s2 != NULL) && (var_s2 != NULL)) {
            func_001BB4F0((*(s32 *)D_0058D450), var_s2);
        }
    } else {
        M2C_FIELD(var_s2, s32 *, 0x10) = (s32) (M2C_FIELD(var_s2, s32 *, 0x10) + 1);
    }
    return var_s2;
}
