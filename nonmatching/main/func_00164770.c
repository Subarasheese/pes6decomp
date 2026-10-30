/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016A748(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0016AA80(M2C_UNK *);                   /* extern */
M2C_UNK func_0016BDD0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00170228(s32, s32, s32, s32);          /* extern */
M2C_UNK func_00170248(s32);                         /* extern */
M2C_UNK func_001C4698(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern char D_00384C20[];
extern char D_00384C30[];
extern char D_003C8838[];
extern char D_003C8840[];
extern M2C_UNK func_00164758;
extern M2C_UNK func_0016E9B0;
extern M2C_UNK mfCiGetInterface;

void func_00164770(void *arg0) {
    func_001C4698(((void *)D_00384C20), ((void *)D_00384C20), 0x80);
    func_001C4698(((void *)D_00384C30), ((void *)D_00384C30), 0xE8);
    func_0016BDD0(&func_00164758, 0);
    func_0016A748(((void *)D_003C8838), &mfCiGetInterface, 0);
    func_0016BDD0(&func_00164758, 0);
    func_0016A748(((void *)D_003C8840), &func_0016E9B0, 0);
    func_0016AA80(((void *)D_003C8840));
    if (arg0 != NULL) {
        func_00170228(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 4));
        func_00170248(M2C_FIELD(arg0, s32 *, 0));
        return;
    }
    func_00170228(0, 0, 0, 0);
    func_00170248(0);
}
