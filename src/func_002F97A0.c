/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00153FA0(void *);

void func_002F97A0(void **obj) {
    if (obj == NULL) {
        return;
    }
    func_00153FA0(obj[0]);
    func_00153FA0(obj);
}
