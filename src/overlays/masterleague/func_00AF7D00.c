/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_0095EB80(void);
extern u8 func_0094C730(void);
extern void func_00B07550(void);

void func_00AF7D00(void) {
    u8 value;

    func_0095EB80();
    value = func_0094C730();
    if (!(((value != '&') && (value != '-')) &&
          (((value == ' ' || (((value == '\x1e' || (value == '\x1d')) || (value == '\x1c')))) ||
            (value == '\x1b'))))) {
        return;
    }
    func_00B07550();
}
