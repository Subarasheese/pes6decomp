/* compiler: ee-gcc-2.96-nsa-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* newlib 1.9.0 libc/reent/readr.c or writer.c (_read_r / _write_r, `long ret` = 64-bit long in this
   build); the file has no notice of its own (COPYING.NEWLIB section 9, THIRD_PARTY.md). */
struct _reent {
    int _errno;
};

extern int D_00602664; /* errno */
extern int func_0019B6E8(int fd, void *buf, unsigned int cnt);

long func_001B6DF0(struct _reent *ptr, int fd, void *buf, unsigned int cnt) {
    long ret;

    D_00602664 = 0;
    if ((ret = func_0019B6E8(fd, buf, cnt)) == -1 && D_00602664 != 0)
        ptr->_errno = D_00602664;
    return ret;
}
