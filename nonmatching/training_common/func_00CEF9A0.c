/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5EE0(M2C_UNK, f32 *);              /* extern */
extern char D_00CF9F28[];
extern char D_00CF9F2C[];

s32 func_00CEF9A0(void) {
    f32 sp18;
    f32 sp1C;

    sp18 = (*(f32 *)D_00CF9F28);
    sp1C = (*(f32 *)D_00CF9F2C);
    func_001D5EE0(0x1259C, &sp18);
    func_001D5EE0(0x125A0, &sp18);
    func_001D5EE0(0x1259B, &sp18);
    func_001D5EE0(0x1003C, &sp18);
    return 1;
}
