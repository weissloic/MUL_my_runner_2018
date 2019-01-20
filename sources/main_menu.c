/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/


#include "my.h"

void choice_main_menu_two(all_t *all)
{
    if (all->mm == 4) {
        sfRenderWindow_close(all->window.window);
        all->main_menu = 0;
    }
}

void choice_main_menu(all_t *all)
{
    if (all->mm == 1) {
        all->main_menu = 0;
        all->game = 1;
        sfRenderWindow_clear(all->window.window, sfBlack);
        }
    else if (all->mm == 2) {
        sfRenderWindow_close(all->window.window);
        all->main_menu = 0;
    }
    else if (all->mm == 3) {
        all->main_menu = 0;
        all->option_menu = 1;
    }
    choice_main_menu_two(all);
}

void event_main_menu(all_t *all)
{
    while (sfRenderWindow_pollEvent(all->window.window,
    &all->window.event)) {
        if (all->window.event.type == sfEvtClosed) {
            sfRenderWindow_close(all->window.window);
            all->main_menu = 0;
            all->game = 0;
        }
        if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue &&
        all->mm < 4)
            all->mm++;

        if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue &&
        all-> mm > 1)
            all->mm--;
        if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue) {
            choice_main_menu(all);
        }
    }
}

void main_menu(all_t *all)
{
    sfSprite *sprite_menu = sfSprite_create();
    sfSprite *sprite_option = sfSprite_create();
    while (all->main_menu == 1) {
        all->mm_option = 1;
        event_main_menu(all);
        display_menu(all, sprite_menu);
    }
    while (all->option_menu == 1) {
        all->mm = 1;
        event_main_menu_option(all);
        display_menu_option(all, sprite_option);
            while (all->main_menu == 1) {
                all->mm_option = 1;
                event_main_menu(all);
                display_menu(all, sprite_menu);
            }
    }
}