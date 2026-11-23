/* Reentrant signal handling from newlib 1.9.0, libc/signal/signal.c, by G. Haley. */

#ifndef PES6_NEWLIB_SIGNALS_H
#define PES6_NEWLIB_SIGNALS_H

#include "newlib/pal_reent_types.h"
#define NSIG 32
#define EINVAL 22
#define SIG_DFL ((_sig_func_ptr)0)
#define SIG_IGN ((_sig_func_ptr)1)
#define SIG_ERR ((_sig_func_ptr) - 1)
extern void *_malloc_r(struct _reent *, size_t);
extern int _getpid_r(struct _reent *);
extern int _kill_r(struct _reent *, int, int);

int _init_signal_r(struct _reent *ptr)
{
    int i;

    if (ptr->_sig_func == 0) {
        ptr->_sig_func = (_sig_func_ptr *)_malloc_r(ptr, sizeof(_sig_func_ptr) * NSIG);
        if (ptr->_sig_func == 0)
            return -1;

        for (i = 0; i < NSIG; i++)
            ptr->_sig_func[i] = SIG_DFL;
    }

    return 0;
}

_sig_func_ptr _signal_r(struct _reent *ptr, int sig, _sig_func_ptr func)
{
    _sig_func_ptr old_func;

    if (sig < 0 || sig >= NSIG) {
        ptr->_errno = EINVAL;
        return SIG_ERR;
    }

    if (ptr->_sig_func == 0 && _init_signal_r(ptr) != 0)
        return SIG_ERR;

    old_func = ptr->_sig_func[sig];
    ptr->_sig_func[sig] = func;

    return old_func;
}

int _raise_r(struct _reent *ptr, int sig)
{
    _sig_func_ptr func;

    if (sig < 0 || sig >= NSIG) {
        ptr->_errno = EINVAL;
        return -1;
    }

    if (ptr->_sig_func == 0 && _init_signal_r(ptr) != 0)
        return -1;

    func = ptr->_sig_func[sig];
    if (func == SIG_DFL)
        return _kill_r(ptr, _getpid_r(ptr), sig);
    else if (func == SIG_IGN)
        return 0;
    else if (func == SIG_ERR) {
        ptr->_errno = EINVAL;
        return 1;
    } else {
        ptr->_sig_func[sig] = SIG_DFL;
        func(sig);
        return 0;
    }
}

int __sigtramp_r(struct _reent *ptr, int sig)
{
    _sig_func_ptr func;

    if (sig < 0 || sig >= NSIG) {
        return -1;
    }

    if (ptr->_sig_func == 0 && _init_signal_r(ptr) != 0)
        return -1;

    func = ptr->_sig_func[sig];
    if (func == SIG_DFL)
        return 1;
    else if (func == SIG_ERR)
        return 2;
    else if (func == SIG_IGN)
        return 3;
    else {
        ptr->_sig_func[sig] = SIG_DFL;
        func(sig);
        return 0;
    }
}

#endif
