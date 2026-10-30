/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00136FD8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0014F828(s64);                         /* extern */
M2C_UNK func_00153FD0(M2C_UNK *, s64);              /* extern */
M2C_UNK func_001540B0(M2C_UNK *);                   /* extern */
M2C_UNK func_00154510();                            /* extern */
extern char D_005FCB90[];
extern char D_005FCBB0[];
extern char D_005FCBC0[];
extern char D_005FCBC8[];
extern char D_005FCBD8[];
extern char D_005FCBE8[];
extern char D_005FCBF8[];
extern char D_005FCC08[];
extern char D_005FCC18[];
extern char D_005FCC28[];
extern char D_005FCC30[];
extern char D_005FCC40[];
extern char D_005FCC50[];

void func_0014FAA0(M2C_UNK arg0, s64 arg1) {
    s64 temp_s1;

    temp_s1 = (s64) (arg1 << 0x20) >> 0x20;
    func_001540B0(((void *)D_005FCBB0));
    func_001540B0(((void *)D_005FCBC0));
    func_001540B0(((void *)D_005FCBC8));
    func_001540B0(((void *)D_005FCBD8));
    func_001540B0(((void *)D_005FCB90));
    func_001540B0(((void *)D_005FCBE8));
    func_001540B0(((void *)D_005FCBF8));
    func_001540B0(((void *)D_005FCC08));
    func_001540B0(((void *)D_005FCC18));
    func_001540B0(((void *)D_005FCC28));
    func_001540B0(((void *)D_005FCC30));
    func_001540B0(((void *)D_005FCC40));
    func_001540B0(((void *)D_005FCC50));
    func_00153FD0(((void *)D_005FCB90), temp_s1);
    func_00154510();
    func_0014F828(temp_s1);
    func_00136FD8(0, 1);
}
