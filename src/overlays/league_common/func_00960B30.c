/* compiler: mwcc-3.0.1b198 */
#include "pes6/league_result_rows.h"

typedef struct {
    u8 reserved00[12];
    u8 : 6;
    u8 optionEnabled : 1;
} LeagueSaveHeaderFlags;
typedef struct {
    u8 reserved00[0x61ab8];
    s32 progress[3];
} LeagueSeasonWork;

extern void *Pes6SaveData_GetHeaderBlock(void);
extern u8 D_00591C09[];
extern void func_001AA5E0(s32, s32);
extern s32 func_00210DF0(void);
extern s32 func_00227FC0(void);
extern void func_0022C2B0(s32);
extern s32 func_00230410(void);
extern s32 func_00246550(s32);
extern void func_00939220(void);
extern void func_00939470(void);
extern void func_0094DBE0(void);
extern void func_0095C380(void);
extern void func_0095FD70(void);
extern void func_009614A0(s32);
extern LeagueSeasonWork *func_00994760(void);
extern void func_009A60C0(s32);
extern void func_00AEAE50(void);
extern void func_00AF6510(void);
extern void func_00AF7900(void);
extern void func_00AF9780(void);
extern void func_00B185F0(void);
extern void func_00B187B0(void);
extern void func_00B1BAF0(void);
extern void func_00B1BE60(void);
extern void func_00B1D1D0(void);
extern void func_00B1D610(void);

void func_00960B30(void) {
    LeagueSaveHeaderFlags *save = Pes6SaveData_GetHeaderBlock();
    LeagueSeasonWork *season;
    func_001AA5E0(1, 0);
    D_003E7B0C->field24 = 0;
    D_003E7B0C->field25 = 1;
    if (save && (func_00246550(0xAA) == 1 || func_00227FC0() == 5)) {
        save->optionEnabled = 1;
    }
    func_0095C380();
    func_009A60C0(0);
    func_009A60C0(1);
    func_0022C2B0(0);
    if (func_00230410() == 1) {
        D_003E7B0C->division = 0;
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
        season = func_00994760();
        if (season) {
            season->progress[0] = 0;
            season->progress[1] = 0;
            season->progress[2] = 0;
        }
    } else {
        if (D_00591C09[0] == 14 && func_00210DF0() == 1)
            func_00AF6510();
        func_0095FD70();
        func_009614A0(0);
        func_0094DBE0();
    }
}
