/* compiler: mwcc-3.0.1b210 */

#include "pes6/match_period_message.h"
typedef struct {
    u8 reserved00[0x2c];
    s32 arguments[];
} JobArguments;

s32 Pes6Job_GetArg(void *job, s32 index) {
    JobArguments *record = job;
    if (record == 0)
        return 0;
    return record->arguments[index];
}
