/* compiler: mwcc-3.0.1b210-sdata4 */
#include "pes6/match_pad_setup.h"

typedef struct {
    s32 type, index, message;
} PadHint;
typedef struct {
    PadHint **rows;
    s32 count;
} PadHintList;

extern PadHintList D_0053CB80;
extern void func_001B9DD0(u8);
extern void func_001B9E30(const void *list);

void func_0024BA00(s32 pad) {
    PadHint hint09 = {2, 0, 0xC90009};
    PadHint hint0D = {2, 0, 0xC9000D};
    PadHint hint0B = {2, 0, 0xC9000B};
    PadHint hint0C = {2, 0, 0xC9000C};
    PadHint hint10 = {2, 0, 0xC90010};
    PadHint *standardHints[4] = {&hint09, &hint0D, &hint0B, &hint0C};
    PadHint *alternateHints[2] = {&hint10, &hint0B};
    if (Pes6SaveData_GetUnavailableFlag() == 1) {
        D_0053CB80.rows = alternateHints;
        D_0053CB80.count = 2;
    } else {
        D_0053CB80.rows = standardHints;
        D_0053CB80.count = 4;
    }
    func_002685F0((u16)pad);
    func_001B9DD0((u8)pad);
    func_001B9E30(&D_0053CB80);
}
