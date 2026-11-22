/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 kind, reserved01, action;
} JobCommand;
typedef struct {
    u8 reserved00[0x3c];
    volatile JobCommand *command;
} MatchJob;
extern s32 Pes6MatchPlayer_HasRole(u8 kind, u8 action);
extern s32 func_00341910(s32, s32, s32);
extern void Pes6Job_SetField4(MatchJob *job, void (*entry)(void), const char *name);
extern s32 Pes6Job_SetArg(MatchJob *job, s32 index, s32 value);
extern const char D_003E1510[];
extern void func_00319D50(void), func_0031B230(void);
s32 func_0031B0E0(MatchJob *job) {
    volatile JobCommand *command = job->command;
    if (Pes6MatchPlayer_HasRole(command->kind, command->action) != 0)
        return 0;
    command->action = 0xab;
    if (func_00341910(1, 5, 10) != 0) {
        Pes6Job_SetField4(job, func_0031B230, D_003E1510);
    } else {
        Pes6Job_SetField4(job, func_00319D50, D_003E1510);
        Pes6Job_SetArg(job, 0, 0xff);
        Pes6Job_SetArg(job, 1, 0xff);
    }
    return 1;
}
