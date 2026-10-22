/* compiler: ee-gcc-2.96-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* newlib 1.9.0: abort from libc/stdlib/abort.c, glued to abs from libc/stdlib/abs.c
 * (placed at 0x005a2e68 / 0x005a2e80). Third-party code, see THIRD_PARTY.md for its license
 * and origin. */
extern int func_001C7638(int sig);	/* raise */
extern void func_00100218(int status) __attribute__ ((noreturn));	/* _exit */

void func_001C02D8(void)
{
  while (1)
    {
      func_001C7638(6);	/* SIGABRT */
      func_00100218(1);
    }
}

int func_005A2E80(int i)	/* abs */
{
  return (i < 0) ? -i : i;
}
