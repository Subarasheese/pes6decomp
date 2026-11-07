/* compiler: ee-gcc-2.96 */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/reent/lseekr.c). */
struct _reent {
    int _errno;
};
extern int D_0061EF04[];
extern long func_00105A20(int fd, long offset, int whence);
long func_001C60F8(struct _reent *ptr, int fd, long offset, int whence)
{
    long ret;
    D_0061EF04[0] = 0;
    ret = func_00105A20(fd, offset, whence);
    if (ret == -1 && D_0061EF04[0] != 0) {
        ptr->_errno = D_0061EF04[0];
    }
    return ret;
}