/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00153FD0(M2C_UNK *, s32);              /* extern */
M2C_UNK func_00155468(s32);                         /* extern */
M2C_UNK func_00155938(s32);                         /* extern */
M2C_UNK func_00155AB8(s32);                         /* extern */
M2C_UNK func_00156700(s32);                         /* extern */
M2C_UNK func_00156B58(s32);                         /* extern */
M2C_UNK func_00157118(s32);                         /* extern */
M2C_UNK func_00157650(s32);                         /* extern */
M2C_UNK func_001578C0(s32);                         /* extern */
M2C_UNK func_00157B90(s32);                         /* extern */
extern char D_005BD428[];
extern char D_005FC3B8[];

void func_00149600(s32 arg0) {
    s32 temp_v0;

    temp_v0 = arg0 + 1;
    (*(s32 *)D_005BD428) = temp_v0;
    func_00153FD0(((void *)D_005FC3B8), temp_v0);
    func_00155468((*(s32 *)D_005BD428));
    func_00155AB8((*(s32 *)D_005BD428));
    func_00157118((*(s32 *)D_005BD428));
    func_00156700((*(s32 *)D_005BD428));
    func_00157B90((*(s32 *)D_005BD428));
    func_00157650((*(s32 *)D_005BD428));
    func_001578C0((*(s32 *)D_005BD428));
    func_00156B58((*(s32 *)D_005BD428));
    func_00155938((*(s32 *)D_005BD428));
}
