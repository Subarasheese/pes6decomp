/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00101190(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00121500();                            /* extern */
M2C_UNK func_00144A90();                            /* extern */
M2C_UNK func_00144B50();                            /* extern */
M2C_UNK func_00147020();                            /* extern */
M2C_UNK func_001523A0();                            /* extern */
M2C_UNK func_00153CD0();                            /* extern */
M2C_UNK func_001A4150();                            /* extern */
M2C_UNK func_00260CB0();                            /* extern */
extern s32 D_003E9784;
extern s32 D_003E9C0C;
extern char D_003FAE50[];
extern void *D_003FAE54;

void func_00120E80(void) {
    void *var_s0;

    var_s0 = D_003FAE54;
    func_001A4150();
    if (D_003E9784 != 0) {
        do {
            if (!(M2C_FIELD(var_s0, u8 *, 0xD) & 1)) {
                M2C_FIELD(var_s0, M2C_UNK (**)(), 8)();
            }
            var_s0 = M2C_FIELD(var_s0, void **, 4);
        } while (var_s0 != ((void *)D_003FAE50));
    } else {
        func_00144B50();
        do {
            M2C_FIELD(var_s0, M2C_UNK (**)(), 8)();
            var_s0 = M2C_FIELD(var_s0, void **, 4);
        } while (var_s0 != ((void *)D_003FAE50));
        func_00144A90();
    }
    func_00153CD0();
    func_00121500();
    func_00101190(0, 0);
    if (D_003E9784 == 0) {
        func_00147020();
    }
    if (D_003E9C0C != 0) {
        func_00260CB0();
    }
    func_001523A0();
    D_003E9784 = 0;
}
