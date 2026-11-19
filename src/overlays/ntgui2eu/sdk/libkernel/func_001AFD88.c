/* compiler: ee-gcc-2.96 */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/reent/fstatr.c). */
struct _reent {
    int _errno;
};
struct stat;
extern int D_00602664[];
extern int func_0019B8F8(int fd, struct stat *st);
int func_001AFD88(struct _reent *ptr, int fd, struct stat *st)
{
    int ret;
    D_00602664[0] = 0;
    ret = func_0019B8F8(fd, st);
    if (ret == -1 && D_00602664[0] != 0) {
        ptr->_errno = D_00602664[0];
    }
    return ret;
}
