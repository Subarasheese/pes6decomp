/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00591BE4[];
extern char D_00CBCB10[];
extern char D_00CBCB18[];

void func_00B37260(void) {
    func_001C48E8(((void *)D_00CBCB10), 0, 0x14);
    (*(s32 *)D_00CBCB18) = (*(u8 *)D_00591BE4) * 0xF;
    if (func_002DCA30() != 0) {
        (*(s32 *)D_00CBCB18) = (*(u8 *)D_00591BE4) * 0xC;
    }
}
