#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_atoi(char* str) {
	int i = 0;
	int num = 0;
	while (str[i] && str[i] <= '9' && str[i] >= '0') {
		num = num * 10 + str[i] - '0';
		i++;
	}
	return num;
}

int	getNodeSize(char* str) {
	int count = 0;
	for (int i = 0; str[i]; i++) {
		if (str[i] == '-') count++;
	}
	return count * 2;
}

int	*createArr(char* str, int size) {
	int	*arr = malloc(size * sizeof(int));
	int i = 0;
	while (i < size) {
		while (*str && (*str > '9' || *str < '0')) 
			str++;
		arr[i] = ft_atoi(str);
		while (*str && *str <= '9' && *str >= '0')
			str++;
		i++;
	}
	return arr;
}

int main(int argc, char** argv) {
	if (argc != 2) return 1;
	int int_size = getNodeSize(argv[1]);
	int *int_arr = createArr(argv[1], int_size);
	free(int_arr);
	return 0;
}

// cc -Wall -Wextra -Werror main.c
//./a.out "17-5 5-8 8-2 2-8 2-8 17-21 21-2 5-2 2-6 6-14 6-12 12-19 19-14 14-42"