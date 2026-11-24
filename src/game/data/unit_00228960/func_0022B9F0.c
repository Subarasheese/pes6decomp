/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_records.h"

void func_0022B9F0(u8 index, u8 count) {
    KnockoutRound *roundRecord = knockoutRound(index);
    if (Pes6SaveData_IsUnavailable() == 1)
        return;
    if (!roundRecord)
        return;
    roundRecord->sizeCode = count;
}
