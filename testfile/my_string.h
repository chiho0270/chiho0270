
char* my_strcat(char* _St1, const char* _St2) {
	int i = 0, j = 0;
	while (*(_St1 + i) != '\0')
	{
		i++;
	}
	while (*(_St2 + j) != '\0')
	{
		*(_St1 + i) = *(_St2 + j);
		i++;
		j++;
	}

	return _St1;

}
