/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/

#include "my.h"

void display_two(all_t all)
{
    for (int i = 0; i < all.nb_object; i++) {
        if (all.object[i].type == MENU_PLAYER) {
            sfRenderWindow_drawSprite(all.window.window,
            all.object[i].sprite, NULL);
        }
    }
}

void menu_adding_two(all_t *all)
{
    add_texture(all);
    sfRenderWindow_drawSprite(all->window.window,
    all->all_texture.planet_fix,
    NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->all_texture.sprite_planet_fond,
    NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->all_texture.sprite_earth_fond,
    NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->all_texture.sprite_text_astrorunner,
    NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->all_texture.sprite_text_game,
    NULL);
}

void display(all_t all)
{
    sfRenderWindow_clear(all.window.window, sfBlack);

    for (int i = 0; i < all.nb_object; i++) {
        if (all.object[i].display == 1 && all.object[i].type != MENU_PLAYER)
            sfRenderWindow_drawSprite(all.window.window,
            all.object[i].sprite, NULL);
    }
    for (int i = 0; i < all.nb_object; i++) {
        if (all.object[i].type == PLAYER)
            sfRenderWindow_drawSprite(all.window.window,
            all.object[i].sprite, NULL);
    }
}

void display_text(all_t all)
{
    sfRenderWindow_drawText(all.window.window,
    all.text[0].text, NULL);
}