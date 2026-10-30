/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0094C7B0();                                /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
void *func_009A0430();                              /* extern */
s32 func_009A1EE0(u8);                              /* extern */
M2C_UNK func_009A2320(M2C_UNK);                     /* extern */

s32 func_0099F110(void) {
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = func_009A0430();
    if (temp_v0 != NULL) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0);
        switch (temp_v1) {                          /* irregular */
        case 2:
        case 1:
            break;
        case 0:
            if (func_009A1EE0(M2C_FIELD(temp_v0, u8 *, 0x418)) != 1) {
                func_0026E840(0x8C008005);
            } else {
                M2C_FIELD(temp_v0, s32 *, 0) = 1;
                func_009A2320(1);
                func_0026E840(0x84028400);
                if (func_0094C7B0() == 0x37) {
                    func_00958000(0x72);
                } else if (func_0094C7B0() == 0x39) {
                    func_00958000(0x7B);
                } else if (func_0094C7B0() == 0x36) {
                    func_00958000(0x6A);
                } else if (func_0094C7B0() == 0x3A) {
                    func_00958000(0x98);
                }
            }
            break;
        }
    }
    return 0;
}
