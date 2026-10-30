/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001AA5E0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00210DF0();                                /* extern */
s32 func_00227FC0();                                /* extern */
M2C_UNK func_0022C2B0(M2C_UNK);                     /* extern */
void *func_0022F150();                              /* extern */
s32 func_00230410();                                /* extern */
s32 func_00246550(M2C_UNK);                         /* extern */
M2C_UNK func_00939220();                            /* extern */
M2C_UNK func_00939470();                            /* extern */
M2C_UNK func_0094DBE0();                            /* extern */
M2C_UNK func_0095C380();                            /* extern */
M2C_UNK func_0095FD70();                            /* extern */
M2C_UNK func_009614A0(M2C_UNK);                     /* extern */
void *func_00994760();                              /* extern */
M2C_UNK func_009A60C0(M2C_UNK);                     /* extern */
M2C_UNK func_00AEAE50();                            /* extern */
M2C_UNK func_00AF6510();                            /* extern */
M2C_UNK func_00AF7900();                            /* extern */
M2C_UNK func_00AF9780();                            /* extern */
M2C_UNK func_00B185F0();                            /* extern */
M2C_UNK func_00B187B0();                            /* extern */
M2C_UNK func_00B1BAF0();                            /* extern */
M2C_UNK func_00B1BE60();                            /* extern */
M2C_UNK func_00B1D1D0();                            /* extern */
M2C_UNK func_00B1D610();                            /* extern */
extern void *D_003E7B0C;
extern char D_00591C09[];

void func_00960B30(void) {
    void *temp_s0;
    void *temp_v0;

    temp_s0 = func_0022F150();
    func_001AA5E0(1, 0);
    M2C_FIELD(D_003E7B0C, s8 *, 0x24) = 0;
    M2C_FIELD(D_003E7B0C, s8 *, 0x25) = 1;
    if ((temp_s0 != NULL) && ((func_00246550(0xAA) == 1) || (func_00227FC0() == 5))) {
        M2C_FIELD(temp_s0, u8 *, 0xC) = (u8) ((M2C_FIELD(temp_s0, u8 *, 0xC) & ~0x40) | 0x40);
    }
    func_0095C380();
    func_009A60C0(0);
    func_009A60C0(1);
    func_0022C2B0(0);
    if (func_00230410() == 1) {
        M2C_FIELD(D_003E7B0C, s8 *, 0x29) = 0;
        if (func_00210DF0() == 2) {
            func_00AF9780();
            func_00939470();
            func_00939220();
            func_00B1BAF0();
            func_00B1BE60();
            func_00B1D610();
            func_00B187B0();
            func_00B1D1D0();
            func_00B185F0();
            func_00AF7900();
            func_00AEAE50();
        }
        temp_v0 = func_00994760();
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 0x61AB8) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x61ABC) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x61AC0) = 0;
        }
    } else {
        if (((*(u8 *)D_00591C09) == 0xE) && (func_00210DF0() == 1)) {
            func_00AF6510();
        }
        func_0095FD70();
        func_009614A0(0);
        func_0094DBE0();
    }
}
