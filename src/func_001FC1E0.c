/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_0013E2A0(s32);                         /* extern */
M2C_UNK func_0020A630();                            /* extern */
M2C_UNK func_002726D0();                            /* extern */
M2C_UNK func_0027CB60(M2C_UNK);                     /* extern */
M2C_UNK func_002BD960();                            /* extern */
M2C_UNK func_00341D00();                            /* extern */
M2C_UNK func_009A0A90();                            /* extern */
M2C_UNK func_009A69A0();                            /* extern */
M2C_UNK func_00BC5BE0();                            /* extern */
M2C_UNK func_00BC6930();                            /* extern */
extern char D_00591DD6[];
extern char D_00591DDC[];
extern char D_00591DE0[];

s32 func_001FC1E0(void) {
    if ((*(u8 *)D_00591DE0) != 0) {
        func_0013E2A0((*(s32 *)D_00591DDC));
        (*(u8 *)D_00591DE0) = 0;
    }
    if ((*(u8 *)D_00591DD6) != 0) {
        func_009A69A0();
    }
    func_002726D0();
    func_0027CB60(4);
    func_00BC5BE0();
    func_00BC6930();
    func_009A0A90();
    func_0020A630();
    func_00341D00();
    func_002BD960();
    return 1;
}
