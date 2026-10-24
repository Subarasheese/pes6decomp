/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00397B50[];
void func_001AA670(s32, void *);

void func_001AA620(void *data) {
    if (data == NULL) {
        data = D_00397B50;
    }
    func_001AA670(0, data);
}
