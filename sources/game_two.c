/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** [file description here]
*/

#include "my.h"

void move_rect_player(all_t *all, int i)
{
    if (all->object[i].rect.left < all->object[i].size_max)
        all->object[i].rect.left += all->object[i].offset;
    if (all->object[i].rect.left >= all->object[i].size_max)
        all->object[i].rect.left = 0;

    sfSprite_setTextureRect(all->object[i].sprite, all->object[i].rect);
}

void move_rect_player_two(all_t *all, int i)
{
    if (all->object[i].rect.left > all->object[i].size_max)
        all->object[i].rect.left -= all->object[i].offset;
    if (all->object[i].rect.left <= all->object[i].size_max)
        all->object[i].rect.left = 1800;

    sfSprite_setTextureRect(all->object[i].sprite, all->object[i].rect);
}

void move_rect_two(all_t *all, type_t type)
{
    for (int i = 0; i < all->nb_object; i++) {
        if (all->object[i].type == type) {
            move_rect_player_two(all, i);
        }
    }
}

void move_rect(all_t *all, type_t type)
{
    for (int i = 0; i < all->nb_object; i++) {
        if (all->object[i].type == type) {
            move_rect_player(all, i);
        }
    }
}

void clock_one (all_t *all)
{
    if (all->clock.seconds > 0.005)
        all->time_elapsed++;
    if (all->time_elapsed % 1 == 0)
        first_clock_game_engine(all);
    if (all->time_elapsed % 7 == 0)
        move_rect(all, PLAYER);
    if (all->time_elapsed % 30 == 0)
        all->score++;
    if (all->time_elapsed % 80 == 0)
        all->time_elapsed = 0;
}