/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00141D80();                            /* extern */
M2C_UNK func_00141D90();                            /* extern */
M2C_UNK func_00141E10();                            /* extern */
M2C_UNK func_00141E90(M2C_UNK);                     /* extern */
M2C_UNK func_00141EE0();                            /* extern */
M2C_UNK func_00141FE0(M2C_UNK);                     /* extern */
M2C_UNK func_00181AF0(M2C_UNK);                     /* extern */
M2C_UNK func_00181EB0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00185B60();                            /* extern */
M2C_UNK func_00185BB0();                            /* extern */
M2C_UNK func_00189900();                            /* extern */
M2C_UNK func_00189D30();                            /* extern */
M2C_UNK func_0018A380();                            /* extern */

void func_00182930(void) {
    s32 var_s0;

    func_00189D30();
    func_00189900();
    func_0018A380();
    func_00141FE0(0xD);
    func_00141EE0();
    func_00141E10();
    func_00181AF0(3);
    func_00181AF0(4);
    var_s0 = 0xE;
    do {
        func_00181EB0(var_s0, 3, 2);
        var_s0 += 1;
    } while (var_s0 < 0x12);
    func_00181AF0(5);
    func_00185BB0();
    func_00141FE0(0x3001);
    func_00141E90(0x30000);
    func_00141D80();
    func_00181AF0(7);
    func_00141D90();
    func_00185B60();
    func_00141FE0(0xD);
    func_00141EE0();
    func_00141E10();
    func_00181AF0(6);
}
