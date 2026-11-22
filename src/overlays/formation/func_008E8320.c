/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_008E9150(void *);
extern void func_008E91B0(void *);

void func_008E8320(s8 *arg0) {
    func_008E91B0(arg0 + 4);
    *arg0 = 0;
    func_008E9150(arg0 + 4);
}
