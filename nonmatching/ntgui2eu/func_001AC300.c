/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
extern char D_005CAC24[];
extern void *D_01208850;

void func_001AC300(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0xC) = arg0;
    M2C_FIELD(arg1, s32 *, 8) = arg0;
    M2C_FIELD(arg1, s32 *, 4) = 0;
    M2C_FIELD(arg1, s32 *, 0) = 0;
    M2C_FIELD(arg1, s32 *, 0x10) = 0;
    func_0019B160((*(s32 *)D_005CAC24));
    M2C_FIELD(arg1, void **, 0x14) = (void *) D_01208850;
    D_01208850 = arg1;
    func_0019B140((*(s32 *)D_005CAC24));
}
