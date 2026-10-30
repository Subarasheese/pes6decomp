/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF0980(void);
extern void func_001D4E00(void *);
extern void func_001D7F10(void *);
extern void func_001B9C60(void *);
M2C_UNK func_001F4B20(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00955FB0();                            /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00971E30(s32);                         /* extern */
M2C_UNK func_00972290(s32);                         /* extern */

void func_00AEF280(void) {
    u32 temp_v0;

    temp_v0 = func_00AF0980();
    if (temp_v0 != 0) {
        func_00971E30(M2C_FIELD(temp_v0, s32 *, 0x178));
        func_001D7F10(M2C_FIELD(temp_v0, void **, 0xA0));
        func_001D7F10(M2C_FIELD(temp_v0, void **, 0xA4));
        func_001B9C60(M2C_FIELD(temp_v0, void **, 0x17C));
        func_00972290(M2C_FIELD(temp_v0, s32 *, 0x180));
        func_00955FB0();
        func_00958000(0x80);
        func_001F4B20(-1, 0xEE81BE, 0xEE81BE, 0);
        func_001F4B20(-1, 0xEE82B6, 0xEE82B6, 0);
        func_001D4E00(M2C_FIELD(temp_v0, void **, 0));
    }
}
