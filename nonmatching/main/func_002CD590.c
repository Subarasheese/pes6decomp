/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002F82B0(s32, s32, s32, s32);
extern s32 func_002371A0(s32);
void func_002CD590(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s3;
    s32 temp_s4;
    u8 *temp_v0;
    u8 *temp_v0_2;

    func_002371A0(arg1 & 0xFFFF);
    temp_s4 = arg3 * 6;
    temp_s3 = arg2 * 0xC;
    M2C_FIELD(arg0, s8 *, 0x10) = 3;
    M2C_FIELD(arg0, s32 *, 0x14) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = -1;
    M2C_FIELD(arg0, s32 *, 0x1C) = -1;
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    M2C_FIELD(arg0, s32 *, 0x28) = -1;
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    M2C_FIELD(arg0, s8 *, 0) = (s8) (arg2 + 0x78);
    temp_v0 = (u8 *) func_002F82B0(arg1 & 0xFFFF, arg3 + (arg0[0x34] * 2), arg2, arg3);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (temp_s3 + 0x11A8C + temp_s4 + (arg0[0x34] * 3));
    M2C_FIELD(arg0, s32 *, 0x28) = -1;
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s8 *, 4) = 0;
    arg0[0xB] = temp_v0[0x3D];
    arg0[0xA] = temp_v0[0x2A];
    M2C_FIELD(arg0, s8 *, 3) = (s8) (temp_s4 + (temp_s3 + (arg0[0x34] * 3)));
    M2C_FIELD(arg0, s8 *, 5) = (s8) (temp_s4 + (temp_s3 + (arg0[0x34] * 3)) + 1);
    arg0[6] = temp_v0[0x34];
    arg0[8] = temp_v0[0x32];
    temp_v0_2 = (u8 *) func_002F82B0(arg1 & 0xFFFF, arg3 + (arg0[0x35] * 2), arg0[0x34], arg3);
    M2C_FIELD(arg0, s16 *, 0x42) = *(s16 *) (temp_v0_2 + 0xA);
    arg0[2] = temp_v0_2[0x37];
}
