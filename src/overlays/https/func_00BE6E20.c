/* compiler: ee-gcc-2.96-G0 */
#include "pes6/https/des_schedule.h"
s32 func_00BE6E20(DesSchedule schedule[3], const DesKey key[3]) {
    func_00BF27E8(&schedule[0], &key[0]);
    func_00BF2780(&schedule[1], &key[1]);
    func_00BF27E8(&schedule[2], &key[2]);
    return 0;
}
