/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00145590(s32);                         /* extern */
M2C_UNK func_001514D0(s32);                         /* extern */
M2C_UNK func_00182070(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001821C0();                            /* extern */
M2C_UNK func_00186420();                            /* extern */
M2C_UNK func_00189A10();                            /* extern */
M2C_UNK func_0018D740();                            /* extern */
M2C_UNK func_0019ED60();                            /* extern */
extern char D_0051FF64[];
extern char D_0051FF68[];
extern char D_0051FF6C[];
extern char D_0051FF88[];
extern char D_0051FF90[];
extern char D_0051FF94[];
extern char D_0051FF98[];
extern char D_0051FFA4[];

void func_00182BD0(void) {
    func_00186420();
    func_0019ED60();
    if ((*(s32 *)D_0051FF64) != 0) {
        func_001514D0((*(s32 *)D_0051FF64));
    }
    func_00182070(0, 0x1B);
    if ((*(s32 *)D_0051FF68) != 0) {
        func_001514D0((*(s32 *)D_0051FF68));
    }
    if ((*(s32 *)D_0051FF6C) != 0) {
        func_001514D0((*(s32 *)D_0051FF6C));
    }
    if ((*(s32 *)D_0051FF90) != 0) {
        func_00145590((*(s32 *)D_0051FF90));
    }
    if ((*(s32 *)D_0051FF94) != 0) {
        func_00145590((*(s32 *)D_0051FF94));
    }
    if ((*(s32 *)D_0051FF98) != 0) {
        func_00145590((*(s32 *)D_0051FF98));
    }
    func_00182070(3, 1);
    func_00182070(7, 1);
    func_00182070(0x15, 1);
    if ((*(s32 *)D_0051FF88) != 0) {
        func_001514D0((*(s32 *)D_0051FF88));
    }
    func_00182070(0xF, 3);
    func_00182070(0xE, 1);
    if ((*(s32 *)D_0051FFA4) != 0) {
        func_001514D0((*(s32 *)D_0051FFA4));
    }
    func_00189A10();
    func_0018D740();
    func_00182070(0, 0x1B);
    func_001821C0();
}
