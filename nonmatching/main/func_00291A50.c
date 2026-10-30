/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002B8F40(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_005A22F0[];
extern char D_005A2310[];
extern char D_005A2330[];

void func_00291A50(void) {
    if (((void *)D_005A2330) != NULL) {
        func_001C48E8(((void *)D_005A2330), 0, 0x154);
        M2C_FIELD(((void *)D_005A2330), s8 *, 0) = 0;
        if (((void *)D_005A2330) != NULL) {
            M2C_FIELD(((void *)D_005A2330), s8 *, 3) = 0x17;
        }
        if (((void *)D_005A2330) != NULL) {
            M2C_FIELD(((void *)D_005A2330), s8 *, 4) = 0xFF;
        }
        if (((void *)D_005A2330) != NULL) {
            M2C_FIELD(((void *)D_005A2330), s8 *, 5) = 0xFF;
        }
        if (((void *)D_005A2330) != NULL) {
            M2C_FIELD(((void *)D_005A2330), u8 *, 1) = (u8) (M2C_FIELD(((void *)D_005A2330), u8 *, 1) & 0xF8);
            M2C_FIELD(((void *)D_005A2330), u8 *, 1) = (u8) (M2C_FIELD(((void *)D_005A2330), u8 *, 1) | 3);
        }
        if (((void *)D_005A2330) != NULL) {
            M2C_FIELD(((void *)D_005A2330), u8 *, 2) = (u8) (M2C_FIELD(((void *)D_005A2330), u8 *, 2) & 0xF8);
            M2C_FIELD(((void *)D_005A2330), u8 *, 2) = (u8) (M2C_FIELD(((void *)D_005A2330), u8 *, 2) | 3);
        }
        if (((void *)D_005A2330) != NULL) {
            M2C_FIELD(((void *)D_005A2330), u8 *, 1) = (u8) (M2C_FIELD(((void *)D_005A2330), u8 *, 1) & 0xC7);
            M2C_FIELD(((void *)D_005A2330), u8 *, 1) = (u8) (M2C_FIELD(((void *)D_005A2330), u8 *, 1) | 0x18);
        }
        if (((void *)D_005A2330) != NULL) {
            M2C_FIELD(((void *)D_005A2330), u8 *, 2) = (u8) (M2C_FIELD(((void *)D_005A2330), u8 *, 2) & 0xC7);
            M2C_FIELD(((void *)D_005A2330), u8 *, 2) = (u8) (M2C_FIELD(((void *)D_005A2330), u8 *, 2) | 0x18);
        }
        if (((void *)D_005A2330) != NULL) {
            M2C_FIELD(((void *)D_005A2330), u8 *, 1) = (u8) (M2C_FIELD(((void *)D_005A2330), u8 *, 1) & 0x3F);
        }
        func_001C48E8(((void *)D_005A2310), 0, 0x1C);
        func_001C48E8(((void *)D_005A22F0), 0, 0x1C);
        func_002B8F40();
    }
}
