/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A22F0(void);
extern void func_0013E2A0(int);
extern void func_0020A630(void);
M2C_UNK func_002726D0();                            /* extern */
M2C_UNK func_002BD960();                            /* extern */
M2C_UNK func_009A69A0();                            /* extern */
extern char D_00591DD6[];
extern char D_00591DDC[];
extern char D_00591DE0[];

s32 func_00CD6030(void) {
    if ((*(u8 *)D_00591DE0) != 0) {
        func_0013E2A0((*(s32 *)D_00591DDC));
        (*(u8 *)D_00591DE0) = 0;
    }
    if ((*(u8 *)D_00591DD6) != 0) {
        func_009A69A0();
    }
    func_002726D0();
    func_0020A630();
    func_002BD960();
    func_001A22F0();
    return 1;
}
