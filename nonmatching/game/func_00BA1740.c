/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_001CDAD0(s32 *);                       /* extern */
extern s32 *D_00CBCEC4;
extern char D_00CBD000[];
extern char D_00CBD004[];
extern char D_00CBD008[];

void func_00BA1740(void *arg0) {
    s32 *temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 **, 0x44);
    if (*temp_a0 != 3) {
        func_00153FA0(temp_a0);
        return;
    }
    func_001CDAD0(temp_a0);
    (*(s32 *)D_00CBD000) = *M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x44), s32 **, 4);
    (*(s32 *)D_00CBD004) = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x44), s32 **, 4), s32 *, 4);
    (*(s32 *)D_00CBD008) = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x44), s32 **, 4), s32 *, 8);
    D_00CBCEC4 = M2C_FIELD(arg0, s32 **, 0x44);
}
