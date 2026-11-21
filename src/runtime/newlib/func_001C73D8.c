/* compiler: ee-gcc-2.96 */
/* Adapted from newlib 1.9.0, libc/signal/signal.c (_init_signal_r).
 * licence: newlib (see THIRD_PARTY.md) */
#include "newlib/pal_reent_types.h"

extern void *_malloc_r(struct _reent *, size_t);

int func_001C73D8(struct _reent *ptr) {
    int i;
    if (ptr->_sig_func == 0) {
        ptr->_sig_func = (_sig_func_ptr *)_malloc_r(ptr, (sizeof(_sig_func_ptr)) * 32);
        if (ptr->_sig_func == 0)
            return -1;
        for (i = 0; i < 32; i++)
            ptr->_sig_func[i] = (void (*)(int))0;
    }
    return 0;
}
