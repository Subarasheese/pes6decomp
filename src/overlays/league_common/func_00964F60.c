/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved[4];
    u32 phase;
} LeagueSaveHeader;
extern LeagueSaveHeader *Pes6SaveData_Current;
typedef struct {
    u8 reserved[0x61ab8];
    s32 progress[3];
} LeagueSeasonWork;
extern s32 Pes6File_AllChannelsIdle(void);
extern s32 func_00210DF0(void);
extern u8 func_00225820(void);
extern u32 Pes6Settings_Get_B04_b5_w1(void);
extern s32 func_0093D780(void);
extern void func_0094C790(s32 phase);
extern LeagueSeasonWork *func_00994760(void);
extern void func_00994840(s32 value);
extern void func_00B36420(void);
extern s32 func_00B36480(void);
extern void func_00B36510(void);
extern void func_00B36550(void);

/* Run the league transition, including its channel-idle wait, mode-2 screen callbacks, three
 * cleared season work fields, and the settings-dependent next scene. */
s32 func_00964F60(void) {
    s32 nextScene;

    LeagueSeasonWork *season;

    nextScene = -1;
    func_00225820();
    season = func_00994760();

    switch (Pes6SaveData_Current->phase) {
    case 0:
        if (func_00210DF0() == 2) {
            func_00B36550();
        }
        func_0094C790(1);
        break;
    case 1:
        if (Pes6File_AllChannelsIdle() != 0) {
            if (func_00210DF0() == 2) {
                func_00B36510();
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
            if (func_00B36480() == 1) {
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
        func_00994840(0);
        if (func_00210DF0() == 2) {
            func_00B36420();
        }
        if (season != 0) {
            season->progress[0] = 0;
            season->progress[1] = 0;
            season->progress[2] = 0;
        }
        if (!Pes6Settings_Get_B04_b5_w1()) {
            nextScene = 4;
        } else {
            nextScene = 0x29;
        }
        break;
    }
    if (nextScene != -1) {
        func_0094C790(0);
    }
    return nextScene;
}
