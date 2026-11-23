/* compiler: ee-gcc-2.96-G0 */
#include "pes6/https/des_schedule.h"
void func_00BF2780(DesSchedule *schedule, const DesKey *key) {
    u32 *front, *back;
    u32 temp;
    func_00BF27E8(schedule, key);
    front = &schedule->words[0];
    back = &schedule->words[30];
    while (front < back) {
        temp = front[0];
        front[0] = back[0];
        back[0] = temp;
        temp = front[1];
        front[1] = back[1];
        back[1] = temp;
        front += 2;
        back -= 2;
    }
}
