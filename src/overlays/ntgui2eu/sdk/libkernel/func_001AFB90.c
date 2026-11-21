/* compiler: ee-gcc-2.96 */
/* Adapted from newlib 1.9.0, libc/signal/signal.c (_raise_r).
 * licence: newlib (see THIRD_PARTY.md) */
#include "newlib/pal_reent_types.h"

extern int func_001AFDE8(struct _reent *);
extern int func_001AFD88(struct _reent *, int, int);
extern int func_001AFAA0(struct _reent *ptr);

int func_001AFB90(struct _reent *ptr, int sig) {
    _sig_func_ptr func;
    if ((sig < 0) || (sig >= 32)) {
        ptr->_errno = 22;
        return -1;
    }
    if ((ptr->_sig_func == 0) && (func_001AFAA0(ptr) != 0))
        return -1;
    func = ptr->_sig_func[sig];
    if (func == ((void (*)(int))0))
        return func_001AFD88(ptr, func_001AFDE8(ptr), sig);
    else if (func == ((void (*)(int))1))
        return 0;
    else if (func == ((void (*)(int))(-1))) {
        ptr->_errno = 22;
        return 1;
    } else {
        ptr->_sig_func[sig] = (void (*)(int))0;
        func(sig);
        return 0;
    }
}
