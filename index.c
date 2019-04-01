#include <string.h>
#include <stdbool.h>
char *index(const char *s, int c)
{
	char  *t = s;
	bool found = false;
	int i, len = strlen(t);
	for (i = 0; i <= len + 1; i++) {
		if (*(t+i) == c) {
			found = true;
			break;
		}
	}
	if (found)
		return s + i;
	else
		return NULL;
}
