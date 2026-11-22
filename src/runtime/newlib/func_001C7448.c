/* compiler: ee-gcc-2.96 */
/* Adapted from newlib 1.9.0, libc/signal/signal.c (_signal_r).
 * licence: newlib (see THIRD_PARTY.md) */
#include "newlib/pal_reent_types.h"

extern int func_001C73D8(struct _reent *ptr);

_sig_func_ptr func_001C7448(struct _reent *ptr, int sig, _sig_func_ptr func) {
    _sig_func_ptr old_func;
    if ((sig < 0) || (sig >= 32)) {
        ptr->_errno = 22;
        return (void (*)(int))(-1);
    }
    if ((ptr->_sig_func == 0) && (func_001C73D8(ptr) != 0))
        return (void (*)(int))(-1);
    old_func = ptr->_sig_func[sig];
    ptr->_sig_func[sig] = func;
    return old_func;
}
