/* compiler: mwcc-3.0.1b210 */
#include "pes6/slot_table.h"
void func_00181F60(int destination, int source) {
    struct Pes6Slot *slots = D_0051FF38[0];
    slots[destination].flag = slots[source].flag;
}
