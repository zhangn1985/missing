#include <sys/syscall.h>
#include <stdint.h>
int fanotify_init (unsigned int __flags, unsigned int __event_f_flags)
{
	return syscall(SYS_fanotify_init, __flags, __event_f_flags);
}

int fanotify_mark (int __fanotify_fd, unsigned int __flags,
			  uint64_t __mask, int __dfd, const char *__pathname)
{
	return syscall(SYS_fanotify_mark, __fanotify_fd, __flags,
			  __mask, __dfd, __pathname);
}
