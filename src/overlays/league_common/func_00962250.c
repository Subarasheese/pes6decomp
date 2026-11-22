/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved[4];
    u32 phase;
} LeagueSaveHeader;
extern LeagueSaveHeader *Pes6SaveData_Current;
extern s32 func_0093D780(void);
extern void func_0094C790(s32 phase);
extern void func_009710C0(void);
extern void func_009710A0(s8 value);
extern s32 func_00958000(s32 value);
extern void func_00970DE0(s32 resource);
extern s32 func_001F08B0(s32 key);
extern void func_00970E20(void);
extern s32 func_00970D60(void);
extern s32 func_00970C20(void);
extern void func_00970DB0(void);
extern s32 func_00970D10(void);
extern void func_00971050(s32 result);
extern void func_0094C750(s8 value);
extern void func_0094C710(s8 value);

/* Advance the six-phase league resource screen for asset 0x0113000C, preserving the caller argument
 * forwarded to screen cleanup and the return scene 0x38. */
s32 func_00962250(s32 result) {
    s32 nextScene;

    nextScene = -1;
    switch (Pes6SaveData_Current->phase) {
    case 0:
        if (func_0093D780() != 0) {
            func_009710C0();
            func_009710A0(0);
            func_00958000(0x7F);
            func_0094C790(1);
        }
        break;
    case 1:
        func_00970DE0(func_001F08B0(0x0113000C));
        func_00970E20();
        func_0094C790(2);
        break;
    case 2:
        if (func_00970D60() != 0) {
            func_0094C790(3);
        }
        break;
    case 3:
        if (func_00970C20() == 1) {
            func_00970DB0();
            func_0094C790(4);
        }
        break;
    case 4:
        if (func_00970D10() != 0) {
            func_0094C790(5);
        }
        break;
    case 5:
        func_00971050(result);
        func_0094C750(2);
        nextScene = 0x38;
        func_0094C710(9);
        break;
    }
    if (nextScene != -1) {
        func_0094C790(0);
    }
    return nextScene;
}
