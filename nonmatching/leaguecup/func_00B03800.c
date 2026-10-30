/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001E7140(M2C_UNK);                     /* extern */
s32 func_00226240();                                /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00AFD1E0();                            /* extern */
M2C_UNK func_00AFFAA0();                            /* extern */
extern s32 D_003EAD54;

void func_00B03800(void) {
    if (D_003EAD54 != 0) {
        func_00AFFAA0();
        func_00AFD1E0();
        if (D_003EAD54 != 0) {
            func_0096DA00(D_003EAD54);
            D_003EAD54 = 0;
        }
        func_001D5C40(0x102AF);
        func_001D5C40(0x10302);
        func_001D5C40(0x10303);
        func_001D5C40(0x102B3);
        func_001D5C40(0x1030D);
        func_001D5C40(0x10311);
        if ((func_00226240() & 0xFF) == 4) {
            func_001E7140(0x30118);
        }
    }
}
