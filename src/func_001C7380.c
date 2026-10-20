/* compiler: ee-gcc-2.96-nsa-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* newlib 1.9.0 libc/reent (closer.c / unlinkr.c pattern): a one-argument _xxx_r reentrant
   syscall wrapper; the file has no notice of its own (COPYING.NEWLIB section 9, THIRD_PARTY.md). */
struct _reent {
    int _errno;
};

extern int D_0061EF04; /* errno */
extern int func_00105A60(int fd);

int func_001C7380(struct _reent *ptr, int fd) {
    int ret;

    D_0061EF04 = 0;
    if ((ret = func_00105A60(fd)) == -1 && D_0061EF04 != 0)
        ptr->_errno = D_0061EF04;
    return ret;
}
