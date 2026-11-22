/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void Pes6Task_Remove(void (*)(void));
void func_00153C50(void);
void func_00153710(void);

void func_002FA9B0(void) {
    Pes6Task_Remove(func_00153710);
    func_00153C50();
}
