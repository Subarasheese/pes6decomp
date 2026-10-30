/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00CE8E20[];
extern char D_00CEA284[];
extern char D_00CEA28C[];

void func_00BF58F0(void) {
    func_001C48E8(((void *)D_00CE8E20), 0, 0x146C);
    (*(s16 *)D_00CEA284) = 0xFFFF;
    func_001C48E8(((void *)D_00CEA28C), 0, 0x146C);
    M2C_FIELD(((void *)D_00CEA28C), s16 *, 0x1464) = 0xFFFF;
}
