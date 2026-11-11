/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00997EB0(void *);
extern int func_002A87C0(void);
M2C_UNK func_002075B0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
extern char D_00591F24[];
extern char D_00CBD2A0[];

void func_00B67780(void **arg0) {
    void *temp_a0;
    void *temp_a1;

    temp_a1 = *arg0;
    temp_a0 = M2C_FIELD(temp_a1, void **, 4);
    switch (M2C_FIELD(temp_a0, u16 *, 0x30)) {
    case 0x44B:
        if (((*(u16 *)D_00CBD2A0) == 0) && ((*(u8 *)D_00591F24) == 0) && !(M2C_FIELD(temp_a0, f32 *, 0x38) < 68.0f)) {
            M2C_FIELD(temp_a1, s8 *, 0x16) = 7;
            M2C_FIELD(*arg0, u16 *, 0x18) = 0U;
        }
        if ((func_00997EB0(*arg0) != 0) && ((*(u8 *)D_00591F24) == 0)) {
            M2C_FIELD(*arg0, s8 *, 0x16) = 1;
            M2C_FIELD(*arg0, s16 *, 0x18) = 0;
        }
        break;
    case 0x456:
        if (((*(u16 *)D_00CBD2A0) == 0) && ((*(u8 *)D_00591F24) == 0) && !(M2C_FIELD(temp_a0, f32 *, 0x38) < 60.0f)) {
        func_002075B0(temp_a0, 0x1BF, 0, 8);
            M2C_FIELD(*arg0, s8 *, 0x16) = 7;
            M2C_FIELD(*arg0, u16 *, 0x18) = 0U;
        }
        if ((func_00997EB0(*arg0) != 0) && ((*(u8 *)D_00591F24) == 0)) {
            M2C_FIELD(*arg0, s8 *, 0x16) = 1;
            M2C_FIELD(*arg0, s16 *, 0x18) = 0;
        }
        break;
    case 0x46D:
    case 0x405:
        if (((*(u16 *)D_00CBD2A0) == 0) && ((*(u8 *)D_00591F24) == 0) && !(M2C_FIELD(temp_a0, f32 *, 0x38) < 50.0f)) {
        func_002075B0(temp_a0, 0x1BF, 0, 8);
            M2C_FIELD(*arg0, s8 *, 0x16) = 7;
            M2C_FIELD(*arg0, u16 *, 0x18) = 0U;
        }
        if ((func_00997EB0(*arg0) != 0) && ((*(u8 *)D_00591F24) == 0)) {
            M2C_FIELD(*arg0, s8 *, 0x16) = 1;
            M2C_FIELD(*arg0, s16 *, 0x18) = 0;
        }
        break;
    case 0x455:
        if (((*(u16 *)D_00CBD2A0) == 0) && ((*(u8 *)D_00591F24) == 0) && !(M2C_FIELD(temp_a0, f32 *, 0x38) < 60.0f)) {
        func_002075B0(temp_a0, 0x1BF, 0, 8);
            M2C_FIELD(*arg0, s8 *, 0x16) = 7;
            M2C_FIELD(*arg0, u16 *, 0x18) = 0U;
        }
        if ((func_00997EB0(*arg0) != 0) && ((*(u8 *)D_00591F24) == 0)) {
            M2C_FIELD(*arg0, s8 *, 0x16) = 1;
            M2C_FIELD(*arg0, s16 *, 0x18) = 0;
        }
        break;
    default:
        if ((*(u8 *)0x591F24 == 0) && (func_002A87C0() == 0)) {
            temp_a1 = *arg0;
            if ((M2C_FIELD(temp_a1, u16 *, 0x18) != 2) && (M2C_FIELD(temp_a1, u16 *, 0x18) != 0xE) && (M2C_FIELD(temp_a1, u16 *, 0x18) != 1)) {
                M2C_FIELD(temp_a1, u8 *, 0x16) = 0xFD;
                M2C_FIELD(*arg0, s16 *, 0x18) = 0;
            }
        }
        break;
    }
    if ((func_009E1C90(1) & 0xFF) == 0xE) {
        M2C_FIELD(*arg0, u8 *, 0x16) = 0xFD;
        M2C_FIELD(*arg0, u16 *, 0x18) = 0U;
    }
}
