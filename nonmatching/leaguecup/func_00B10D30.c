/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_00955FB0();                            /* extern */
M2C_UNK func_0096DA00(void *);                      /* extern */
M2C_UNK func_00AEB6A0();                            /* extern */
M2C_UNK func_00AEC4A0();                            /* extern */
extern void *D_003E77B0;
extern void *D_003EAD6C;
extern char D_00591C09[];

void func_00B10D30(void) {
    if (D_003EAD6C != NULL) {
        if ((D_003EAD6C != NULL) && (M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8)) {
            if ((*(u8 *)D_00591C09) == 2) {
                if (M2C_FIELD(D_003EAD6C, s32 *, 0xCC) != -1) {
                    func_001E7140(func_0021E000(M2C_FIELD(D_003EAD6C, u32 *, 0xC8)));
                }
            } else {
                M2C_FIELD(D_003EAD6C, s32 *, 0xCC) = -1;
            }
        }
        func_00AEC4A0();
        func_00AEB6A0();
        if (D_003EAD6C != NULL) {
            func_0096DA00(D_003EAD6C);
            D_003EAD6C = NULL;
        }
        func_00955FB0();
        func_001D5C40(0x10306);
    }
}
