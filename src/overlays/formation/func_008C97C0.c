/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_008D2950(void *);
extern void func_008D2AC0(void *);

void func_008C97C0(s8 *arg0) {
    func_008D2AC0(arg0 + 0x35C);
    *arg0 = 0;
    func_008D2950(arg0 + 0x35C);
}
