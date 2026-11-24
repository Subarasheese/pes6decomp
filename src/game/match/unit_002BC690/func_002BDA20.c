/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_stat_report.h"
#include "pes6/match_lineup_statistics.h"
extern void *func_001C48E8(void *, s32, u32);
extern void func_00C18F50(void);
extern void func_00C102E0(void);
extern void func_00C18A80(void);
extern void func_00C18240(void);
extern void func_00C17340(void);
extern void func_00C16890(void);
extern void func_00C18610(void);
extern void func_00C13ED0(void);
extern void func_00C150D0(void);
extern void func_00C13A20(void);
extern void func_00C12760(void);
extern void func_00C549C0(void);
extern void func_00C10BF0(void);
extern void func_00C224D0(void);
extern void func_00C32C80(void);
extern void func_00C5A7B0(void);
extern void func_00C5A0C0(void);
extern void func_00C5A170(void);
extern void func_002BC690(u32), func_00C18760(u8), func_00C17080(u8 *, u8),
    func_00C17160(s32, const LineupSample *);
extern void func_00C16E80(LineupCentre *, u8);
void func_002BDA20(u32 flags) {
    LineupSample sample;
    if (!D_003E9D4C) {
        D_003E9D4C = &D_003E9D48;
        func_001C48E8(D_003E9D4C, 0, sizeof(D_003E9D48));
        func_00C18F50();
        func_00C102E0();
        func_00C18A80();
        func_00C18240();
        func_00C17340();
        func_00C16890();
        func_00C18610();
        func_00C13ED0();
        func_00C150D0();
        func_00C13A20();
        func_00C12760();
        func_00C549C0();
        func_00C10BF0();
        func_00C224D0();
        func_00C32C80();
        func_00C5A7B0();
        func_00C5A0C0();
        func_002BC690(flags);
        func_00C18760(0);
        sample.side = 0;
        func_00C17080(sample.players, 0);
        func_00C16E80(&sample.centre, 0);
        func_00C17160(1, &sample);
        sample.side = 1;
        func_00C17080(sample.players, 1);
        func_00C16E80(&sample.centre, 1);
        func_00C17160(1, &sample);
        func_00C5A170();
    }
}
