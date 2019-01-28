#if defined(__x86_64__)

__attribute__((naked)) void SYSCALL_HANDLER(void)
{
	__asm__ __volatile__ ("syscall; ret; ud2; ud2; ud2; ud2" ::: "memory");
}

#endif
