/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00181AF0(s32);
extern void func_00141D80(void);
extern void func_00181AA0(s32);
extern void func_00141D90(void);
M2C_UNK func_00141E10();                            /* extern */
M2C_UNK func_00141E90(M2C_UNK);                     /* extern */
M2C_UNK func_00141EE0();                            /* extern */
M2C_UNK func_00141F50(M2C_UNK);                     /* extern */
M2C_UNK func_00141FA0();                            /* extern */
M2C_UNK func_00141FE0(M2C_UNK);                     /* extern */
M2C_UNK func_00185D20();                            /* extern */
M2C_UNK func_00189590();                            /* extern */
M2C_UNK func_00189A50();                            /* extern */
extern char D_0051FF46[];

void func_00182A10(void) {
    func_00189590();
    func_00189A50();
    func_00141FE0(0x1001);
    func_00141F50(0);
    func_00141E90(0x30000);
    if ((*(u8 *)D_0051FF46) == 0) {
        func_00141D80();
    }
    func_00181AA0(0);
    func_00141D90();
    func_00181AF0(1);
    func_00141FE0(0xD);
    func_00181AF0(2);
    func_00141FA0();
    func_00141EE0();
    func_00141E10();
    func_00185D20();
}
