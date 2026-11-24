/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_job_message.h"
extern s32 func_00345490(s32 *kind);
extern s32 func_00B94F50(void);
extern void func_00333320(s32 value);
extern u8 D_003E9F90;
void func_00354E30(s32 mode) {
    s32 kind;
    struct Pes6BitSet flags;
    u32 storage[16];
    struct Pes6BitSet *bits;

    s32 state;
    s32 common, inactive;
    func_00345490(&kind);
    state = func_00B94F50();
    bits = &flags;
    Pes6BitSet_Initialize(bits, 13, storage);
    if (mode)
        func_00333320(1);
    common = mode | state;
    Pes6BitSet_Write(bits, 0x0, common);
    Pes6BitSet_Write(bits, 0x1, common);
    inactive = !mode;
    Pes6BitSet_Write(bits, 0x2, inactive & (kind == 1));
    Pes6BitSet_Write(bits, 0x3, inactive & (kind == 3));
    Pes6BitSet_Write(bits, 0x4, inactive & (kind == 4));
    Pes6BitSet_Write(bits, 0x5, inactive & (kind == 2));
    Pes6BitSet_Write(bits, 0x6, mode);
    Pes6BitSet_Write(bits, 0x7, inactive);
    Pes6BitSet_Write(bits, 0x8, inactive & (kind == 1));
    Pes6BitSet_Write(bits, 0x9, inactive & (kind >= 2));
    Pes6BitSet_Write(bits, 0xa, mode & 1);
    if (Pes6BitSet_Write(bits, 10, mode & 1)) {
        Pes6BitSet_Write(bits, 11, !(mode & 2));
        Pes6BitSet_Write(bits, 12, mode & 2);
        if (kind >= 3)
            D_003E9F90 = 1;
    }
    Pes6Job_SendMessage(0x78, bits, 1);
}
