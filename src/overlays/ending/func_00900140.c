/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00153FA0(s32);
extern int func_0023A3D0(void);
extern void func_001B9630(s32, s32);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_002D5510(u8, s32);                         /* extern */
M2C_UNK func_008FFF90();                            /* extern */
M2C_UNK func_00900230();                            /* extern */
M2C_UNK func_00900390();                            /* extern */
M2C_UNK func_009003C0();                            /* extern */
M2C_UNK func_009004A0();                            /* extern */
extern s32 *D_003EA6A8;
extern char D_00591C09[];
extern char D_00908D80[];

void func_00900140(void) {
    s32 temp_s0_2;
    s32 temp_s1;
    u8 temp_s0;

    temp_s0 = (*(u8 *)D_00591C09);
    temp_s1 = func_0023A3D0() & 0xFF;
    temp_s0_2 = func_002D5510(temp_s0, temp_s1);
    if ((D_003EA6A8 != NULL) && (D_003EA6A8 != NULL)) {
        func_009004A0();
        func_001B9630(D_003EA6A8[2], D_003EA6A8[3]);
        func_00153FA0(D_003EA6A8[2]);
        func_00153FA0(D_003EA6A8[4]);
        D_003EA6A8[2] = 0;
        D_003EA6A8[4] = 0;
        D_003EA6A8 = NULL;
        func_00900390();
    }
    if (D_003EA6A8 == NULL) {
        D_003EA6A8 = ((void *)D_00908D80);
        func_001C48E8(((void *)D_00908D80), 0, 0x1C);
        D_003EA6A8[1] = temp_s0_2;
        D_003EA6A8[6] = temp_s1;
        func_00900230();
        func_008FFF90();
        func_009003C0();
    }
}
