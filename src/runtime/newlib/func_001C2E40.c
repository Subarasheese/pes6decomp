/* compiler: ee-gcc-2.96 */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/reent/fstatr.c). */
struct _reent {
    int _errno;
};
struct stat;
extern int D_0061EF04[];
extern int func_00105B18(int fd, struct stat *st);
int func_001C2E40(struct _reent *ptr, int fd, struct stat *st)
{
    int ret;
    D_0061EF04[0] = 0;
    ret = func_00105B18(fd, st);
    if (ret == -1 && D_0061EF04[0] != 0) {
        ptr->_errno = D_0061EF04[0];
    }
    return ret;
}