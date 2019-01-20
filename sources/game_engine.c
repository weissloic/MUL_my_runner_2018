/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include "my.h"

void game_engine_core(all_t *all)
{
    all->clock.time = sfClock_getElapsedTime(all->clock.clocks);
    all->clock.seconds = all->clock.time.microseconds / 1000000.0;
    jump_gestion(all);
    clock_one(all);
}

void game_engine_core_two(all_t *all)
{
    all->clock.time = sfClock_getElapsedTime(all->clock.clocks);
    all->clock.seconds = all->clock.time.microseconds / 1000000.0;
    clock_two(all);
}

void clock_two(all_t *all)
{
    if (all->clock.seconds > 0.005)
        all->time_elapsed++;
    if (all->time_elapsed % 9 == 0)
        move_rect_two(all, MENU_PLAYER);
    if (all->time_elapsed % 80 == 0)
        all->time_elapsed = 0;
}

void manage_game(all_t *all)
{
    if (all->game == 1) {
        game_engine_core(all);
        all->text[0].position.x = 0;
        all->text[0].position.y = 0;
        sfText_setPosition(all->text[0].text, all->text[0].position);

    } else if (all->pause == 1)
        sfText_setPosition(all->text[0].text, all->text[0].position);
}

void first_clock_game_engine(all_t *all)
{
    obstacle_collide(all);
    move_rect(all, BG);
    set_position(all);
    win_function(all);
}