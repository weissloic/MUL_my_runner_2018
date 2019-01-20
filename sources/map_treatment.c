/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include "my.h"

int **convert_int_map(char *test)
{
    init_map_t *init_map = malloc(sizeof(init_map_t));
    init_map->map2d = malloc(sizeof(int *) * 100);
    int x = 0;
    int i = 0;
    int k = 0;
    int j = 0;

    for (; i < 100; i++)
        init_map->map2d[i] = malloc(sizeof(int) * len_line(test));
    for (; j < 100 && test[x+1] != '\0'; j++) {
        for (; k < len_line(test) && test[x+1] != '\0'; k++) {
            if (test[x] == '\n')
                x++;
            init_map->map2d[j][k] = test[x];
            x++;
        }
    }
    return (init_map->map2d);
}

void my_map_draw(all_t *all, char *av)
{
    init_map_t *init_map = malloc(sizeof(init_map_t));
    init_map->map = open_file(av);
    init_map->second_map2d = NULL;
    int i = 0;
    int j = 0;

    init_map->second_map2d = convert_int_map(init_map->map);
    for (; j < 100; j++) {
        for (; i < len_line(init_map->map); i++) {
            map_generate(init_map->second_map2d, i, j, all);
        }
    }
}