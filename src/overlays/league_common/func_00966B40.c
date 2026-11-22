/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved[4];
    u32 phase;
} LeagueSaveHeader;
extern LeagueSaveHeader *Pes6SaveData_Current;
extern s32 Pes6File_AllChannelsIdle(void);
extern void func_0094C790(s32 phase);
extern void func_0093D850(void);
extern void func_00B03C40(void);
extern s32 func_0026DA40(s32 channel);
extern void func_00B03C10(void);
extern s32 func_001BE4D0(s32 channel);
extern void func_0093D720(void);
extern s32 func_00B03BC0(void);
extern s32 func_0093D730(void);
extern void func_0093D7A0(void);
extern s32 func_002D3450(void);
extern void func_00B03B60(void);
extern void func_00949590(void);
extern s32 func_00226710(void);

/* Advance the league screen through both file-channel gates and two screen callbacks. The save
 * header selects scene 0x11 or 0x0F. */
s32 func_00966B40(void) {
    s32 nextScene;

    nextScene = -1;
    switch (Pes6SaveData_Current->phase) {
    case 0:
        func_0093D850();
        func_00B03C40();
        func_0094C790(1);
        break;
    case 1:
        if ((Pes6File_AllChannelsIdle() != 0) && (func_0026DA40(1) != 1) &&
            (func_0026DA40(3) != 1)) {
            func_00B03C10();
            func_0094C790(2);
        }
        break;
    case 2:
        if (func_001BE4D0(0) != 0) {
            func_0093D720();
            func_0094C790(3);
        }
        break;
    case 3:
        if (func_00B03BC0() == 1) {
            func_0094C790(4);
        }
        break;
    case 4:
        if (func_0093D730() == 1) {
            func_0094C790(5);
            func_0093D7A0();
        }
        break;
    case 5:
        if (func_002D3450() != 0) {
            func_00B03B60();
            func_00949590();
            if ((func_00226710() & 0xff) == 0x29) {
                nextScene = 0x11;
            } else {
                nextScene = 0xF;
            }
        }
        break;
    }
    if (nextScene != -1) {
        func_0094C790(0);
    }
    return nextScene;
}
