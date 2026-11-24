/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_stat_report.h"
extern void func_00C18F20(void);
extern void func_00C189A0(void);
extern void func_00C17EB0(void);
extern s32 func_00C18EE0(void);
extern void func_00C17220(void);
extern void func_00C18430(void);
extern void func_00C13CB0(void);
extern void func_00C15050(void);
extern void func_00C163B0(void);
extern void func_00C5A000(void);
extern void func_00C20F30(void);
void func_002BD8C0(void) {
    MatchStatsState *state = &D_003E9D48;
    func_00C18F20();
    func_00C189A0();
    func_00C17EB0();
    if (func_00C18EE0()) {
        func_00C17220();
        func_00C18430();
        func_00C13CB0();
    }
    func_00C15050();
    func_00C163B0();
    func_00C5A000();
    if (state->flags & 16)
        func_00C20F30();
}
