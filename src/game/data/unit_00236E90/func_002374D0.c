/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[0x172], flag;
} FormationTeamRecord;
extern const FormationTeamRecord *func_00223960(u16);
u8 func_002374D0(u16 team) {
    const FormationTeamRecord *record = func_00223960(team);
    if (record)
        return record->flag;
    return 0;
}
