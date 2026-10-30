/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F3A20(void *);
extern void func_002F4CE0(void *, s8);
extern u32 func_00B77020(void);
extern s32 func_002F3A80(void *);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B76DE0();                            /* extern */

s32 func_00B74230(void) {
    u32 temp_v0;
    u8 temp_v1;
    u8 var_v0;

    temp_v0 = func_00B77020();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x3CC) == 0) {
            temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x3CD);
            switch (temp_v1) {                      /* irregular */
            case 0:
                if ((u32) (M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x3D2) + temp_v0), u8 *, 0x3D3) - 0xC) >= 2U) {
                    M2C_FIELD(temp_v0, u8 *, 0x3CD) = 1U;
                    M2C_FIELD(temp_v0, u8 *, 0x628) = (u8) M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x3D2) + temp_v0), u8 *, 0x3D3);
                    M2C_FIELD(temp_v0, u8 *, 0x3CC) = 1U;
                } else {
                    func_0026E840(0x8C008005);
                }
                break;
            case 1:
                func_0026E840(0x84028400);
                M2C_FIELD(temp_v0, u8 *, 0x3CD) = 0U;
                var_v0 = 2;
block_29:
                M2C_FIELD(temp_v0, u8 *, 0x3CC) = var_v0;
                break;
            case 2:
                func_0026E840(0x84028400);
                func_002F3A80(M2C_FIELD(temp_v0, void **, 0x62C));
                func_002F4CE0(M2C_FIELD(temp_v0, void **, 0x62C), 1);
                var_v0 = 4;
                goto block_29;
            case 3:
                func_002F3A20(M2C_FIELD(temp_v0, void **, 0x62C));
                func_0026E840(0x84028400);
                if (M2C_FIELD(temp_v0, u8 *, 0x630) != 0) {
                    var_v0 = 5;
                } else {
                    func_00B76DE0();
                    var_v0 = 8;
                }
                goto block_29;
            }
        }
    }
    return 0;
}
