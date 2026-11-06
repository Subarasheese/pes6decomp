/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_0030EDB0(s32 *, s32, s32);               /* extern */
M2C_UNK Pes6BitSet_Write(s32, M2C_UNK, s32);           /* extern */
s32 func_003527C0(s32, s32);                        /* extern */

typedef struct { u8 p[5]; u8 a5; u8 p6; u8 a7; u8 p8[4]; s32 c; s32 f; s32 g; } T;

s32 func_003524C0(s32 arg0, T *arg1) {
    s32 sp6C;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s1_2;
    s32 temp_s1;

    func_0030EDB0(&sp6C, arg1->a5, arg1->a7);
    temp_s0 = arg1->g;
    if (arg1->f & 0x20) {
        return 0;
    }
    Pes6BitSet_Write(arg0, 0x70, func_003527C0(arg1->c, temp_s0));
    Pes6BitSet_Write(arg0, 0x72, sp6C == 1);
    Pes6BitSet_Write(arg0, 0x73, sp6C == 0);
    Pes6BitSet_Write(arg0, 0x76, temp_s0 & 1);
    Pes6BitSet_Write(arg0, 0x77, temp_s0 & 2);
    Pes6BitSet_Write(arg0, 0x79, arg1->c == 1);
    Pes6BitSet_Write(arg0, 0x7A, temp_s0 & 4);
    Pes6BitSet_Write(arg0, 0x7B, temp_s0 & 8);
    Pes6BitSet_Write(arg0, 0x7C, temp_s0 & 0x10);
    Pes6BitSet_Write(arg0, 0x7D, temp_s0 & 0x20);
    Pes6BitSet_Write(arg0, 0x7E, arg1->c == 2);
    temp_s1 = temp_s0 & 0x40;
    Pes6BitSet_Write(arg0, 0x7F, temp_s1);
    Pes6BitSet_Write(arg0, 0x80, temp_s0 & 0x80);
    Pes6BitSet_Write(arg0, 0x81, sp6C == 1);
    Pes6BitSet_Write(arg0, 0x82, sp6C == 0);
    Pes6BitSet_Write(arg0, 0x83, temp_s0 & 0x4000);
    temp_s2 = temp_s0 & 0x100;
    Pes6BitSet_Write(arg0, 0x84, temp_s2);
    Pes6BitSet_Write(arg0, 0x85, arg1->c == 3);
    Pes6BitSet_Write(arg0, 0x86, temp_s1);
    temp_s1_2 = temp_s0 & 0x200;
    Pes6BitSet_Write(arg0, 0x87, temp_s1_2);
    Pes6BitSet_Write(arg0, 0x88, temp_s2);
    Pes6BitSet_Write(arg0, 0x8A, temp_s0 & 0x400);
    Pes6BitSet_Write(arg0, 0x8B, temp_s0 & 0x800);
    Pes6BitSet_Write(arg0, 0x8C, arg1->c == 4);
    Pes6BitSet_Write(arg0, 0x8D, temp_s0 & 0x1000);
    Pes6BitSet_Write(arg0, 0x8E, temp_s0 & 0x2000);
    Pes6BitSet_Write(arg0, 0x8F, temp_s1_2);
    Pes6BitSet_Write(arg0, 0x90, temp_s0 & 0x80000);
    Pes6BitSet_Write(arg0, 0x91, arg1->c == 5);
    Pes6BitSet_Write(arg0, 0x92, temp_s0 & 0x20000);
    Pes6BitSet_Write(arg0, 0x93, temp_s0 & 0x10000);
    Pes6BitSet_Write(arg0, 0x94, temp_s0 & 0x8000);
    Pes6BitSet_Write(arg0, 0x95, temp_s0 & 0x40000);
    return 1;
}
