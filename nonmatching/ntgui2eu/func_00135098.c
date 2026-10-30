/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00155448();                            /* extern */
M2C_UNK func_001555D8(s32 *, s32 *, s32 *);         /* extern */
M2C_UNK func_00155920();                            /* extern */
M2C_UNK func_00155A60();                            /* extern */
M2C_UNK func_001566B0();                            /* extern */
M2C_UNK func_00156B20();                            /* extern */
M2C_UNK func_00156EE0();                            /* extern */
M2C_UNK func_001570C0();                            /* extern */
M2C_UNK func_001575E0();                            /* extern */
M2C_UNK func_00157890();                            /* extern */
M2C_UNK func_00157AC8();                            /* extern */
extern char D_005BEDA8[];
extern char D_005BEDAC[];
extern char D_005BEDB0[];
extern char D_005BEDEC[];

void func_00135098(void) {
    (*(s32 *)D_005BEDEC) = -1;
    (*(s32 *)D_005BEDA8) = 0;
    (*(s32 *)D_005BEDAC) = 0;
    (*(s32 *)D_005BEDB0) = 0;
    func_001555D8(((void *)D_005BEDAC), ((void *)D_005BEDB0), ((void *)D_005BEDEC));
    func_00155A60();
    func_001566B0();
    func_001570C0();
    func_00157890();
    func_00155448();
    func_00155920();
    func_00156B20();
    func_00156EE0();
    func_00157AC8();
    func_001575E0();
}
