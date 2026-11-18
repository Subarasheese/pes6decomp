/* compiler: ee-gcc-2.96 */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/reent/lseekr.c). */
struct _reent {
    int _errno;
};
extern int D_00602664[];
extern long func_0019B818(int fd, long offset, int whence);
long func_001B83A0(struct _reent *ptr, int fd, long offset, int whence)
{
    long ret;
    D_00602664[0] = 0;
    ret = func_0019B818(fd, offset, whence);
    if (ret == -1 && D_00602664[0] != 0) {
        ptr->_errno = D_00602664[0];
    }
    return ret;
}
