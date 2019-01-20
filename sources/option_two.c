/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** [file description here]
*/

#include "my.h"

void event_option(all_t *all, sfSprite *sprite_option, sfSprite *select_menu)
{
    if (all->mm_option == 1)
        option_one(all, sprite_option, select_menu);
    else if (all->mm_option == 2)
        option_two(all, sprite_option, select_menu);
    else if (all->mm_option == 3)
        option_three(all, sprite_option, select_menu);
    event_option_two(all, sprite_option, select_menu);
}

void display_menu_option(all_t *all, sfSprite *sprite_option)
{
    menu_adding_option(all);
    sfSprite *select_menu = sfSprite_create();
    all->all_texture.planet_fix = sfSprite_create();
    init_option_menu(all);
    sfSprite_setTextureRect(sprite_option, all->all_texture.rect_mm1);
    sfSprite_setTextureRect(select_menu, all->all_texture.rect_mm2);
    event_option(all, sprite_option, select_menu);
    sfSprite_setPosition(sprite_option, all->all_texture.pos_carre);
    sfSprite_setTexture(sprite_option, all->all_texture.mm1, sfTrue);
    sfRenderWindow_display(all->window.window);
}

void choice_main_menu_option_two(all_t *all)
{
    if (all->mm_option == 4) {
        all->option_menu = 0;
        all->main_menu = 1;
    }
}

void choice_main_menu_option(all_t *all)
{
    if (all->mm_option == 1) {
        all->main_menu = 0;
        all->game = 1;
        sfRenderWindow_clear(all->window.window, sfBlack);
    }
    else if (all->mm_option == 2) {
        sfRenderWindow_close(all->window.window);
        all->main_menu = 0;
    }
    else if (all->mm_option == 3) {
        all->main_menu = 0;
        all->option_menu = 1;
    }
    choice_main_menu_option_two(all);
}

void event_main_menu_option(all_t *all)
{
    while (sfRenderWindow_pollEvent(all->window.window,
    &all->window.event)) {
        if (all->window.event.type == sfEvtClosed) {
            sfRenderWindow_close(all->window.window);
            all->main_menu = 0;
            all->game = 0;
        }
        if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue &&
        all->mm_option < 4)
            all->mm_option++;

        if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue &&
        all-> mm_option > 1)
            all->mm_option--;
        if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue) {
            choice_main_menu_option(all);
        }
    }
}