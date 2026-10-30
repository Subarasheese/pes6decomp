/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00170338(void);
extern void func_00171D10(int);
extern void func_00170368(void);
M2C_UNK func_0016A748(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0016AA80(M2C_UNK *);                   /* extern */
M2C_UNK func_0016BDD0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00171D40(s32);                         /* extern */
extern char D_003C8858[];
extern char D_003C8860[];
extern M2C_UNK func_00164B10;
extern M2C_UNK func_00170398;
extern M2C_UNK mfCiGetInterface;

void func_00164B28(void *arg0) {
    func_0016BDD0(&func_00164B10, 0);
    func_0016A748(((void *)D_003C8858), &mfCiGetInterface, 0);
    func_0016BDD0(&func_00164B10, 0);
    func_0016A748(((void *)D_003C8860), &func_00170398, 0);
    func_0016AA80(((void *)D_003C8860));
    if (arg0 != NULL) {
        func_00171D10(M2C_FIELD(arg0, s32 *, 4));
        func_00171D40(M2C_FIELD(arg0, s32 *, 0));
        if (M2C_FIELD(arg0, s32 *, 8) == 0) {
            func_00170338();
        } else {
            func_00170338();
        }
        if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
            func_00170368();
            return;
        }
        func_00170368();
        return;
    }
    func_00171D10(0);
    func_00171D40(0);
    func_00170338();
    func_00170368();
}
