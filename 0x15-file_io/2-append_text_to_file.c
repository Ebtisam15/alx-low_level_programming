#include "main.h"
	
	/**
	 * append_text_to_file -will append the text in the end of the file
	 * @filename: is the file where we will append the text in to
	 * @text_content: is the content that we will append in to the file
	 *
	 * Return: 1 on success and -1 on failure
	 */
	int append_text_to_file(const char *filename, char *text_content)
	{
		int fd, a, b = 0;
	
		if (!filename)
			return (-1);
	
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd < 0)
			return (-1);
	
		if (text_content)
		{
			while (text_content[b])
				b++;
			a = write(fd, text_content, b);
			if (a != b)
				return (-1);
		}
	
		close(fd);
	
		return (1);
	}
