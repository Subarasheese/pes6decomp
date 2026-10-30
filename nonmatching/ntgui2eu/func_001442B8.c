/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00136490(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00137990(s32, s32);                    /* extern */
M2C_UNK func_00165AC0(s32);                         /* extern */
extern char D_005BD344[];
extern char D_005BD348[];
extern char D_011DF838[];
extern char D_011DF860[];
extern char D_011DF864[];
extern char D_011DF868[];
extern char D_011DFA70[];

void func_001442B8(void) {
    s32 *var_s0;

    if ((M2C_FIELD(((void *)D_011DFA70), s32 *, 0) >= 0) && (var_s0 = ((void *)D_011DF838), ((M2C_FIELD(((void *)D_011DFA70), s32 *, 0) < 7) != 0))) {
        if ((*(s32 *)D_011DF838) != 0) {
            func_00165AC0((*(s32 *)D_011DF838));
        }
        (*(s32 *)D_005BD348) = -1;
        (*(s32 *)D_011DF868) = 0;
        (*(s32 *)D_005BD344) = -1;
    } else {
        var_s0 = (s32 *)0x011E0000;
    }
    func_00137990((*(s32 *)D_011DF860), (*(s32 *)D_011DF864));
    func_00136490(M2C_FIELD(var_s0, s32 *, -0x7C8), M2C_FIELD(((void *)D_011DFA70), s32 *, -0x590), 0xE);
}
