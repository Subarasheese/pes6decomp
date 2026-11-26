/* compiler: mwcc-3.0.1b210 */
#include "pes6/league_menu_save.h"

extern s32 Pes6File_AllChannelsIdle(void);
extern s32 func_00210DF0(void);
extern s32 func_0093D780(void);
extern s32 func_0095EA70(s32);
extern void func_0095ECF0(void);
extern void func_00B6A140(void);
extern s32 func_00B6A1A0(void);
extern void func_00B6A1D0(void);
extern void func_00B6A200(void);

extern u8 *func_00229DF0(void);
extern s32 func_0099B570(s32 side);

s32 func_009626F0(void) {
    s32 nextScene;
    u32 phase;
    u8 *entry;

    nextScene = -1;
    entry = func_00229DF0();
    phase = Pes6SaveData_Current->phase;
    switch (phase) {
    case 0:
        if (entry && (u8)func_0099B570(0) <= entry[3]) {
            if (func_00210DF0() == 2) {
                func_00B6A200();
            }
            func_0094C790(1);
        } else
            nextScene = 9;
        break;
    case 1:
        if (Pes6File_AllChannelsIdle() != 0) {
            if (func_00210DF0() == 2) {
                func_0095EA70(0x1A0075);
                func_00B6A1D0();
            }
            func_0094C790(2);
        }
        break;
    case 2:
        if (func_0093D780() != 0) {
            func_0094C790(3);
        }
        break;
    case 3:
        if (func_00210DF0() == 2) {
            if (func_00B6A1A0() == 1) {
                func_0094C790(4);
            }
        } else {
            func_0094C790(4);
        }
        break;
    case 4:
        func_0094C790(5);
        break;
    case 5:
        if (func_00210DF0() == 2) {
            func_00B6A140();
            func_0095ECF0();
        }
        nextScene = 9;
        break;
    }
    if (nextScene != -1) {
        func_0094C790(0);
    }
    return nextScene;
}
