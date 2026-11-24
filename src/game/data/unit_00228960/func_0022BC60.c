/* compiler: mwcc-3.0.1b210 */
#include "pes6/competition_records.h"

u8 func_0022BC60(u8 index) {
    KnockoutCompetition *data = knockoutCompetition();
    if (Pes6SaveData_IsUnavailable() == 1)
        return 0xff;
    if (!data)
        return 0xff;
    if ((u8)index >= CUP_SLOT_COUNT)
        return 0xff;
    return data->slots[(u8)index];
}
