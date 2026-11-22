/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 func_0094C730(void);
extern void func_00B07500(void);

void func_00AF7C70(void) {
    u8 value;

    value = func_0094C730();
    if (!(((value != '&') && (value != '-')) &&
          (((value == ' ' || (((value == '\x1e' || (value == '\x1d')) || (value == '\x1c')))) ||
            (value == '\x1b'))))) {
        return;
    }
    func_00B07500();
}
